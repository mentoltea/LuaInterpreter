#include "./string.h"

#include <cstring>

using namespace LuaInterpreter;
using namespace LuaLibs;

void StringLib::include(Interpreter* interp) {
    auto table = std::make_shared< LuaValue::Table >();

    table->set("__index",  table );

    table->set("byte",  std::make_shared<LuaValue::Function>((cxx_func) &byte) );
    interp->cxx_funcnames[(cxx_func) &byte] = "String::byte";

    table->set("char",     std::make_shared<LuaValue::Function>((cxx_func) &char_) );
    interp->cxx_funcnames[(cxx_func) &char_] = "String::char";

    table->set("find",  std::make_shared<LuaValue::Function>((cxx_func) &find) );
    interp->cxx_funcnames[(cxx_func) &find] = "String::find";

    table->set("format",    std::make_shared<LuaValue::Function>((cxx_func) &format) );
    interp->cxx_funcnames[(cxx_func) &format] = "String::format";

    table->set("len",   std::make_shared<LuaValue::Function>((cxx_func) &len) );
    interp->cxx_funcnames[(cxx_func) &len] = "String::len";

    table->set("lower",     std::make_shared<LuaValue::Function>((cxx_func) &lower) );
    interp->cxx_funcnames[(cxx_func) &lower] = "String::lower";

    table->set("rep",   std::make_shared<LuaValue::Function>((cxx_func) &rep) );
    interp->cxx_funcnames[(cxx_func) &rep] = "String::rep";

    table->set("reverse",   std::make_shared<LuaValue::Function>((cxx_func) &reverse) );
    interp->cxx_funcnames[(cxx_func) &reverse] = "String::reverse";

    table->set("sub",   std::make_shared<LuaValue::Function>((cxx_func) &sub) );
    interp->cxx_funcnames[(cxx_func) &sub] = "String::sub";

    table->set("upper",     std::make_shared<LuaValue::Function>((cxx_func) &upper) );
    interp->cxx_funcnames[(cxx_func) &upper] = "String::upper";

    interp->global.set("string", table);
}

std::vector< std::shared_ptr<Value> > StringLib::byte(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() < 1 || args.size() > 3) {
        throw std::runtime_error("bad argument #1 to 'byte' (string expected, got something)");
    }
    
    if (args[0]->type() != Value::Type::STRING) {
        throw std::runtime_error("bad argument #1 to 'byte' (string expected)");
    }
    
    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
    size_t len = str->value.size();
    
    if (len == 0) {
        return { std::make_shared<LuaValue::Nil>() };
    }
    
    int64_t i = 1;
    if (args.size() >= 2) {
        if (args[1]->type() != Value::Type::NUMBER) {
            throw std::runtime_error("bad argument #2 to 'byte' (number expected)");
        }
        auto iNum = std::static_pointer_cast<LuaValue::Number>(args[1]);
        if (iNum->kind != LuaValue::Number::Kind::INT) {
            throw std::runtime_error("bad argument #2 to 'byte' (integer expected)");
        }
        i = iNum->integer;
    }
    
    int64_t j = i;
    if (args.size() >= 3) {
        if (args[2]->type() != Value::Type::NUMBER) {
            throw std::runtime_error("bad argument #3 to 'byte' (number expected)");
        }
        auto jNum = std::static_pointer_cast<LuaValue::Number>(args[2]);
        if (jNum->kind != LuaValue::Number::Kind::INT) {
            throw std::runtime_error("bad argument #3 to 'byte' (integer expected)");
        }
        j = jNum->integer;
    }
    
    if (i < 0) {
        i = static_cast<int64_t>(len) + i + 1;
    }
    if (j < 0) {
        j = static_cast<int64_t>(len) + j + 1;
    }
    
    if (i < 1) {
        i = 1;
    }
    if (j > static_cast<int64_t>(len)) {
        j = static_cast<int64_t>(len);
    }
    
    if (i > j) {
        return { std::make_shared<LuaValue::Nil>() };
    }
    
    std::vector< std::shared_ptr<Value> > result;
    for (int64_t idx = i; idx <= j; idx++) {
        unsigned char c = static_cast<unsigned char>(str->value[idx - 1]);
        result.push_back(std::make_shared<LuaValue::Number>(static_cast<int64_t>(c)));
    }
    
    return result;
}

std::vector< std::shared_ptr<Value> > StringLib::char_(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    std::string res;
    for (auto &arg: args) {
        if (arg->type() != Value::Type::NUMBER) {
            throw std::runtime_error("String::char_ - arguments must be numbers");
        }
        auto num = std::static_pointer_cast<LuaValue::Number>(arg);
        if (num->kind != LuaValue::Number::Kind::INT) {
            throw std::runtime_error("String::char_ - arguments must be integers");
        }
        res += (char)num->integer;
    }

    return { std::make_shared<LuaValue::String>(res) };
}

std::vector< std::shared_ptr<Value> > StringLib::find(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() != 2) throw std::runtime_error("String::find - expected exactly 2 arguments");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::byte - expected string object");
    if (args[1]->type() != Value::Type::STRING) throw std::runtime_error("String::byte - expected string object");

    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
    auto pattern = std::static_pointer_cast<LuaValue::String>(args[1]);

    size_t N = str->value.size();
    const char* cstr = str->value.c_str();
    const char* cpattern = pattern->value.c_str();

    for (size_t i=0; i<N; i++) {
        if ( strcmp(cstr+i, cpattern) == 0 ) {
            return { 
                std::make_shared<LuaValue::Number>((int64_t) i),
                std::make_shared<LuaValue::Number>((int64_t) (i + pattern->value.size())),
            };
        }
    }

    return { std::make_shared<LuaValue::Nil>() };
}

std::vector< std::shared_ptr<Value> > StringLib::format(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() < 1) throw std::runtime_error("String::format - expected at least 1 argument");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::format - format string must be a string");
    
    auto formatStr = std::static_pointer_cast<LuaValue::String>(args[0]);
    std::string format = formatStr->value;
    
    std::string result;
    size_t argIndex = 1; // текущий аргумент для подстановки
    size_t i = 0;
    size_t len = format.length();
    
    while (i < len) {
        if (format[i] != '%') {
            result += format[i];
            i++;
            continue;
        }
        
        i++;
        
        if (i >= len) {
            throw std::runtime_error("String::format - incomplete format specifier");
        }
        
        if (format[i] == '%') {
            result += '%';
            i++;
            continue;
        }
        
        std::string formatSpec;
        formatSpec += '%';
        
        while (i < len && (format[i] == '-' || format[i] == '+' || format[i] == ' ' || format[i] == '0' || format[i] == '#')) {
            formatSpec += format[i];
            i++;
        }
        
        while (i < len && std::isdigit(format[i])) {
            formatSpec += format[i];
            i++;
        }
        
        if (i < len && format[i] == '.') {
            formatSpec += format[i];
            i++;
            while (i < len && std::isdigit(format[i])) {
                formatSpec += format[i];
                i++;
            }
        }
        
        if (i < len && (format[i] == 'h' || format[i] == 'l' || format[i] == 'L')) {
            formatSpec += format[i];
            i++;
        }
        
        if (i >= len) {
            throw std::runtime_error("String::format - incomplete format specifier");
        }
        
        char specifier = format[i];
        formatSpec += specifier;
        i++;
        
        if (argIndex >= args.size()) {
            throw std::runtime_error("String::format - not enough arguments for format string");
        }
        
        switch (specifier) {
            case 'd':
            case 'i': {
                auto arg = args[argIndex++];
                if (arg->type() != Value::Type::NUMBER) {
                    throw std::runtime_error("String::format - expected number for %d/%i");
                }
                auto num = std::static_pointer_cast<LuaValue::Number>(arg);
                if (num->kind == LuaValue::Number::Kind::INT) {
                    char buffer[64];
                    snprintf(buffer, sizeof(buffer), formatSpec.c_str(), num->integer);
                    result += buffer;
                } else {
                    char buffer[64];
                    snprintf(buffer, sizeof(buffer), formatSpec.c_str(), (int)num->floating);
                    result += buffer;
                }
                break;
            }
            
            case 'f':
            case 'F':
            case 'e':
            case 'E':
            case 'g':
            case 'G':
            case 'a':
            case 'A': {
                auto arg = args[argIndex++];
                if (arg->type() != Value::Type::NUMBER) {
                    throw std::runtime_error("String::format - expected number for floating point format");
                }
                auto num = std::static_pointer_cast<LuaValue::Number>(arg);
                double value = (num->kind == LuaValue::Number::Kind::INT) ? num->integer : num->floating;
                
                char buffer[256];
                snprintf(buffer, sizeof(buffer), formatSpec.c_str(), value);
                result += buffer;
                break;
            }
            
            case 'c': {
                auto arg = args[argIndex++];
                if (arg->type() != Value::Type::NUMBER) {
                    throw std::runtime_error("String::format - expected number for %c");
                }
                auto num = std::static_pointer_cast<LuaValue::Number>(arg);
                if (num->kind != LuaValue::Number::Kind::INT) {
                    throw std::runtime_error("String::format - expected integer for %c");
                }
                char buffer[2] = { (char)num->integer, 0 };
                
                if (formatSpec != "%c") {
                    char formatted[64];
                    snprintf(formatted, sizeof(formatted), formatSpec.c_str(), (char)num->integer);
                    result += formatted;
                } else {
                    result += buffer;
                }
                break;
            }
            
            case 's': {
                auto arg = args[argIndex++];
                if (arg->type() != Value::Type::STRING) {
                    throw std::runtime_error("String::format - expected string for %s");
                }
                auto str = std::static_pointer_cast<LuaValue::String>(arg);
                
                char buffer[4096];
                snprintf(buffer, sizeof(buffer), formatSpec.c_str(), str->value.c_str());
                result += buffer;
                break;
            }
            
            case 'p': {
                auto arg = args[argIndex++];
                char buffer[64];
                snprintf(buffer, sizeof(buffer), formatSpec.c_str(), arg.get());
                result += buffer;
                break;
            }
            
            case 'x':
            case 'X':
            case 'o':
            case 'u': {
                auto arg = args[argIndex++];
                if (arg->type() != Value::Type::NUMBER) {
                    throw std::runtime_error("String::format - expected number for hex/octal format");
                }
                auto num = std::static_pointer_cast<LuaValue::Number>(arg);
                unsigned long long value;
                if (num->kind == LuaValue::Number::Kind::INT) {
                    value = (unsigned long long)num->integer;
                } else {
                    value = (unsigned long long)num->floating;
                }
                
                char buffer[64];
                snprintf(buffer, sizeof(buffer), formatSpec.c_str(), value);
                result += buffer;
                break;
            }
            
            default:
                throw std::runtime_error(std::string("String::format - unsupported format specifier: %") + specifier);
        }
    }
    
    return { std::make_shared<LuaValue::String>(result) };
}


std::vector< std::shared_ptr<Value> > StringLib::len(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() != 1) throw std::runtime_error("String::len - expected exactly 1 argument");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::len - expected string object");
    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);

    return { std::make_shared<LuaValue::Number>((int64_t) str->value.size()) };
}

std::vector< std::shared_ptr<Value> > StringLib::lower(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() != 1) throw std::runtime_error("String::lower - expected exactly 1 argument");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::lower - expected string object");
    
    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
    std::string result = str->value;
    
    std::locale loc;
    for (char& c : result) {
        c = std::tolower(c, loc);
    }
    
    return { std::make_shared<LuaValue::String>(result) };
}

std::vector< std::shared_ptr<Value> > StringLib::rep(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() < 2 || args.size() > 3) throw std::runtime_error("String::rep - expected 2 or 3 arguments");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::rep - expected string object");
    if (args[1]->type() != Value::Type::NUMBER) throw std::runtime_error("String::rep - count must be a number");
    
    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
    auto countNum = std::static_pointer_cast<LuaValue::Number>(args[1]);
    
    if (countNum->kind != LuaValue::Number::Kind::INT) throw std::runtime_error("String::rep - count must be an integer");
    
    int64_t n = countNum->integer;
    
    if (n <= 0) {
        return { std::make_shared<LuaValue::String>(std::string()) };
    }
    
    std::string separator;
    if (args.size() == 3) {
        if (args[2]->type() != Value::Type::STRING) throw std::runtime_error("String::rep - separator must be a string");
        auto sep = std::static_pointer_cast<LuaValue::String>(args[2]);
        separator = sep->value;
    }
    
    std::string result;
    
    for (int64_t i = 0; i < n; i++) {
        if (i > 0 && !separator.empty()) {
            result += separator;
        }
        result += str->value;
    }
    
    return { std::make_shared<LuaValue::String>(result) };
}

std::vector< std::shared_ptr<Value> > StringLib::reverse(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() != 1) throw std::runtime_error("String::reverse - expected exactly 1 argument");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::reverse - expected string object");
    
    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
    std::string result = str->value;
    
    std::reverse(result.begin(), result.end());
    
    return { std::make_shared<LuaValue::String>(result) };
}

std::vector< std::shared_ptr<Value> > StringLib::sub(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() < 2 || args.size() > 3) throw std::runtime_error("String::sub - expected 2 or 3 arguments");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::sub - expected string object");
    if (args[1]->type() != Value::Type::NUMBER) throw std::runtime_error("String::sub - index must be a number");
    
    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
    auto iNum = std::static_pointer_cast<LuaValue::Number>(args[1]);
    
    if (iNum->kind != LuaValue::Number::Kind::INT) throw std::runtime_error("String::sub - index must be an integer");
    
    int64_t len = str->value.size();
    int64_t i = iNum->integer;
    int64_t j = -1;
    
    if (args.size() == 3) {
        if (args[2]->type() != Value::Type::NUMBER) throw std::runtime_error("String::sub - index must be a number");
        auto jNum = std::static_pointer_cast<LuaValue::Number>(args[2]);
        if (jNum->kind != LuaValue::Number::Kind::INT) throw std::runtime_error("String::sub - index must be an integer");
        j = jNum->integer;
    }
    
    if (i < 0) i = len + i + 1;
    if (j < 0) j = len + j + 1;
    
    if (i < 1) i = 1;
    if (j > len) j = len;
    
    if (i > j) {
        return { std::make_shared<LuaValue::String>(std::string()) };
    }
    
    size_t start = static_cast<size_t>(i - 1);
    size_t length = static_cast<size_t>(j - i + 1);
    
    std::string result = str->value.substr(start, length);
    
    return { std::make_shared<LuaValue::String>(result) };
}

std::vector< std::shared_ptr<Value> > StringLib::upper(Executioner* exec, std::vector< std::shared_ptr<Value> > &args) {
    if (args.size() != 1) throw std::runtime_error("String::upper - expected exactly 1 argument");
    if (args[0]->type() != Value::Type::STRING) throw std::runtime_error("String::upper - expected string object");
    
    auto str = std::static_pointer_cast<LuaValue::String>(args[0]);
    std::string result = str->value;
    
    std::locale loc;
    for (char& c : result) {
        c = std::toupper(c, loc);
    }
    
    return { std::make_shared<LuaValue::String>(result) };
}