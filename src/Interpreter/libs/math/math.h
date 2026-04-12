#ifndef INTERPRETER_LIBS_MATH_H
#define INTERPRETER_LIBS_MATH_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

namespace LuaInterpreter {
namespace LuaLibs {

class Math {
public:
    static void include(Interpreter* interp);

    // Returns the maximum value between x and -x. (integer/float)
    // math.abs (x)
    static std::vector< std::shared_ptr<Value> > abs(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    // Returns the arc cosine of x (in radians).
    // math.acos (x)
    static std::vector< std::shared_ptr<Value> > acos(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the arc sine of x (in radians).
    // math.asin (x)
    static std::vector< std::shared_ptr<Value> > asin(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the arc tangent of y/x (in radians), using the signs of both arguments to find the quadrant of the result. It also handles correctly the case of x being zero.
    // The default value for x is 1, so that the call math.atan(y) returns the arc tangent of y.
    // math.atan (y [, x])
    static std::vector< std::shared_ptr<Value> > atan(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
    
    
    
    // Returns the smallest integral value greater than or equal to x.
    // math.ceil (x)
    static std::vector< std::shared_ptr<Value> > ceil(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the cosine of x (assumed to be in radians).
    // math.cos (x)
    static std::vector< std::shared_ptr<Value> > cos(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Converts the angle x from radians to degrees.
    // math.deg (x)
    static std::vector< std::shared_ptr<Value> > deg(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the value ex (where e is the base of natural logarithms).
    // math.exp (x)
    static std::vector< std::shared_ptr<Value> > exp(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the largest integral value less than or equal to x.
    // math.floor (x)
    static std::vector< std::shared_ptr<Value> > floor(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the remainder of the division of x by y that rounds the quotient towards zero. (integer/float)
    // math.fmod (x, y)
    static std::vector< std::shared_ptr<Value> > fmod(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns two numbers m and e such that x = m2e, where e is an integer. When x is zero, NaN, +inf, or -inf, m is equal to x; otherwise, the absolute value of m is in the range [0.5, 1) .
    // math.frexp (x)
    static std::vector< std::shared_ptr<Value> > frexp(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns m2e, where e is an integer.
    // math.ldexp (m, e)
    static std::vector< std::shared_ptr<Value> > ldexp(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the logarithm of x in the given base. The default for base is e (so that the function returns the natural logarithm of x).
    // math.log (x [, base])
    static std::vector< std::shared_ptr<Value> > log(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the argument with the maximum value, according to the Lua operator <.
    // math.max (x, ···)
    static std::vector< std::shared_ptr<Value> > max(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the argument with the minimum value, according to the Lua operator <.
    // math.min (x, ···)
    static std::vector< std::shared_ptr<Value> > min(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the integral part of x and the fractional part of x. Its second result is always a float.
    // math.modf (x)
    static std::vector< std::shared_ptr<Value> > modf(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Converts the angle x from degrees to radians.
    // math.rad (x)
    static std::vector< std::shared_ptr<Value> > rad(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // When called without arguments, returns a pseudo-random float with uniform distribution in the range [0, 1). When called with two integers m and n, math.random returns a pseudo-random integer with uniform distribution in the range [m, n]. The call math.random(n), for a positive n, is equivalent to math.random(1,n). The call math.random(0) produces an integer with all bits (pseudo)random.
    // math.random ([m [, n]])
    static std::vector< std::shared_ptr<Value> > random(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // When called with at least one argument, the integer parameters x and y are joined into a seed that is used to reinitialize the pseudo-random generator; equal seeds produce equal sequences of numbers. The default for y is zero.
    // When called with no arguments, Lua generates a seed with a weak attempt for randomness.
    // This function returns the two seed components that were effectively used, so that setting them again repeats the sequence.
    // To ensure a required level of randomness to the initial state (or contrarily, to have a deterministic sequence, for instance when debugging a program), you should call math.randomseed with explicit arguments.
    // math.randomseed ([x [, y]])
    static std::vector< std::shared_ptr<Value> > randomseed(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the sine of x (assumed to be in radians).
    // math.sin (x)
    static std::vector< std::shared_ptr<Value> > sin(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the square root of x. (You can also use the expression x^0.5 to compute this value.)
    // math.sqrt (x)
    static std::vector< std::shared_ptr<Value> > sqrt(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns the tangent of x (assumed to be in radians).
    // math.tan (x)
    static std::vector< std::shared_ptr<Value> > tan(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // If the value x is convertible to an integer, returns that integer. Otherwise, returns fail.
    // math.tointeger (x)
    static std::vector< std::shared_ptr<Value> > tointeger(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns "integer" if x is an integer, "float" if it is a float, or fail if x is not a number.
    // math.type (x)
    static std::vector< std::shared_ptr<Value> > type(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 

    
    // Returns a boolean, true if and only if integer m is below integer n when they are compared as unsigned integers. 
    // math.ult (m, n)
    static std::vector< std::shared_ptr<Value> > ult(Executioner* exec, std::vector< std::shared_ptr<Value> > &args); 
};

}; // LuaLibs
}; // LuaInterpreter

#endif // INTERPRETER_LIBS_MATH_H