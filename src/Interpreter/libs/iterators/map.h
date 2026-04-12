#ifndef INTERPRETER_LIBS_MAP_H
#define INTERPRETER_LIBS_MAP_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

namespace LuaInterpreter {
namespace LuaLibs {

class Map {
public:
    static void include(Interpreter* interp);

    static void include_imap(Interpreter* interp);
    static void include_map(Interpreter* interp);
}; // Map

}; // LuaLibs
}; // LuaInterpreter

#endif // INTERPRETER_LIBS_MAP_H