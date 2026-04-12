#include "map.h"

#include "listener.h"
#include "generated/Lua55GrammarLexer.h"
#include "generated/Lua55GrammarParser.h"
#include "generated/Lua55GrammarListener.h"
#include "Compiler.h"

using namespace LuaInterpreter;
using namespace LuaLibs;

void Map::include(Interpreter* interp) {
    include_imap(interp);
    include_map(interp);
}


std::string imap_src = R"(
if (type(table) ~= "Table") then
    error("Map: table must be type of \"Table\"")
end
if (not callable(func)) then
    error("Map: func must be callable")
end

result = {}
for i, v in ipairs(table) do
    result[i] = func(v)
end

return result
)";

void Map::include_imap(Interpreter* interp) {
    std::string red_color = "\e[31m";
    std::string green_color = "\e[32m";
    std::string blue_color = "\e[34m";
    std::string normal_color = "\e[m";

    antlr4::ANTLRInputStream stream(imap_src);
    Lua55GrammarLexer lexer(&stream);    
    antlr4::CommonTokenStream tokens(&lexer);
    
    Lua55GrammarParser parser(&tokens);    
    antlr4::tree::ParseTree* tree = parser.prog();
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "imap: " 
        << "Constructing AST"
        << normal_color 
    << std::endl;
    #endif
    Lua55Listener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    auto ast = listener.ast;
    LuaAST::FuncBody body;
    body.params = {"table", "func"};
    body.block = ast;

    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "imap: " 
        << "AST contructed"
        << normal_color 
    << std::endl;
    #endif
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "imap: " 
        << "Compiling"
        << normal_color 
    << std::endl;
    #endif
    Compiler compiler(ast); // static analazation
    Compiler::FunctionToCompile ftc = {
        .funcname = "__imap",
        .body = &body,
    };
    auto bytecode = compiler.compile_function(ftc);
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "imap: " 
        << "Compilation passed"
        << normal_color 
    << std::endl;
    #endif

    interp->program.insert(interp->program.end(), bytecode.begin(), bytecode.end());

    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "imap: " 
        << "Modified source:"
        << normal_color 
    << std::endl;
    for (size_t i=0; i<interp->program.size(); i++) {
        std::cout << i << ": " << interp->program[i] << std::endl;
    }
    #endif

    interp->global.set("imap", std::make_shared<LuaValue::Function>("__imap", 2, "varg"));
}

std::string map_src = R"(
if (type(table) ~= "Table") then
    error("Map: table must be type of \"Table\"")
end
if (not callable(func)) then
    error("Map: func must be callable")
end

result = {}
for k, v in pairs(table) do
    result[k] = func(v)
end

return result
)";

void Map::include_map(Interpreter* interp) {
    std::string red_color = "\e[31m";
    std::string green_color = "\e[32m";
    std::string blue_color = "\e[34m";
    std::string normal_color = "\e[m";

    antlr4::ANTLRInputStream stream(map_src);
    Lua55GrammarLexer lexer(&stream);    
    antlr4::CommonTokenStream tokens(&lexer);
    
    Lua55GrammarParser parser(&tokens);    
    antlr4::tree::ParseTree* tree = parser.prog();
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "map: " 
        << "Constructing AST"
        << normal_color 
    << std::endl;
    #endif
    Lua55Listener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    auto ast = listener.ast;
    LuaAST::FuncBody body;
    body.params = {"table", "func"};
    body.block = ast;

    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "map: " 
        << "AST contructed"
        << normal_color 
    << std::endl;
    #endif
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "map: " 
        << "Compiling"
        << normal_color 
    << std::endl;
    #endif
    Compiler compiler(ast); // static analazation
    Compiler::FunctionToCompile ftc = {
        .funcname = "__map",
        .body = &body,
    };
    auto bytecode = compiler.compile_function(ftc);
    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "map: " 
        << "Compilation passed"
        << normal_color 
    << std::endl;
    #endif

    interp->program.insert(interp->program.end(), bytecode.begin(), bytecode.end());

    #ifdef INTERPRETER_DEBUG
    std::cout
        << std::endl 
        << blue_color
        << "map: " 
        << "Modified source:"
        << normal_color 
    << std::endl;
    for (size_t i=0; i<interp->program.size(); i++) {
        std::cout << i << ": " << interp->program[i] << std::endl;
    }
    #endif

    interp->global.set("map", std::make_shared<LuaValue::Function>("__map", 2, "varg"));
}