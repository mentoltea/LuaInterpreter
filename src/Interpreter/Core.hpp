#ifndef INTERPRETER_CORE_H
#define INTERPRETER_CORE_H

#include "Base.hpp"
#include "Value.hpp"

#include <unordered_map>
#include <memory>
#include <mutex>
#include <condition_variable>

namespace LuaInterpreter {

struct Scope {
    LuaAST::Statement *made_from = nullptr;
    std::unordered_map< std::string, std::shared_ptr<Value> > locals;

    std::shared_ptr<Value> get(const std::string &name) {
        if (!locals.contains(name)) {
            return nullptr;
        }
        return locals[name];
    }
    void set(const std::string &name, std::shared_ptr<Value> value) {
        locals[name] = value;
    }
};

class Interpreter;

struct Executioner {
    Interpreter *g; 
    // 0 - begining
    std::vector< Scope > scopes;
    std::shared_ptr<Value> get(const std::string &name) {
        for (auto it = scopes.rbegin(); it != scopes.rend(); it++) {
            if (auto res = it->get(name)) return res;
        }
        return nullptr;
    }
    void set(const std::string &name, std::shared_ptr<Value> value) {
        for (auto it = scopes.rbegin(); it != scopes.rend(); it++) {
            if (auto res = it->get(name)) it->set(name, value);
        }
    }
    
    LuaAST::Statement * ip;
    
    bool stop_exec = false;
    bool running = true;
    std::shared_ptr<Value> ret;

    Executioner(
        Interpreter *g, 
        const std::vector< Scope >& stack,
        LuaAST::Block *block
    ): scopes(stack) {
        this->g = g;
        if (block->statements.size() > 0) this->ip = block->statements[0].get();
        else this->ip = nullptr;
        this->ret = nullptr;
    }

    void execute() {
        while (running) {    
            switch (ip->type()) {
                case LuaAST::Statement::Type::DO_BLOCK: {
    
                } break;
    
                case LuaAST::Statement::Type::ASSIGN: {
    
                } break;
    
                case LuaAST::Statement::Type::DECLARE: {
    
                } break;
    
                case LuaAST::Statement::Type::ATTRIB: {
    
                } break;
    
                case LuaAST::Statement::Type::FUNCDEF: {
    
                } break;
    
                case LuaAST::Statement::Type::WHILE: {
    
                } break;
    
                case LuaAST::Statement::Type::REPEAT: {
    
                } break;
    
                case LuaAST::Statement::Type::IF: {
    
                } break;
    
                case LuaAST::Statement::Type::NUM_FOR: {
    
                } break;
    
                case LuaAST::Statement::Type::GEN_FOR: {
    
                } break;
    
                case LuaAST::Statement::Type::GOTO: {
    
                } break;
    
                case LuaAST::Statement::Type::LABEL: {
    
                } break;
    
                case LuaAST::Statement::Type::BREAK: {
    
                } break;        
                
                case LuaAST::Statement::Type::FUNCCALL: {
    
                } break;
                
                case LuaAST::Statement::Type::RETURN: {
    
                } break;

                default: throw std::runtime_error("Unexpected statement type");
            }
        }

        
    }
};

class Interpreter {
public:
    struct State {
        std::unique_lock<std::mutex> GIL;
        std::condition_variable GIC;

        std::unique_lock<std::mutex> RL;
        std::condition_variable RS;

        Scope global;

        std::vector< std::unique_ptr< Executioner > > workers;

        std::unordered_map< std::string, std::shared_ptr< LuaAST::LabelSt > > labels;
      
        std::shared_ptr<Value> get(const std::string &name) {
            return global.get(name);
        }
        void set(const std::string &name, std::shared_ptr<Value> value) {
            global.set(name, value);
        }
    };
    
    State state;

    Interpreter(
        std::shared_ptr<LuaAST::Block> ast, 
        const std::unordered_map< std::string, std::shared_ptr< LuaAST::LabelSt > > &labels
    ) {
        state.labels = labels;
        state.workers.push_back( 
            std::unique_ptr<Executioner> (
                new Executioner(this, {}, ast.get())   
            ) 
        );
    }

    bool run() {
        std::jthread(Executioner::execute, state.workers.begin()->get());

        bool EOS = false;
        while (!EOS) {
            state.RS.wait(state.RL);
            
            EOS = true;
            for (auto &w: state.workers) {
                if (w->running) {
                    EOS = false;
                    break;
                }
            }
            if (!EOS) break;

            state.GIC.notify_one();
        }
    }

    void get_lock() {
        state.GIC.wait(state.GIL);
    }
    void release_lock() {
        state.RS.notify_one();
    }
};

}

#endif // INTERPRETER_CORE_H