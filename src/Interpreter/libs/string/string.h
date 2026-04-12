#ifndef INTERPRETER_LIBS_STRING_H
#define INTERPRETER_LIBS_STRING_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

namespace LuaInterpreter {
namespace LuaLibs {

class StringLib {
public:
    static void include(Interpreter* interp);

    static std::vector< std::shared_ptr<Value> > byte(Executioner* exec, std::vector< std::shared_ptr<Value> > &args);
    static std::vector< std::shared_ptr<Value> > char_(Executioner* exec, std::vector< std::shared_ptr<Value> > &args);
    static std::vector< std::shared_ptr<Value> > find(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
    static std::vector< std::shared_ptr<Value> > format(Executioner* exec, std::vector< std::shared_ptr<Value> > &args);  
    static std::vector< std::shared_ptr<Value> > len(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
    static std::vector< std::shared_ptr<Value> > lower(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
    static std::vector< std::shared_ptr<Value> > rep(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
    static std::vector< std::shared_ptr<Value> > reverse(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
    static std::vector< std::shared_ptr<Value> > sub(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
    static std::vector< std::shared_ptr<Value> > upper(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
};

}; // LuaLibs
}; // LuaInterpreter

#endif // INTERPRETER_LIBS_STRING_H