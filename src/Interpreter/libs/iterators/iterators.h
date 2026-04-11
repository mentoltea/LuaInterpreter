#ifndef INTERPRETER_LIBS_ITERATORS_H
#define INTERPRETER_LIBS_ITERATORS_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

namespace LuaInterpreter {
namespace LuaLibs {

class Iterators {
public:

static void include(Interpreter* interp);

static std::vector< std::shared_ptr<Value> > ipairs(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
);


static std::vector< std::shared_ptr<Value> > pairs(
    Executioner* exec,
    std::vector< std::shared_ptr<Value> > &args
);



class Iterator: public LuaValue::Userdata {
public:
    std::shared_ptr<Value> container;
    Iterator(const std::string& typestr, std::shared_ptr<Value> container);

    static std::vector< std::shared_ptr<Value> > next_wrapper(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    virtual std::vector< std::shared_ptr<Value> > next(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    ) = 0;
};

class IIterator: public Iterator {
public:
    size_t next_idx;
    static constexpr std::string typestr = "__iterator_i";

    IIterator(std::shared_ptr<LuaValue::Table> container);

    std::vector< std::shared_ptr<Value> > next(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
};

class KIterator: public Iterator {
public:
    std::unordered_map< std::string , std::shared_ptr<Value> >::iterator string_it;
    std::unordered_map< std::int64_t , std::shared_ptr<Value> >::iterator int_it;
    std::unordered_map< std::string , std::shared_ptr<Value> >::iterator func_it;
    std::unordered_map< void* , std::shared_ptr<Value> >::iterator data_it;

    static constexpr std::string typestr = "__iterator_k";

    KIterator(std::shared_ptr<LuaValue::Table> container);

    std::vector< std::shared_ptr<Value> > next(
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
};


}; //Iterators

}; // LuaLibs
}; // LuaInterpreter

#endif // INTERPRETER_LIBS_ITERATORS_H