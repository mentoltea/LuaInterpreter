#include "./math.h"
#include <cmath>
#include <random>
#include <limits>
#include <chrono>
#include <cfloat>

using namespace LuaInterpreter;
using namespace LuaLibs;
using namespace LuaValue;

void Math::include(Interpreter* interp) {
    std::shared_ptr<Table> table = std::make_shared<Table>();

    // Basic math functions
    table->set("abs", std::make_shared<Function>((cxx_func)&abs));
    table->set("acos", std::make_shared<Function>((cxx_func)&acos));
    table->set("asin", std::make_shared<Function>((cxx_func)&asin));
    table->set("atan", std::make_shared<Function>((cxx_func)&atan));
    table->set("ceil", std::make_shared<Function>((cxx_func)&ceil));
    table->set("cos", std::make_shared<Function>((cxx_func)&cos));
    table->set("deg", std::make_shared<Function>((cxx_func)&deg));
    table->set("exp", std::make_shared<Function>((cxx_func)&exp));
    table->set("floor", std::make_shared<Function>((cxx_func)&floor));
    table->set("fmod", std::make_shared<Function>((cxx_func)&fmod));
    table->set("frexp", std::make_shared<Function>((cxx_func)&frexp));
    table->set("ldexp", std::make_shared<Function>((cxx_func)&ldexp));
    table->set("log", std::make_shared<Function>((cxx_func)&log));
    table->set("max", std::make_shared<Function>((cxx_func)&max));
    table->set("min", std::make_shared<Function>((cxx_func)&min));
    table->set("modf", std::make_shared<Function>((cxx_func)&modf));
    table->set("rad", std::make_shared<Function>((cxx_func)&rad));
    table->set("random", std::make_shared<Function>((cxx_func)&random));
    table->set("randomseed", std::make_shared<Function>((cxx_func)&randomseed));
    table->set("sin", std::make_shared<Function>((cxx_func)&sin));
    table->set("sqrt", std::make_shared<Function>((cxx_func)&sqrt));
    table->set("tan", std::make_shared<Function>((cxx_func)&tan));
    table->set("tointeger", std::make_shared<Function>((cxx_func)&tointeger));
    table->set("type", std::make_shared<Function>((cxx_func)&type));
    table->set("ult", std::make_shared<Function>((cxx_func)&ult));
    
    // Constants
    table->set("huge", std::make_shared<Function>((cxx_func)&huge));
    table->set("pi", std::make_shared<Function>((cxx_func)&pi));
    table->set("maxinteger", std::make_shared<Function>((cxx_func)&maxinteger));
    table->set("mininteger", std::make_shared<Function>((cxx_func)&mininteger));

    interp->global.set("math", table);
}
// Returns the maximum value between x and -x. (integer/float)
// math.abs (x)
std::vector<std::shared_ptr<Value>> Math::abs(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::abs - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::abs - Argument must be a number");
    }

    if (num->kind == Number::Kind::INT) {
        return { std::make_shared<Number>((int64_t)std::abs(num->integer)) };
    }
    return { std::make_shared<Number>((std::float64_t)std::abs(num->floating)) };
}

// Returns the arc cosine of x (in radians).
// math.acos (x)
std::vector<std::shared_ptr<Value>> Math::acos(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::acos - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::acos - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::acos(val)) };
}

// Returns the arc sine of x (in radians).
// math.asin (x)
std::vector<std::shared_ptr<Value>> Math::asin(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::asin - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::asin - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::asin(val)) };
}

// Returns the arc tangent of y/x (in radians), using the signs of both arguments to find the quadrant of the result.
// math.atan (y [, x])
std::vector<std::shared_ptr<Value>> Math::atan(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() < 1 || args.size() > 2) throw std::runtime_error("Math::atan - Expected 1 or 2 arguments");
    
    std::shared_ptr<Number> y_num;
    if (args[0]->type() == Value::Type::NUMBER) {
        y_num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::atan - Arguments must be numbers");
    }

    double y = (y_num->kind == Number::Kind::INT) ? (double)y_num->integer : y_num->floating;

    if (args.size() == 1) {
        return { std::make_shared<Number>((std::float64_t)std::atan(y)) };
    }

    std::shared_ptr<Number> x_num;
    if (args[1]->type() == Value::Type::NUMBER) {
        x_num = std::static_pointer_cast<Number>(args[1]);
    } else {
        throw std::runtime_error("Math::atan - Arguments must be numbers");
    }

    double x = (x_num->kind == Number::Kind::INT) ? (double)x_num->integer : x_num->floating;
    return { std::make_shared<Number>((std::float64_t)std::atan2(y, x)) };
}

// Returns the smallest integral value greater than or equal to x.
// math.ceil (x)
std::vector<std::shared_ptr<Value>> Math::ceil(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::ceil - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::ceil - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::ceil(val)) };
}

// Returns the cosine of x (assumed to be in radians).
// math.cos (x)
std::vector<std::shared_ptr<Value>> Math::cos(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::cos - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::cos - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::cos(val)) };
}

// Converts the angle x from radians to degrees.
// math.deg (x)
std::vector<std::shared_ptr<Value>> Math::deg(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::deg - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::deg - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)(val * 180.0 / std::numbers::pi)) };
}

// Returns the value ex (where e is the base of natural logarithms).
// math.exp (x)
std::vector<std::shared_ptr<Value>> Math::exp(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::exp - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::exp - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::exp(val)) };
}

// Returns the largest integral value less than or equal to x.
// math.floor (x)
std::vector<std::shared_ptr<Value>> Math::floor(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::floor - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::floor - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::floor(val)) };
}

// Returns the remainder of the division of x by y that rounds the quotient towards zero.
// math.fmod (x, y)
std::vector<std::shared_ptr<Value>> Math::fmod(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 2) throw std::runtime_error("Math::fmod - Expected exactly 2 arguments");
    
    std::shared_ptr<Number> x_num, y_num;
    if (args[0]->type() == Value::Type::NUMBER && args[1]->type() == Value::Type::NUMBER) {
        x_num = std::static_pointer_cast<Number>(args[0]);
        y_num = std::static_pointer_cast<Number>(args[1]);
    } else {
        throw std::runtime_error("Math::fmod - Arguments must be numbers");
    }

    double x = (x_num->kind == Number::Kind::INT) ? (double)x_num->integer : x_num->floating;
    double y = (y_num->kind == Number::Kind::INT) ? (double)y_num->integer : y_num->floating;
    
    return { std::make_shared<Number>((std::float64_t)std::fmod(x, y)) };
}

// Returns two numbers m and e such that x = m * 2^e
// math.frexp (x)
std::vector<std::shared_ptr<Value>> Math::frexp(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::frexp - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::frexp - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    int exp;
    double mantissa = std::frexp(val, &exp);
    
    return { 
        std::make_shared<Number>((std::float64_t)mantissa),
        std::make_shared<Number>((int64_t)exp)
    };
}

// The float value HUGE_VAL
// math.huge
std::vector<std::shared_ptr<Value>> Math::huge(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    return { std::make_shared<Number>(HUGE_VAL) };
}

// Returns m * 2^e
// math.ldexp (m, e)
std::vector<std::shared_ptr<Value>> Math::ldexp(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 2) throw std::runtime_error("Math::ldexp - Expected exactly 2 arguments");
    
    std::shared_ptr<Number> m_num, e_num;
    if (args[0]->type() == Value::Type::NUMBER && args[1]->type() == Value::Type::NUMBER) {
        m_num = std::static_pointer_cast<Number>(args[0]);
        e_num = std::static_pointer_cast<Number>(args[1]);
    } else {
        throw std::runtime_error("Math::ldexp - Arguments must be numbers");
    }

    double m = (m_num->kind == Number::Kind::INT) ? (double)m_num->integer : m_num->floating;
    int e = (e_num->kind == Number::Kind::INT) ? (int)e_num->integer : (int)e_num->floating;
    
    return { std::make_shared<Number>((std::float64_t)std::ldexp(m, e)) };
}

// Returns the logarithm of x in the given base. Default base is e.
// math.log (x [, base])
std::vector<std::shared_ptr<Value>> Math::log(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() < 1 || args.size() > 2) throw std::runtime_error("Math::log - Expected 1 or 2 arguments");
    
    std::shared_ptr<Number> x_num;
    if (args[0]->type() == Value::Type::NUMBER) {
        x_num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::log - Arguments must be numbers");
    }

    double x = (x_num->kind == Number::Kind::INT) ? (double)x_num->integer : x_num->floating;
    double result = std::log(x);
    
    if (args.size() == 2) {
        std::shared_ptr<Number> base_num;
        if (args[1]->type() == Value::Type::NUMBER) {
            base_num = std::static_pointer_cast<Number>(args[1]);
        } else {
            throw std::runtime_error("Math::log - Arguments must be numbers");
        }
        double base = (base_num->kind == Number::Kind::INT) ? (double)base_num->integer : base_num->floating;
        result = std::log(x) / std::log(base);
    }
    
    return { std::make_shared<Number>((std::float64_t)result) };
}

// Returns the argument with the maximum value
// math.max (x, ···)
std::vector<std::shared_ptr<Value>> Math::max(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() < 1) throw std::runtime_error("Math::max - Expected at least 1 argument");
    
    std::shared_ptr<Number> max_num = nullptr;
    
    for (auto& arg : args) {
        if (arg->type() != Value::Type::NUMBER) {
            throw std::runtime_error("Math::max - All arguments must be numbers");
        }
        std::shared_ptr<Number> num = std::static_pointer_cast<Number>(arg);
        
        if (max_num == nullptr) {
            max_num = num;
        } else {
            if (*num > *max_num) {
                max_num = num;
            }
        }
    }
    
    return { std::make_shared<Number>(*max_num) };
}

// An integer with the maximum value for an integer.
// math.maxinteger
std::vector<std::shared_ptr<Value>> Math::maxinteger(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    return { std::make_shared<Number>((int64_t)std::numeric_limits<int64_t>::max()) };
}

// Returns the argument with the minimum value
// math.min (x, ···)
std::vector<std::shared_ptr<Value>> Math::min(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() < 1) throw std::runtime_error("Math::min - Expected at least 1 argument");
    
    std::shared_ptr<Number> min_num = nullptr;
    
    for (auto& arg : args) {
        if (arg->type() != Value::Type::NUMBER) {
            throw std::runtime_error("Math::max - All arguments must be numbers");
        }
        std::shared_ptr<Number> num = std::static_pointer_cast<Number>(arg);
        
        if (min_num == nullptr) {
            min_num = num;
        } else {
            if (*num < *min_num) {
                min_num = num;
            }
        }
    }
    
    return { std::make_shared<Number>(*min_num) };
}

// An integer with the minimum value for an integer.
// math.mininteger
std::vector<std::shared_ptr<Value>> Math::mininteger(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    return { std::make_shared<Number>((int64_t)std::numeric_limits<int64_t>::min()) };
}

// Returns the integral part and the fractional part of x.
// math.modf (x)
std::vector<std::shared_ptr<Value>> Math::modf(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::modf - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::modf - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    double intpart;
    double fracpart = std::modf(val, &intpart);
    
    return { 
        std::make_shared<Number>((int64_t)intpart),
        std::make_shared<Number>((std::float64_t)fracpart)
    };
}

// The value of π.
// math.pi
std::vector<std::shared_ptr<Value>> Math::pi(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    return { std::make_shared<Number>(std::numbers::pi) };
}

// Converts the angle x from degrees to radians.
// math.rad (x)
std::vector<std::shared_ptr<Value>> Math::rad(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::rad - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::rad - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)(val * std::numbers::pi / 180.0)) };
}

// Pseudo-random generator
static std::mt19937_64 rng;
static bool rng_initialized = false;

// math.random ([m [, n]])
std::vector<std::shared_ptr<Value>> Math::random(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (!rng_initialized) {
        rng.seed(std::chrono::steady_clock::now().time_since_epoch().count());
        rng_initialized = true;
    }
    
    if (args.size() == 0) {
        std::uniform_real_distribution<double> dist(0.0, 1.0);
        return { std::make_shared<Number>(dist(rng)) };
    }
    else if (args.size() == 1) {
        std::shared_ptr<Number> n_num;
        if (args[0]->type() == Value::Type::NUMBER) {
            n_num = std::static_pointer_cast<Number>(args[0]);
        } else {
            throw std::runtime_error("Math::random - Arguments must be numbers");
        }
        
        int64_t n = (n_num->kind == Number::Kind::INT) ? n_num->integer : (int64_t)n_num->floating;
        
        if (n == 0) {
            std::uniform_int_distribution<uint64_t> dist;
            return { std::make_shared<Number>((int64_t)dist(rng)) };
        } else if (n > 0) {
            std::uniform_int_distribution<int64_t> dist(1, n);
            return { std::make_shared<Number>(dist(rng)) };
        } else {
            throw std::runtime_error("Math::random - Argument must be positive or zero");
        }
    }
    else if (args.size() == 2) {
        std::shared_ptr<Number> m_num, n_num;
        if (args[0]->type() == Value::Type::NUMBER && args[1]->type() == Value::Type::NUMBER) {
            m_num = std::static_pointer_cast<Number>(args[0]);
            n_num = std::static_pointer_cast<Number>(args[1]);
        } else {
            throw std::runtime_error("Math::random - Arguments must be numbers");
        }
        
        int64_t m = (m_num->kind == Number::Kind::INT) ? m_num->integer : (int64_t)m_num->floating;
        int64_t n = (n_num->kind == Number::Kind::INT) ? n_num->integer : (int64_t)n_num->floating;
        
        if (m <= n) {
            std::uniform_int_distribution<int64_t> dist(m, n);
            return { std::make_shared<Number>(dist(rng)) };
        } else {
            throw std::runtime_error("Math::random - Lower bound must be less than or equal to upper bound");
        }
    }
    else {
        throw std::runtime_error("Math::random - Expected 0, 1, or 2 arguments");
    }
}

// math.randomseed ([x [, y]])
std::vector<std::shared_ptr<Value>> Math::randomseed(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    uint64_t seed;
    
    if (args.size() == 0) {
        seed = std::chrono::steady_clock::now().time_since_epoch().count();
    }
    else if (args.size() == 1) {
        std::shared_ptr<Number> x_num;
        if (args[0]->type() == Value::Type::NUMBER) {
            x_num = std::static_pointer_cast<Number>(args[0]);
        } else {
            throw std::runtime_error("Math::randomseed - Arguments must be numbers");
        }
        uint64_t x = (x_num->kind == Number::Kind::INT) ? (uint64_t)x_num->integer : (uint64_t)x_num->floating;
        seed = x;
    }
    else if (args.size() == 2) {
        std::shared_ptr<Number> x_num, y_num;
        if (args[0]->type() == Value::Type::NUMBER && args[1]->type() == Value::Type::NUMBER) {
            x_num = std::static_pointer_cast<Number>(args[0]);
            y_num = std::static_pointer_cast<Number>(args[1]);
        } else {
            throw std::runtime_error("Math::randomseed - Arguments must be numbers");
        }
        uint64_t x = (x_num->kind == Number::Kind::INT) ? (uint64_t)x_num->integer : (uint64_t)x_num->floating;
        uint64_t y = (y_num->kind == Number::Kind::INT) ? (uint64_t)y_num->integer : (uint64_t)y_num->floating;
        seed = x ^ (y << 32);
    }
    else {
        throw std::runtime_error("Math::randomseed - Expected 0, 1, or 2 arguments");
    }
    
    rng.seed(seed);
    rng_initialized = true;
    
    uint64_t seed_used = rng();
    uint64_t x = seed_used & 0xFFFFFFFF;
    uint64_t y = (seed_used >> 32) & 0xFFFFFFFF;
    
    return {
        std::make_shared<Number>((int64_t)x),
        std::make_shared<Number>((int64_t)y)
    };
}

// Returns the sine of x (assumed to be in radians).
// math.sin (x)
std::vector<std::shared_ptr<Value>> Math::sin(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::sin - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::sin - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::sin(val)) };
}

// Returns the square root of x.
// math.sqrt (x)
std::vector<std::shared_ptr<Value>> Math::sqrt(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::sqrt - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::sqrt - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::sqrt(val)) };
}

// Returns the tangent of x (assumed to be in radians).
// math.tan (x)
std::vector<std::shared_ptr<Value>> Math::tan(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::tan - Expected exactly 1 argument");
    std::shared_ptr<Number> num;
    if (args[0]->type() == Value::Type::NUMBER) {
        num = std::static_pointer_cast<Number>(args[0]);
    } else {
        throw std::runtime_error("Math::tan - Argument must be a number");
    }

    double val = (num->kind == Number::Kind::INT) ? (double)num->integer : num->floating;
    return { std::make_shared<Number>((std::float64_t)std::tan(val)) };
}

// If the value x is convertible to an integer, returns that integer.
// math.tointeger (x)
std::vector<std::shared_ptr<Value>> Math::tointeger(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::tointeger - Expected exactly 1 argument");
    
    if (args[0]->type() != Value::Type::NUMBER) {
        return { std::make_shared<Nil>() };
    }
    
    std::shared_ptr<Number> num = std::static_pointer_cast<Number>(args[0]);
    
    if (num->kind == Number::Kind::INT) {
        return { std::make_shared<Number>(*num) };
    }
    
    // Check if float can be converted to integer exactly
    double val = num->floating;
    double intpart;
    if (std::modf(val, &intpart) == 0.0 && val >= std::numeric_limits<int64_t>::min() && val <= std::numeric_limits<int64_t>::max()) {
        return { std::make_shared<Number>((int64_t)val) };
    }
    
    return { std::make_shared<Nil>() };
}

// Returns "integer" if x is an integer, "float" if it is a float, or nil if x is not a number.
// math.type (x)
std::vector<std::shared_ptr<Value>> Math::type(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 1) throw std::runtime_error("Math::type - Expected exactly 1 argument");
    
    if (args[0]->type() != Value::Type::NUMBER) {
        return { std::make_shared<Nil>() };
    }
    
    std::shared_ptr<Number> num = std::static_pointer_cast<Number>(args[0]);
    
    if (num->kind == Number::Kind::INT) {
        return { std::make_shared<String>("integer") };
    } else {
        return { std::make_shared<String>("float") };
    }
}

// Returns a boolean, true if and only if integer m is below integer n when compared as unsigned integers.
// math.ult (m, n)
std::vector<std::shared_ptr<Value>> Math::ult(Executioner* exec, std::vector<std::shared_ptr<Value>>& args) {
    if (args.size() != 2) throw std::runtime_error("Math::ult - Expected exactly 2 arguments");
    
    std::shared_ptr<Number> m_num, n_num;
    if (args[0]->type() == Value::Type::NUMBER && args[1]->type() == Value::Type::NUMBER) {
        m_num = std::static_pointer_cast<Number>(args[0]);
        n_num = std::static_pointer_cast<Number>(args[1]);
    } else {
        throw std::runtime_error("Math::ult - Arguments must be numbers");
    }
    
    int64_t m = (m_num->kind == Number::Kind::INT) ? m_num->integer : (int64_t)m_num->floating;
    int64_t n = (n_num->kind == Number::Kind::INT) ? n_num->integer : (int64_t)n_num->floating;
    
    uint64_t um = static_cast<uint64_t>(m);
    uint64_t un = static_cast<uint64_t>(n);
    
    return { std::make_shared<Boolean>(um < un) };
}