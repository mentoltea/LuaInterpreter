#ifndef INTERPRETER_LIBS_IO_H
#define INTERPRETER_LIBS_IO_H

#include "Interpreter/Base.h"
#include "Interpreter/Value.h"
#include "Interpreter/Core.h"

#include <iostream>
#include <fstream>
#include <sstream>

namespace LuaInterpreter {
namespace LuaLibs {

class IO {
    public:
    static void include(Interpreter* interp);

    // metatable[ "__type" ] = "__io_file"
    class File: public LuaValue::Userdata {
        public:
        // non-owning (cout, cin, cerr)
        File(std::istream &os);
        File(std::ostream &os);

        // owning (files)
        File(const std::string& filepath, std::ios::openmode mode);
        File(std::shared_ptr< std::filebuf > file);
        ~File();

        static constexpr std::string typestr = "__io_file";
        
        void prepare_metatable();

        std::shared_ptr< std::filebuf > file;
        std::streambuf* buffer;

        public:
        static std::vector< std::shared_ptr<Value> > close_wrapper(
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );
        static std::vector< std::shared_ptr<Value> > flush_wrapper(
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );
        static std::vector< std::shared_ptr<Value> > lines_wrapper(
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );
        static std::vector< std::shared_ptr<Value> > read_wrapper(
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );
        static std::vector< std::shared_ptr<Value> > seek_wrapper(
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );
        static std::vector< std::shared_ptr<Value> > write_wrapper(
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );

        std::vector< std::shared_ptr<Value> > close (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );

        std::vector< std::shared_ptr<Value> > flush (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );

        std::vector< std::shared_ptr<Value> > lines (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );

        std::vector< std::shared_ptr<Value> > read (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );

        std::vector< std::shared_ptr<Value> > seek (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );

        std::vector< std::shared_ptr<Value> > write (
            Executioner* exec,
            std::vector< std::shared_ptr<Value> > &args
        );
    };

    static std::shared_ptr< std::filebuf > _input;
    static std::shared_ptr< std::filebuf > _output;
    // static bool cout_open;

    static std::vector< std::shared_ptr<Value> > close (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
    
    static std::vector< std::shared_ptr<Value> > flush (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
    
    static std::vector< std::shared_ptr<Value> > input (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
    
    static std::vector< std::shared_ptr<Value> > lines (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
    
    static std::vector< std::shared_ptr<Value> > open (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > output (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > read (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > type (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > write (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );

    static std::vector< std::shared_ptr<Value> > print (
        Executioner* exec,
        std::vector< std::shared_ptr<Value> > &args
    );
};


}; // LuaLibs
}; // LuaInterpreter
#endif // INTERPRETER_LIBS_IO_H