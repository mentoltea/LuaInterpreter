#ifndef COMPILER_STATIC_H
#define COMPILER_STATIC_H

#include "AST.h"

#include <stack>

class StaticAnalyzer {
public:
    std::unordered_map< std::string, std::shared_ptr< LuaAST::LabelSt > > labels;
    
    StaticAnalyzer(std::shared_ptr< LuaAST::Block > ast);

    void resolve_gotos_and_labels(std::shared_ptr< LuaAST::Block > ast);

    void ensure_no_gotos_in_expr(std::shared_ptr<LuaAST::Expression> _expr);

    void ensure_no_gotos_in_block(std::shared_ptr<LuaAST::Block> block);

    std::set< std::string > resolve_captures_st(std::shared_ptr< LuaAST::Block > body);

    std::set< std::string > resolve_captures(std::shared_ptr< LuaAST::Expression > expression);
};

#endif // COMPILER_STATIC_H