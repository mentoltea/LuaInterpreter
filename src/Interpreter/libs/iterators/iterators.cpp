#include "iterators.h"

using namespace LuaInterpreter;
using namespace LuaLibs;

void Iterators::include(Interpreter* interp) {
    interp->global.set("ipairs", std::make_shared<LuaValue::Function>((cxx_func) &ipairs));
}

std::vector< std::shared_ptr<Value> > Iterators::ipairs(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 1) throw std::runtime_error("Iterators::ipairs - Expected exactly 1 argument");
    if (args[0]->type() != Value::Type::TABLE) throw std::runtime_error("Iterators::ipairs - Argument must be a table");
    auto table = std::static_pointer_cast<LuaValue::Table>(args[0]);
    auto func = std::make_shared<IIterator>( table );
    auto idx = std::make_shared<LuaValue::Number>((int64_t) 0);

    return {func, table, idx};
}




Iterators::Iterator::Iterator(const std::string& typestr, std::shared_ptr<Value> container):
    Userdata(typestr),
    container(container)
{
    data = container.get();
    meta.set("__call", std::make_shared<LuaValue::Function>((cxx_func) &next_wrapper));
}


std::vector< std::shared_ptr<Value> > Iterators::Iterator::next_wrapper(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args[0]->type() != Value::Type::USERDATA) throw std::runtime_error("Iterators::Iterator::next_wrapper - Expected an iterator");
    auto it = std::static_pointer_cast<Iterator>(args[0]);
    return it->next(exec, args);
}




Iterators::IIterator::IIterator(std::shared_ptr<LuaValue::Table> container):
    Iterator(typestr, container),
    next_idx(0)
{}

std::vector< std::shared_ptr<Value> > Iterators::IIterator::next(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    ensure_type(typestr);

    // arg[0] = this
    // arg[1] = container
    // arg[2] = key

    if (args.size() != 3) throw std::runtime_error("Iterators::IIterator::next - Too few arguments");
    // ignore arguments
    auto table = std::static_pointer_cast<LuaValue::Table>(container);

    if (next_idx >= table->int_table.size()) {
        return { std::make_shared<LuaValue::Nil>() };
    }

    size_t idx = next_idx++;
    auto v = table->at(idx);
    if (!v) v = std::make_shared<LuaValue::Nil>();

    return {
        std::make_shared<LuaValue::Number>((int64_t) idx),
        v
    };
}