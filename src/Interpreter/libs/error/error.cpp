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

    // argN ... arg1
    std::reverse(args.begin(), args.end());
    args.pop_back();
    if (pair.second) args.push_back(pair.second);

    std::vector< std::shared_ptr<Value> > result;
    
    Catch c = {
        .ip = exec->ip,
        .ret_addr_size = exec->ret_addr.size(),
        .scopes_size = exec->scopes.size(),
        .stacks_size = exec->stacks.size(),
        .callstack_size = exec->callstack.size(),
        .to_return_size = exec->to_return.size(),
    };

    try {
        auto put = Instruction{ .type = Instruction::Type::PUT_STACK };
        auto pop = Instruction{ .type = Instruction::Type::POP_STACK };
        
        exec->PUT_STACK( &put );
        
        exec->raw_call(function, args, Executioner::ALL);
        if (!function->func) {
            int end_point = exec->to_return.size() - 1;
            // user-defined func
            while ((int)exec->to_return.size() != end_point) {
                exec->execute();
                // till first RET
            }
        }

        
        auto &top = exec->stacks.top();

        while (!top.empty()) {
            if (!exec->is_barrier(top)) {
                result.push_back(top.top());
            } 
            top.pop();
        }
        result.push_back( std::make_shared<LuaValue::Boolean>(true) );
        std::reverse(result.begin(), result.end());

        exec->POP_STACK( &pop );
    } catch (std::runtime_error &e) {
        #ifdef INTERPRETER_DEBUG
        std::cout << "pcall caught exception: " << e.what() << std::endl;
        #endif
        while (exec->ret_addr.size()    != c.ret_addr_size  ) exec->ret_addr.pop();
        while (exec->scopes.size()      != c.scopes_size    ) exec->scopes.pop();
        while (exec->stacks.size()      != c.stacks_size    ) exec->stacks.pop();
        while (exec->callstack.size()   != c.callstack_size ) exec->callstack.pop();
        while (exec->to_return.size()   != c.to_return_size ) exec->to_return.pop();
        exec->ip = c.ip;
        result.push_back( std::make_shared<LuaValue::Boolean>(false) );
        result.push_back( std::make_shared<LuaValue::String>(e.what()) );
    }

    return result;
}