#ifndef INTERPRETER_LIBS_TYPE_H
#define INTERPRETER_LIBS_TYPE_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

namespace LuaInterpreter {
namespace LuaLibs {

class Typing {
public:
    static void include(Interpreter* interp);

    static std::vector< std::shared_ptr<Value> > type(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > callable(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static Metatable table_to_metatable(const LuaValue::Table &tb);
    static std::shared_ptr<LuaValue::Table> metatable_to_table(const Metatable &mt);

    static std::vector< std::shared_ptr<Value> > setmetatable(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > getmetatable(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
};

}; // LuaLibs
}; // LuaInterpreter

#endif // INTERPRETER_LIBS_TYPE_H