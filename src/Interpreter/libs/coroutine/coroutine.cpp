#include "coroutine.h"

using namespace LuaInterpreter;
using namespace LuaLibs;
using namespace LuaValue;

void Coroutine::include(Interpreter* interp) {
    auto table = std::make_shared<Table>();

    table->set("close", std::make_shared<Function>( (cxx_func) &close) );
    interp->cxx_funcnames[(cxx_func) &close] = "Coroutine::close";

    table->set("create", std::make_shared<Function>( (cxx_func) &create) );
    interp->cxx_funcnames[(cxx_func) &create] = "Coroutine::create";

    table->set("isyieldable", std::make_shared<Function>( (cxx_func) &isyieldable) );
    interp->cxx_funcnames[(cxx_func) &isyieldable] = "Coroutine::isyieldable";
    
    table->set("ready", std::make_shared<Function>( (cxx_func) &ready) );
    interp->cxx_funcnames[(cxx_func) &ready] = "Coroutine::ready";

    table->set("resume", std::make_shared<Function>( (cxx_func) &resume) );
    interp->cxx_funcnames[(cxx_func) &resume] = "Coroutine::resume";

    table->set("running", std::make_shared<Function>( (cxx_func) &running) );
    interp->cxx_funcnames[(cxx_func) &running] = "Coroutine::running";

    table->set("status", std::make_shared<Function>( (cxx_func) &status) );
    interp->cxx_funcnames[(cxx_func) &status] = "Coroutine::status";

    table->set("wrap", std::make_shared<Function>( (cxx_func) &wrap) );
    interp->cxx_funcnames[(cxx_func) &wrap] = "Coroutine::wrap";

    table->set("yield", std::make_shared<Function>( (cxx_func) &yield) );
    interp->cxx_funcnames[(cxx_func) &yield] = "Coroutine::yield";    

    interp->global.set("coroutine", table);
}

std::vector< std::shared_ptr<Value> > Coroutine::close (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 1) throw std::runtime_error("Coroutine::close - expected exactly 1 argument");
    if (args[0]->type() != Value::Type::THREAD) throw std::runtime_error("Coroutine::close - expected thread");
    auto thread = std::static_pointer_cast<Thread>(args[0]);

    thread->thread->rets.clear();
    thread->thread->stacks = std::stack < std::stack < std::shared_ptr<Value> > > ();
    thread->thread->scopes = std::stack < std::vector< Scope > > ();
    thread->thread->tied_to = nullptr;

    return { std::make_shared<Boolean>(true) };
}

std::vector< std::shared_ptr<Value> > Coroutine::create (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 1) throw std::runtime_error("Coroutine::create - expected exactly 1 argument");

    if (args[0]->type() != Value::Type::FUNCTION) throw std::runtime_error("Coroutine::create - expected function");
    auto func = std::static_pointer_cast<Function>(args[0]);
    if (func->func) throw std::runtime_error("Coroutine::create - cannot make coroutine from cxx function");

    auto *g = exec->g;
    g->workers.push_back(
        std::make_unique< Executioner >( g, g->next_tid++, func, std::vector< std::shared_ptr<Value> >())
    );
    auto new_thread = g->workers.back().get();
    new_thread->suspended = true;

    new_thread->tied_to = std::make_shared<Thread>(new_thread);

    return { new_thread->tied_to };
}

std::vector< std::shared_ptr<Value> > Coroutine::isyieldable (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 1) throw std::runtime_error("Coroutine::isyieldable - expected exactly 1 argument");
    if (args[0]->type() != Value::Type::THREAD) throw std::runtime_error("Coroutine::isyieldable - expected thread");
    auto thread = std::static_pointer_cast<Thread>(args[0]);

    return { std::make_shared<Boolean>( thread->thread != exec->g->workers[0].get() ) }; 
}

std::vector< std::shared_ptr<Value> > Coroutine::ready (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.size() != 1) throw std::runtime_error("Coroutine::ready - expected exactly 1 argument");
    if (args[0]->type() != Value::Type::THREAD) throw std::runtime_error("Coroutine::ready - expected thread");
    auto thread = std::static_pointer_cast<Thread>(args[0]);

    return { std::make_shared<Boolean>( thread->thread->suspended ) }; 
}

std::vector< std::shared_ptr<Value> > Coroutine::resume (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.empty()) throw std::runtime_error("Coroutine::resume - expected at least 1 argument");
    if (args[0]->type() != Value::Type::THREAD) throw std::runtime_error("Coroutine::resume - expected thread");
    auto thread = std::static_pointer_cast<Thread>(args[0]);
    
    if (!thread->thread->running) {
        std::vector< std::shared_ptr<Value> > result;
        result.push_back( std::make_shared<Nil>() );
        for (auto &arg: thread->thread->rets) {
            result.push_back(arg);
        }
        return result; 
    }

    size_t N = args.size();
    if (!thread->thread->suspended) {
        if (N > 0) {
            throw std::runtime_error("Coroutine::resume - cannot pass arguments to not suspended coroutine");
        }
    } else {
        thread->thread->suspended = false;
    
        
        for (size_t i=1; i<N; i++) {
            thread->thread->stacks.top().push( args[i] );
        }
    }

    exec->suspended = true;
    thread->waiters.push_back(exec);

    return { }; 
}

std::vector< std::shared_ptr<Value> > Coroutine::running (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (!args.empty()) throw std::runtime_error("Coroutine::running - arguments are not expected");

    bool is_main = (exec == exec->g->workers[0].get());
    if (!exec->tied_to) {
        exec->tied_to = std::make_shared<Thread>(exec);
    }
    
    return {exec->tied_to, std::make_shared<Boolean>(is_main)};
}

std::vector< std::shared_ptr<Value> > Coroutine::status (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.empty()) throw std::runtime_error("Coroutine::status - expected at least 1 argument");
    if (args[0]->type() != Value::Type::THREAD) throw std::runtime_error("Coroutine::status - expected thread");
    auto thread = std::static_pointer_cast<Thread>(args[0]);

    if (!thread->thread->running) return {std::make_shared<String>("dead")};
    if (thread->thread->suspended) return {std::make_shared<String>("suspended")};
    return {std::make_shared<String>("running")};
}


Coroutine::Wrapper::Wrapper(std::shared_ptr<Thread> thread):
    Userdata(typestr),
    thread(thread)
{
    data = thread.get();
    meta.set("__call", std::make_shared<Function>( (cxx_func) &__call_wrapper ));
}

std::vector< std::shared_ptr<Value> > Coroutine::Wrapper::__call (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    ensure_type(typestr);

    // args[0] = this
    args[0] = this->thread;
    return resume(exec, args);
}

std::vector< std::shared_ptr<Value> > Coroutine::Wrapper::__call_wrapper (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    if (args.empty()) throw std::runtime_error("Coroutine::Wrapper::__call_wrapper - expected arguments");
    if (args[0]->type() != Value::Type::USERDATA) throw std::runtime_error("Coroutine::Wrapper::__call_wrapper - first argument must be wrapper type");

    auto wrapper = std::static_pointer_cast<Wrapper>(args[0]);
    return wrapper->__call(exec, args);
}


std::vector< std::shared_ptr<Value> > Coroutine::wrap (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    auto res = create(exec, args);
    auto thread = std::static_pointer_cast<Thread>(res[0]);

    auto wrapper = std::make_shared<Wrapper>(thread);
    return {wrapper};
}

std::vector< std::shared_ptr<Value> > Coroutine::yield (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
) {
    exec->rets = args;
    exec->release_turn();
    exec->suspended = true;

    return {};
}