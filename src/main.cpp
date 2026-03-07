#include "listener.hpp"
#include "generated/Lua55GrammarLexer.h"
#include "generated/Lua55GrammarParser.h"
#include "generated/Lua55GrammarListener.h"
#include "Interpreter.hpp"

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

    Lua55Listener listener;
    // Lua55GrammarBaseListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    auto ast = listener.ast;
    
    std::cout << "AST contructed" << std::endl << std::endl;
    ast->print(std::cout, 0);
    std::cout  << std::endl << std::endl;
    
    
    LuaInterpreter::StaticAnalyzer statan(ast);
    std::cout << "Static analyzation passed" << std::endl << std::endl;

    // // bool int_success = Interpreter::interpret(ast);
    // // if (int_success == false) {
    // //     std::cerr << "INTERPRETING ERROR" << std::endl;
    // //     return 1;
    // // }

    std::cout << std::endl << "Success" << std::endl;

    return 0;
}