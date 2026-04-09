#include "Value.h"

using namespace LuaInterpreter;
using namespace LuaValue;

Barrier::~Barrier() = default;
Value::Type Barrier::type() const { return Type::BARRIER; };

Nil::~Nil() = default;
Value::Type Nil::type() const { return Type::NIL; };

Boolean::~Boolean() = default;
Value::Type Boolean::type() const { return Type::BOOLEAN; };

Boolean::Boolean(): value(false) {}
Boolean::Boolean(bool value): value(value) {}

Number::~Number() = default;
Value::Type Number::type() const { return Type::NUMBER; };

Number::Number(): kind(Kind::INT), integer(0) {}
Number::Number(std::int64_t integer): kind(Kind::INT), integer(integer) {}
Number::Number(std::float64_t floating): kind(Kind::FLOAT), floating(floating) {}

Number Number::operator+(const Number& other) {
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

Number Number::operator-(const Number& other) {
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

Number Number::operator*(const Number& other) {
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

Number Number::operator/(const Number& other) {
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

bool Number::operator>(const Number& other) {
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
bool Number::operator>=(const Number& other) {
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

bool Number::operator<(const Number& other) {
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
bool Number::operator<=(const Number& other) {
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

bool Number::operator==(const Number& other) {
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
bool Number::operator!=(const Number& other) {
    return !(*this == other);
}

String::~String() = default;
Value::Type String::type() const { return Type::STRING; };

String::String() {}
String::String(const std::string& str): value(str) {}



Function::~Function() = default;
Value::Type Function::type() const { return Type::FUNCTION; };

Function::Function(const std::string& label, size_t arg_N, const std::string& varg) {
    this->label = label;
    this->func = nullptr;
    this->arg_N = arg_N;
    this->varg = varg;
}

Function::Function(cxx_func func) {
    this->func = func;
}

std::string Function::key() const {
    if (func) return "cxx_func__" + std::to_string((int64_t) func);
    return label;
}



Thread::~Thread() = default;
Value::Type Thread::type() const { return Type::THREAD; };


Userdata::~Userdata() = default;
Userdata::Userdata() {
    set_type("Userdata");
}
Userdata::Userdata(const std::string& strtype) {
    set_type(strtype);
}

Value::Type Userdata::type() const { return Type::USERDATA; };

void Userdata::set_type(const std::string& strtype) {
    meta.set("__type",  std::make_shared<LuaValue::String>( strtype ));
}

void Userdata::ensure_type(const std::string& strtype) {
    auto obj = meta.at("__type");
    if (!obj) {
        throw std::runtime_error("Userdata::ensure_type - no \"__type\" metafield");
    }
    if (obj->type() != Value::Type::STRING) {
        throw std::runtime_error("Userdata::ensure_type - unexpected \"__type\" type :" + std::to_string((int)obj->type()));
    }
    auto str = std::static_pointer_cast<LuaValue::String>(obj);
    if (str->value != strtype) {
        throw std::runtime_error("Userdata::ensure_type - unexpected \"__type\" value :" + str->value);
    }
}


Table::~Table() = default;
Value::Type Table::type() const { return Type::TABLE; };

std::shared_ptr<Value> Table::at(const Value &key) {
    throw std::runtime_error("Table::at(const Value &key)");
}
void Table::set(const Value &key, std::shared_ptr<Value> value) {
    throw std::runtime_error("Table::set(const Value &key, std::shared_ptr<Value> value)");
}

std::shared_ptr<Value> Table::at(size_t key) {
    return int_table.at(key);
}
void Table::set(size_t key, std::shared_ptr<Value> value) {
    int_table[key];
}

std::shared_ptr<Value> Table::at(const std::string &key) {
    return string_table.at(key);
}
void Table::set(const std::string &key, std::shared_ptr<Value> value) {
    string_table[key] = value;
}

std::shared_ptr<Value> Table::at(const String &key) {
    return string_table.at(key.value);
}
void Table::set(const String &key, std::shared_ptr<Value> value) {
    string_table[key.value] = value;
}

std::shared_ptr<Value> Table::at(const Number &key) {
    if (key.kind == Number::Kind::INT) return int_table.at(key.integer);
    return int_table.at( std::round( key.floating ) );
}
void Table::set(const Number &key, std::shared_ptr<Value> value) {
    if (key.kind == Number::Kind::INT) int_table[key.integer] = value;
    int_table[ std::round(key.floating) ] = value;
}

std::shared_ptr<Value> Table::at(const Function &key) {
    return func_table.at(key.key());
}
void Table::set(const Function &key, std::shared_ptr<Value> value) {
    func_table[key.key()] = value;
}

std::shared_ptr<Value> Table::at(const Userdata &key) {
    return data_table.at(key.data);
}
void Table::set(const Userdata &key, std::shared_ptr<Value> value) {
    data_table[key.data] = value;
}

std::shared_ptr<Value> Table::at(const Table &key) {
    throw std::runtime_error("Table indexing by table is not supported");
    return nullptr;
}
void Table::set(const Table &key, std::shared_ptr<Value> value) {
    throw std::runtime_error("Table indexing by table is not supported");
}

std::shared_ptr<Value> Table::at(const Thread &key) {
    throw std::runtime_error("Table indexing by thread is not supported");
    return nullptr;
}
void Table::set(const Thread &key, std::shared_ptr<Value> value) {
    throw std::runtime_error("Table indexing by thread is not supported");
}