#ifndef INTERPRETER_LIBS_COROUTINE_H
#define INTERPRETER_LIBS_COROUTINE_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

namespace LuaInterpreter {
namespace LuaLibs {

class Coroutine {
public:
    static void include(Interpreter* interp);

    static std::vector< std::shared_ptr<Value> > close (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > create (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > isyieldable (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > ready (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > resume (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > running (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > status (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    class Wrapper: public LuaValue::Userdata {
        public:
        static constexpr std::string typestr = "__resumer";
        std::shared_ptr<LuaValue::Thread> thread;
        Wrapper(std::shared_ptr<LuaValue::Thread> thread);

        static std::vector< std::shared_ptr<Value> > __call_wrapper (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );

        std::vector< std::shared_ptr<Value> > __call (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );
    };

    static std::vector< std::shared_ptr<Value> > wrap (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > yield (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
};

}; // LuaLibs
}; // LuaInterpreter

#endif // INTERPRETER_LIBS_COROUTINE_H