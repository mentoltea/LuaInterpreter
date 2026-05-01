#include "error.h"

using namespace LuaInterpreter;
using namespace LuaLibs;

void Error::include(Interpreter* interp) {
    interp->global.set("error", std::make_shared<LuaValue::Function>((cxx_func) &error));
    interp->cxx_funcnames[(cxx_func) &error] = "Error::error";
    interp->global.set("pcall", std::make_shared<LuaValue::Function>((cxx_func) &pcall));
    interp->cxx_funcnames[(cxx_func) &pcall] = "Error::pcall";
}

std::vector< std::shared_ptr<Value> > Error::error (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.empty()) throw std::runtime_error("Unspecified error");
    if (args[0]->type() == Value::Type::STRING) {
        auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
        throw std::runtime_error(str->value);
    }
    throw std::runtime_error(exec->type_of(args[0]));

    return {};
}

std::vector< std::shared_ptr<Value> > Error::pcall (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.empty()) throw std::runtime_error("Error::pcall - expected functional object");
    
    auto pair = exec->to_function(args[0], Executioner::ALL);
    if (!pair.first) throw std::runtime_error("Error::pcall - object is not callable");
    auto function = pair.first;
    if (function->func) {
        throw std::runtime_error("Error:pcall - cannot wrap call to C/Cxx functions");
    }

    // argN ... arg1
    std::reverse(args.begin(), args.end());
    args.pop_back();
    if (pair.second) args.push_back(pair.second);

    std::vector< std::shared_ptr<Value> > result;
    
    // exec->callstack.pop();

    Executioner::Catch c = {
        .ip = exec->ip,
        .ret_addr_size = exec->ret_addr.size(),
        .scopes_size = exec->scopes.size(),
        .stacks_size = exec->stacks.size(),
        .callstack_size = exec->callstack.size() - 1, // pcall is on callstack
        .to_return_size = exec->to_return.size(),
    };
    exec->pcalls.push(c);

    exec->raw_lua_call(function, args, Executioner::ALL);

    return {};
}