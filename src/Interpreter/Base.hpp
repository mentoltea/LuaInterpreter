#ifndef INTERPRETER_BASE_H
#define INTERPRETER_BASE_H

#include <memory>
#include <unordered_map>
#include <string>
#include <thread>
#include <stdint.h>
#include <stdfloat>

#include "rwlock.hpp"
#include "AST.hpp"

namespace LuaInterpreter {

// There are eight basic types in Lua: nil, boolean, number, string, function, userdata, thread, and table

class Value;

// table, userdata : individual tables for each object
// string : one common metatable for all strings
// nil, boolean, number, thread, function : NO table
class Metatable {
    std::unordered_map< std::string , std::shared_ptr<Value> > data;
public:
    std::shared_ptr<Value> at(const std::string &key) {
        return data.at(key);
    }
    void set(const std::string &key, std::shared_ptr<Value> value) {
        data[key] = value;
    }
};

class Value {
    RWLock lock;
public:
    enum class Type {
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

    void rlock() {lock.read_lock();}
    void runlock() {lock.read_unlock();}

    void wlock() {lock.write_lock();}
    void wunlock() {lock.write_unlock();}
};

} // LuaInterpreter

#endif // INTERPRETER_BASE_H