#ifndef INTERPRETER_BASE_H
#define INTERPRETER_BASE_H

#include <memory>
#include <unordered_map>
#include <string>
#include <thread>
#include <stdint.h>
#include <stdfloat>
#include <vector>

namespace LuaInterpreter {

// There are eight basic types in Lua: nil, boolean, number, string, function, userdata, thread, and table

class Value;

// table, userdata : individual tables for each object
// string : one common metatable for all strings
// nil, boolean, number, thread, function : NO table
class Metatable {
    std::unordered_map< std::string , std::shared_ptr<Value> > data;
public:
    std::shared_ptr<Value> at(const std::string &key);
    void set(const std::string &key, std::shared_ptr<Value> value);
};

class Value {
public:
    enum class Type {
        BARRIER,
        NIL,
        BOOLEAN,
        NUMBER,
        STRING,
        FUNCTION,
        THREAD,
        USERDATA,
        TABLE,
    };
    virtual Type type() const = 0;
};

class Executioner;

typedef std::vector< std::shared_ptr<Value> > (*cxx_func) (
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > args
);

} // LuaInterpreter

#endif // INTERPRETER_BASE_H