#ifndef INTERPRETER_VALUE_H
#define INTERPRETER_VALUE_H

#include "Base.hpp"

namespace LuaInterpreter {

namespace LuaValue {

class Nil: public Value {
    virtual Type type() const override { return Type::NIL; };
};

class Boolean: public Value {
public:
    virtual Type type() const override { return Type::BOOLEAN; };
    
    bool value;
    Boolean(): value(false) {}
    Boolean(bool value): value(value) {}
};

class Number: public Value {
public:
    virtual Type type() const override { return Type::NUMBER; };

    enum class Kind {
        INT,
        FLOAT,
    } kind;

    union {
        std::int64_t integer;
        std::float64_t floating; 
    };
    
    Number(): kind(Kind::INT), integer(0) {}
    Number(std::int64_t integer): kind(Kind::INT), integer(integer) {}
    Number(std::float64_t floating): kind(Kind::FLOAT), floating(floating) {}

    Number operator+(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return Number(this->integer + other.integer);
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return Number(v1 + v2);
    }

    Number operator-(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return Number(this->integer - other.integer);
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return Number(v1 - v2);
    }

    Number operator*(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return Number(this->integer * other.integer);
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return Number(v1 * v2);
    }

    Number operator/(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            std::int64_t v1 = this->integer;
            std::int64_t v2 = other.integer;

            std::int64_t div = v1 / v2;
            if (div*v2 == v1) return Number(this->integer / other.integer);
            
            return Number(std::float64_t(this->integer) / std::float64_t(other.integer));
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return Number(v1 * v2);
    }

    bool operator>(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return this->integer > other.integer;
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return v1 > v2;
    }
    bool operator>=(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return this->integer >= other.integer;
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return v1 >= v2;
    }

    bool operator<(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return this->integer < other.integer;
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return v1 < v2;
    }
    bool operator<=(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return this->integer <= other.integer;
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return v1 <= v2;
    }

    bool operator==(const Number& other) {
        if (kind == Kind::INT && other.kind == Kind::INT) {
            return this->integer == other.integer;
        }
        std::float64_t v1, v2;
        
        if (this->kind == Kind::INT) v1 = std::float64_t(this->integer);
        else v1 = this->floating;

        if (other.kind == Kind::INT) v2 = std::float64_t(other.integer);
        else v2 = other.floating;

        return v1 == v2;
    }
    bool operator!=(const Number& other) {
        return !(*this == other);
    }
};

class String: public Value {
public:
    virtual Type type() const override { return Type::STRING; };
    std::string value;
};

class Function: public Value {
public:
    virtual Type type() const override { return Type::FUNCTION; };
    std::shared_ptr<LuaAST::FuncBody> body;  
};

class Thread: public Value {
public:
    virtual Type type() const override { return Type::THREAD; };
};

class Userdata: public Value {
public:
    virtual Type type() const override { return Type::USERDATA; };
    Metatable meta;
    void* data;
};

class Table: public Value {
public:
    virtual Type type() const override { return Type::TABLE; };
    Metatable meta;
private:
    std::unordered_map< std::string , std::shared_ptr<Value> > string_table;
    std::unordered_map< std::int64_t , std::shared_ptr<Value> > int_table;
    std::unordered_map< std::float64_t, std::shared_ptr<Value> > float_table;
    std::unordered_map< LuaAST::FuncBody* , std::shared_ptr<Value> > func_table;
    std::unordered_map< void* , std::shared_ptr<Value> > data_table;
public:

    std::shared_ptr<Value> at(const String &key) {
        return string_table.at(key.value);
    }
    void set(const String &key, std::shared_ptr<Value> value) {
        string_table[key.value] = value;
    }

    std::shared_ptr<Value> at(const Number &key) {
        if (key.kind == Number::Kind::INT) return int_table.at(key.integer);
        return float_table.at(key.floating);
    }
    void set(const Number &key, std::shared_ptr<Value> value) {
        if (key.kind == Number::Kind::INT) int_table[key.integer] = value;
        float_table[key.floating] = value;
    }

    std::shared_ptr<Value> at(const Function &key) {
        return func_table.at(key.body.get());
    }
    void set(const Function &key, std::shared_ptr<Value> value) {
        func_table[key.body.get()] = value;
    }

    std::shared_ptr<Value> at(const Userdata &key) {
        return data_table.at(key.data);
    }
    void set(const Userdata &key, std::shared_ptr<Value> value) {
        data_table[key.data] = value;
    }

    std::shared_ptr<Value> at(const Table &key) {
        throw std::runtime_error("Table indexing by table is not supported");
        return nullptr;
    }
    void set(const Table &key, std::shared_ptr<Value> value) {
        throw std::runtime_error("Table indexing by table is not supported");
    }

    std::shared_ptr<Value> at(const Thread &key) {
        throw std::runtime_error("Table indexing by thread is not supported");
        return nullptr;
    }
    void set(const Thread &key, std::shared_ptr<Value> value) {
        throw std::runtime_error("Table indexing by thread is not supported");
    }
};

} // LuaValue
} // LuaInterpreter

#endif // INTERPRETER_VALUE_H