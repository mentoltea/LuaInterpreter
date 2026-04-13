#include "type.h"

using namespace LuaInterpreter;
using namespace LuaLibs;

void Typing::include(Interpreter* interp) {
    interp->global.set("type", std::make_shared<LuaValue::Function>((cxx_func) &type));
    interp->cxx_funcnames[(cxx_func) &type] = "Typing::type";
    interp->global.set("callable", std::make_shared<LuaValue::Function>((cxx_func) &callable));
    interp->cxx_funcnames[(cxx_func) &callable] = "Typing::callable";
    interp->global.set("setmetatable", std::make_shared<LuaValue::Function>((cxx_func) &setmetatable));
    interp->cxx_funcnames[(cxx_func) &setmetatable] = "Typing::setmetatable";
    interp->global.set("getmetatable", std::make_shared<LuaValue::Function>((cxx_func) &getmetatable));
    interp->cxx_funcnames[(cxx_func) &getmetatable] = "Typing::getmetatable";
}

std::vector< std::shared_ptr<Value> > Typing::type(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.empty()) {
        return { std::make_shared<LuaValue::Nil>() };
    }
    std::vector< std::shared_ptr<Value> > result;
    for (auto& arg: args) {
        result.push_back(
            std::make_shared<LuaValue::String>( exec->type_of(arg) )
        );
    }
    return result;
}

std::vector< std::shared_ptr<Value> > Typing::callable(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 1) {
        throw std::runtime_error("Type::callable - expected exactly 1 argument");
    }
    auto pair = exec->to_function(args[0], Executioner::ALL);
    if (pair.first) return { std::make_shared<LuaValue::Boolean>(true) };
    return { std::make_shared<LuaValue::Boolean>(false) };
}

Metatable Typing::table_to_metatable(const LuaValue::Table &tb) {
    Metatable mt;
    mt.data = tb.string_table;
    return mt;
}

std::shared_ptr<LuaValue::Table> Typing::metatable_to_table(const Metatable &mt) {
    auto tb = std::make_shared<LuaValue::Table>();
    tb->string_table = mt.data;
    return tb;
}

std::vector< std::shared_ptr<Value> > Typing::setmetatable(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 2) {
        throw std::runtime_error("Type::setmetatable - expected exactly 2 arguments");
    }
    
    if (args[0]->type() != Value::Type::TABLE) {
        throw std::runtime_error("Type::setmetatable - first argument must be table");
    }
    auto table = std::static_pointer_cast<LuaValue::Table>(args[0]);

    if (args[1]->type() == Value::Type::TABLE) {
        auto reftable = std::static_pointer_cast<LuaValue::Table>(args[1]);
        if (reftable->string_table.contains("__is_metatable")) {
            table->meta = table_to_metatable(*reftable);
        } else {
            table->meta = reftable->meta;
        }
    } else
    if (args[1]->type() == Value::Type::USERDATA) {
        auto ud = std::static_pointer_cast<LuaValue::Userdata>(args[1]);
        table->meta = ud->meta;
    } else
    if (args[1]->type() == Value::Type::STRING) {
        auto str = exec->get("string");
        if (!str) throw std::runtime_error("Type::setmetatable - string library not found");
        if (str->type() != Value::Type::TABLE) throw std::runtime_error("Type::setmetatable - string is not a table");
        auto reftable = std::static_pointer_cast<LuaValue::Table>(str);
        table->meta = reftable->meta;
    } else 
    {
        throw std::runtime_error("Type::setmetatable - Cannot copy metatable from object without metatable");
    }

    return {table};
}

std::vector< std::shared_ptr<Value> > Typing::getmetatable(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 1) {
        throw std::runtime_error("Type::getmetatable - expected exactly 1 arguments");
    }

    Metatable *mt = nullptr;
    if (args[0]->type() == Value::Type::TABLE) {
        auto reftable = std::static_pointer_cast<LuaValue::Table>(args[0]);
        mt = &reftable->meta;
    } else 
    if (args[0]->type() == Value::Type::USERDATA) {
        auto refud = std::static_pointer_cast<LuaValue::Userdata>(args[0]);
        mt = &refud->meta;
    } else 
    if (args[0]->type() == Value::Type::STRING) {
        auto str = exec->get("string");
        if (!str) throw std::runtime_error("Type::getmetatable - string library not found");
        if (str->type() != Value::Type::TABLE) throw std::runtime_error("Type::getmetatable - string is not a table");
        auto reftable = std::static_pointer_cast<LuaValue::Table>(str);

        mt = &reftable->meta;
    } else 
    {
        throw std::runtime_error("Type::getmetatable - Cannot get metatable from object without metatable");
    }

    auto tb = metatable_to_table(*mt);

    return {tb};
}