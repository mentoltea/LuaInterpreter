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
                    auto st = std::static_pointer_cast<LuaAST::AssignSt>(statement);
                    for (auto &expr: st->lhs) {
                        ensure_no_gotos_in_expr(expr);
                    }
                    for (auto &expr: st->rhs) {
                        ensure_no_gotos_in_expr(expr);
                    }
                } break;
                case LuaAST::Statement::Type::DECLARE: {
                    auto st = std::static_pointer_cast<LuaAST::DeclareSt>(statement);
                    for (auto &expr: st->rhs) {
                        ensure_no_gotos_in_expr(expr);
                    }
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
                    ensure_no_gotos_in_expr(st->cond);
                } break;
                case LuaAST::Statement::Type::REPEAT: {
                    auto st = std::static_pointer_cast<LuaAST::RepeatSt>(statement);
                    for (auto& child: st->block->statements) {
                        stack.push(child);
                    }
                    ensure_no_gotos_in_expr(st->un_cond);
                } break;
                case LuaAST::Statement::Type::IF: {
                    auto st = std::static_pointer_cast<LuaAST::IfSt>(statement);
                    ensure_no_gotos_in_expr(st->branch_if.first);
                    for (auto& child: st->branch_if.second->statements) {
                        stack.push(child);
                    }
                    for (auto& branch: st->branch_elseif) {
                        ensure_no_gotos_in_expr(branch.first);
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
                    ensure_no_gotos_in_expr(st->from);
                    ensure_no_gotos_in_expr(st->to);
                    if (st->step.has_value()) ensure_no_gotos_in_expr(st->step.value());
                } break;
                case LuaAST::Statement::Type::GEN_FOR: {
                    auto st = std::static_pointer_cast<LuaAST::Gen_forSt>(statement);
                    for (auto &expr: st->exps) {
                        ensure_no_gotos_in_expr(expr);
                    }
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
                    auto st = std::static_pointer_cast<LuaAST::FunccallSt>(statement);
                    ensure_no_gotos_in_expr(st->funccall);
                } break;
                case LuaAST::Statement::Type::RETURN: {
                    auto st = std::static_pointer_cast<LuaAST::ReturnSt>(statement);
                    for (auto &expr: st->values) {
                        ensure_no_gotos_in_expr(expr);
                    }
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


    void ensure_no_gotos_in_expr(std::shared_ptr<LuaAST::Expression> _expr) {
        std::stack< std::shared_ptr<LuaAST::Expression> > stack;
        stack.push(_expr);

        while (!stack.empty()) {
            auto expr = stack.top(); stack.pop();
            switch (expr->type()) {
                case LuaAST::Expression::Type::LITERAL: {} break;

                case LuaAST::Expression::Type::FUNC_ANON: {
                    auto e = std::static_pointer_cast<LuaAST::FuncAnon>(expr);
                    ensure_no_gotos_in_block(e->body->block);
                } break;

                case LuaAST::Expression::Type::TABLE_CONSTR: {
                    auto e = std::static_pointer_cast<LuaAST::TableConstr>(expr);
                    for (auto &field: e->fields) {
                        switch (field->kind) {
                            case LuaAST::Field::Kind::INDEXED : {
                                ensure_no_gotos_in_expr(field->lhs);
                                ensure_no_gotos_in_expr(field->rhs);
                            } break;
                            case LuaAST::Field::Kind::NAMED : {
                                ensure_no_gotos_in_expr(field->rhs);
                            } break;
                            case LuaAST::Field::Kind::SINGLE : {
                                ensure_no_gotos_in_expr(field->lhs);
                            } break;
                            
                            default:
                                assert("UNREACHABLE" && 0);
                                break;
                        }
                    }
                } break;

                case LuaAST::Expression::Type::OPERATION: {
                    auto e = std::static_pointer_cast<LuaAST::Operation>(expr);
                    switch (e->kind) {
                        case LuaAST::Operation::Kind::UNOP: {
                            ensure_no_gotos_in_expr(e->lhs);
                        } break;
                        case LuaAST::Operation::Kind::BINOP: {
                            ensure_no_gotos_in_expr(e->lhs);
                            ensure_no_gotos_in_expr(e->rhs);
                        } break;

                        default: {
                            assert("UNREACHABLE" && 0);
                        } break;
                    }
                } break;

                case LuaAST::Expression::Type::VAR: {
                    auto e = std::static_pointer_cast<LuaAST::Var>(expr);
                    
                    if (e->base->kind == LuaAST::VarPart::Kind::EXP) {
                        auto epart = std::static_pointer_cast<LuaAST::VarPartExp>(e->base);
                        ensure_no_gotos_in_expr(epart->exp);
                    }
                    for (auto &part: e->specifications) {
                        if (part->kind == LuaAST::VarPart::Kind::EXP) {
                            auto epart = std::static_pointer_cast<LuaAST::VarPartExp>(part);
                            ensure_no_gotos_in_expr(epart->exp);
                        }   
                    }

                } break;

                case LuaAST::Expression::Type::FUNCCALL: {
                    auto e = std::static_pointer_cast<LuaAST::FuncCall>(expr);
                    ensure_no_gotos_in_expr(e->function);
                    for (auto &tail: e->tails) {
                        for (auto &arg: tail->args) {
                            ensure_no_gotos_in_expr(arg);
                        }
                    }
                } break;

                default: {
                    assert("UNREACHABLE" && 0);
                } break;
            }
        }
    }

    void ensure_no_gotos_in_block(std::shared_ptr<LuaAST::Block> block) {
        std::stack< std::shared_ptr<LuaAST::Statement> > stack;
        for (auto& st: block->statements) {
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
                    throw std::runtime_error("`goto` keyword is not allowed inside expressions");
                } break;
                case LuaAST::Statement::Type::LABEL: {
                    throw std::runtime_error("Label definition is not allowed inside expressions");
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
    }
};

}

#endif // INTERPRETER_STATIC_H