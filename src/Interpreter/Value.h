#ifndef INTERPRETER_VALUE_H
#define INTERPRETER_VALUE_H

#include "Base.h"
#include <cmath>

namespace LuaInterpreter {

namespace LuaValue {

class Barrier: public Value {
public:
    ~Barrier();
    virtual Type type() const override;
};

class Nil: public Value {
public:
    ~Nil();
    virtual Type type() const override;
};

class Boolean: public Value {
public:
    ~Boolean();
    virtual Type type() const override;
    
    bool value;
    Boolean();
    Boolean(bool value);
};

class Number: public Value {
public:
    ~Number();
    virtual Type type() const override;

    enum class Kind {
        INT,
        FLOAT,
    } kind;

    union {
        std::int64_t integer;
        std::float64_t floating; 
    };
    
    Number();
    Number(std::int64_t integer);
    Number(std::float64_t floating);

    Number operator+(const Number& other);

    Number operator-(const Number& other);

    Number operator*(const Number& other);

    Number operator/(const Number& other);

    bool operator>(const Number& other);
    bool operator>=(const Number& other);

    bool operator<(const Number& other);
    bool operator<=(const Number& other);

    bool operator==(const Number& other);
    bool operator!=(const Number& other);
};

class String: public Value {
public:
    ~String();
    virtual Type type() const override;

    String();
    String(const std::string& str);
    std::string value;
};

class Function: public Value {
public:
    ~Function();
    virtual Type type() const override;
    // std::shared_ptr<LuaAST::FuncBody> body;  

    Function(const std::string& label, size_t arg_N, const std::string& varg);

    Function(cxx_func func);

    cxx_func func;
    std::string label;
    size_t arg_N;
    std::string varg = "varg";

    std::string key() const;
};

class Thread: public Value {
public:
    ~Thread();
    virtual Type type() const override;
};

class Userdata: public Value {
public:
    ~Userdata();
    virtual Type type() const override;
    Metatable meta;
    void* data;

    Userdata();
    Userdata(void* data);
    Userdata(const std::string& strtype);

    void set_type(const std::string& strtype);
    void ensure_type(const std::string& strtype);
};

class Table: public Value {
public:
    ~Table();
    virtual Type type() const override;
    Metatable meta;
    // private:
    std::unordered_map< std::string , std::shared_ptr<Value> > string_table;
    std::unordered_map< std::int64_t , std::shared_ptr<Value> > int_table;

    // label -> value
    std::unordered_map< std::string , std::shared_ptr<Value> > func_table;
    std::unordered_map< void* , std::shared_ptr<Value> > data_table;
public:
    std::shared_ptr<Value> at(std::shared_ptr<Value> key);
    void set(std::shared_ptr<Value> key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(size_t key);
    void set(size_t key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(const std::string &key);
    void set(const std::string &key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(const String &key);
    void set(const String &key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(const Number &key);
    void set(const Number &key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(const Function &key);
    void set(const Function &key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(const Userdata &key);
    void set(const Userdata &key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(const Table &key);
    void set(const Table &key, std::shared_ptr<Value> value);

    std::shared_ptr<Value> at(const Thread &key);
    void set(const Thread &key, std::shared_ptr<Value> value);
};

} // LuaValue
} // LuaInterpreter

#endif // INTERPRETER_VALUE_H