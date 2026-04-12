#include "type.h"

using namespace LuaInterpreter;
using namespace LuaLibs;

void Typing::include(Interpreter* interp) {
    interp->global.set("type", std::make_shared<LuaValue::Function>((cxx_func) &type));
    interp->cxx_funcnames[(cxx_func) &type] = "Typing::type";
    interp->global.set("callable", std::make_shared<LuaValue::Function>((cxx_func) &callable));
    interp->cxx_funcnames[(cxx_func) &callable] = "Typing::callable";
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