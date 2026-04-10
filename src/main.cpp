#include "listener.h"
#include "generated/Lua55GrammarLexer.h"
#include "generated/Lua55GrammarParser.h"
#include "generated/Lua55GrammarListener.h"
#include "Compiler.h"
#include "Interpreter.h"

std::string red_color = "\e[31m";
std::string green_color = "\e[32m";
std::string blue_color = "\e[34m";
std::string normal_color = "\e[m";

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Filepath is expected" << std::endl;
        return 1;
    }

    std::string filepath = argv[1];
    std::ifstream fd(filepath);

    std::string input;
    std::string line;
    while (std::getline(fd, line)) {
        input += line + "\n";
    }

    antlr4::ANTLRInputStream stream(input);
    
    Lua55GrammarLexer lexer(&stream);    
    antlr4::CommonTokenStream tokens(&lexer);
    
    Lua55GrammarParser parser(&tokens);    
    antlr4::tree::ParseTree* tree = parser.prog();
    
    // std::cout << tree->toStringTree() << std::endl;
    std::cout
        << std::endl 
        << blue_color 
        << "Constructing AST"
        << normal_color 
    << std::endl;

    Lua55Listener listener;
    // Lua55GrammarBaseListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    auto ast = listener.ast;
    
    

    std::cout
        << std::endl 
        << green_color 
        << "AST contructed"
        << normal_color 
    << std::endl;

    ast->print(std::cout, 0);
    std::cout << std::endl;
    
    std::cout
        << std::endl 
        << blue_color 
        << "Compiling"
        << normal_color 
    << std::endl;

    Compiler compiler(ast);

    auto bytecode = compiler.compile(ast);

    std::cout 
        << std::endl 
        << green_color
        << "Compilation passed"
        << normal_color 
    << std::endl;

    for (auto &inst: bytecode) {
        std::cout << inst << std::endl;
    }

    std::cout 
        << std::endl 
        << blue_color
        << "Intepreting"
        << normal_color 
    << std::endl;

    LuaInterpreter::Interpreter interp(bytecode);
    auto result = interp.run();

    if (!result) {
        std::cout 
            << std::endl 
            << red_color
            << "Interpretation ended with an error"
            << normal_color 
        << std::endl;
        return 1;
    }

    std::cout 
        << std::endl 
        << green_color
        << "Interpretation passed"
        << normal_color 
    << std::endl;

    std::cout 
        << std::endl 
        << green_color
        << "Success"
        << normal_color 
    << std::endl;

    return 0;
}