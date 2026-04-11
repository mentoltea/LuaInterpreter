#ifndef INTERPRETER_LIBS_ERROR_H
#define INTERPRETER_LIBS_ERROR_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

namespace LuaInterpreter {
namespace LuaLibs {

class Error {
public:
    static void include(Interpreter* interp);

    static std::vector< std::shared_ptr<Value> > error (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    struct Catch {
        size_t ip;

        size_t ret_addr_size;
        size_t scopes_size;
        size_t stacks_size;
        size_t callstack_size;
        size_t to_return_size;
    };

    static std::vector< std::shared_ptr<Value> > pcall (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
};

}; // LuaLibs
}; // LuaInterpreter
#endif // INTERPRETER_LIBS_ERROR_H