#ifndef INTERPRETER_STATIC_H
#define INTERPRETER_STATIC_H

#include "AST.hpp"

#include <stack>

namespace LuaInterpreter {

class StaticAnalyzer {
public:
    std::unordered_map< std::string, std::shared_ptr< LuaAST::LabelSt > > labels;
    
    StaticAnalyzer(std::shared_ptr< LuaAST::Block > ast) {
        resolve_gotos_and_labels(ast);
    }

    void resolve_gotos_and_labels(std::shared_ptr< LuaAST::Block > ast) {
        std::vector< std::shared_ptr<LuaAST::GotoSt> > gotos;
        std::stack< std::shared_ptr<LuaAST::Statement> > stack;
        for (auto& st: ast->statements) {
            stack.push(st);
        }

        while (!stack.empty()) {
            std::shared_ptr statement = stack.top(); stack.pop();

            switch (statement->type()) {
                case LuaAST::Statement::Type::DO_BLOCK: {
                    auto st = std::static_pointer_cast<LuaAST::DoBlockSt>(statement);
                    for (auto& child: st->block->statements) {
                        stack.push(child);
                    }
                } break;
                case LuaAST::Statement::Type::ASSIGN: {
                } break;
                case LuaAST::Statement::Type::DECLARE: {
                } break;
                case LuaAST::Statement::Type::ATTRIB: {
                } break;
                case LuaAST::Statement::Type::FUNCDEF: {
                    auto st = std::static_pointer_cast<LuaAST::FuncdefSt>(statement);
                    for (auto& child: st->body->block->statements) {
                        stack.push(child);
                    }
                } break;
                case LuaAST::Statement::Type::WHILE: {
                    auto st = std::static_pointer_cast<LuaAST::WhileSt>(statement);
                    for (auto& child: st->block->statements) {
                        stack.push(child);
                    }
                } break;
                case LuaAST::Statement::Type::REPEAT: {
                    auto st = std::static_pointer_cast<LuaAST::RepeatSt>(statement);
                    for (auto& child: st->block->statements) {
                        stack.push(child);
                    }
                } break;
                case LuaAST::Statement::Type::IF: {
                    auto st = std::static_pointer_cast<LuaAST::IfSt>(statement);
                    for (auto& child: st->branch_if.second->statements) {
                        stack.push(child);
                    }
                    for (auto& branch: st->branch_elseif) {
                        for (auto& child: branch.second->statements) {
                            stack.push(child);
                        }
                    }
                    if (st->branch_else.has_value()) {
                        for (auto& child: st->branch_else.value()->statements) {
                            stack.push(child);
                        }
                    }
                } break;
                case LuaAST::Statement::Type::NUM_FOR: {
                    auto st = std::static_pointer_cast<LuaAST::Num_forSt>(statement);
                    for (auto& child: st->block->statements) {
                        stack.push(child);
                    }
                } break;
                case LuaAST::Statement::Type::GEN_FOR: {
                    auto st = std::static_pointer_cast<LuaAST::Gen_forSt>(statement);
                    for (auto& child: st->block->statements) {
                        stack.push(child);
                    }
                } break;
                case LuaAST::Statement::Type::GOTO: {
                    auto st = std::static_pointer_cast<LuaAST::GotoSt>(statement);
                    gotos.push_back(st);
                } break;
                case LuaAST::Statement::Type::LABEL: {
                    auto st = std::static_pointer_cast<LuaAST::LabelSt>(statement);
                    if (labels.find(st->label) != labels.end()) {
                        throw std::runtime_error("Label `" + st->label + "` defined several times");
                    }
                    labels.insert( { st->label, st } );
                } break;
                case LuaAST::Statement::Type::BREAK: {
                } break;
                case LuaAST::Statement::Type::FUNCCALL: {
                } break;
                case LuaAST::Statement::Type::RETURN: {
                } break;

                default:
                case LuaAST::Statement::Type::NONE: {
                    throw std::runtime_error("Unexpected statement type: " + std::to_string((int)statement->type()));
                } break;
            }
        }

        for (auto& st: gotos) {
            if (labels.find(st->label) == labels.end()) {
                throw std::runtime_error("Goto to undefined label `" + st->label + "`");
            }
        }
    }
};

}

#endif // INTERPRETER_STATIC_H