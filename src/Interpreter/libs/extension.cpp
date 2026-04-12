#include "extension.h"

#include "listener.h"
#include "generated/Lua55GrammarLexer.h"
#include "generated/Lua55GrammarParser.h"
#include "generated/Lua55GrammarListener.h"
#include "Compiler.h"
#include <iomanip>

using namespace LuaInterpreter;
using namespace LuaLibs;

void LuaInterpreter::LuaLibs::compile_and_add_extension(
    Interpreter* interp,

    const std::string& source,

    const std::string& funcname,
    const std::vector< std::string >& params,
    const std::string& vararg,
    bool is_method,
    
    const std::string& globalname,
    const std::string& extensionname
) {
    std::string red_color = "\e[31m";
    std::string green_color = "\e[32m";
    std::string blue_color = "\e[34m";
    std::string normal_color = "\e[m";

    antlr4::ANTLRInputStream stream(source);
    Lua55GrammarLexer lexer(&stream);    
    antlr4::CommonTokenStream tokens(&lexer);
    
    Lua55GrammarParser parser(&tokens);    
    antlr4::tree::ParseTree* tree = parser.prog();
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << extensionname << ": "
        << "Constructing AST"
        << normal_color 
    << std::endl;
    #endif
    Lua55Listener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    auto ast = listener.ast;

    LuaAST::FuncBody body;
    body.params = params;
    body.block = ast;
    body.variadic_param = vararg;

    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << extensionname << ": "
        << "AST contructed"
        << normal_color 
    << std::endl;

    std::cout
        << std::endl 
        << blue_color 
        << extensionname << ": "
        << "Analyzing..."
        << normal_color 
    << std::endl;
    #endif
    Compiler compiler(ast); // static analazation
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color 
        << extensionname << ": "
        << "Static analyzation passed"
        << normal_color 
    << std::endl;
    std::cout
        << std::endl 
        << blue_color
        << extensionname << ": "
        << "Compiling"
        << normal_color 
    << std::endl;
    #endif
    Compiler::FunctionToCompile ftc = {
        .funcname = funcname,
        .body = &body,
        .is_method = is_method
    };
    auto bytecode = compiler.compile_function(ftc);
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << extensionname << ": "
        << "Compilation passed"
        << normal_color 
    << std::endl;
    #endif

    interp->program.insert(interp->program.end(), bytecode.begin(), bytecode.end());

    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << extensionname << ": "
        << "Modified source:"
        << normal_color 
    << std::endl;
    for (size_t i=0; i<interp->program.size(); i++) {
        std::cout << std::setw(4) << i << ": " << interp->program[i] << std::endl;
    }
    #endif

    interp->global.set(globalname, std::make_shared<LuaValue::Function>(funcname, params.size(), vararg));
}