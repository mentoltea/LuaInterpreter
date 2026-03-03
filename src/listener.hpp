#include "AST.hpp"
#include "generated/Lua55GrammarBaseListener.h"
#include <stack>

namespace {

using namespace LuaAST;
    
class Lua55Listener: public Lua55GrammarBaseListener {
    
    struct State {
        std::stack< Node* > stack;
    } state;
    
    public:
    std::shared_ptr<Block> ast = nullptr;
    
    virtual void enterProg(Lua55GrammarParser::ProgContext * ctx) override { }
    virtual void exitProg(Lua55GrammarParser::ProgContext * ctx) override { }
    
    virtual void enterBlock(Lua55GrammarParser::BlockContext * ctx) override { }
    virtual void exitBlock(Lua55GrammarParser::BlockContext * ctx) override { }
    
    virtual void enterStatement(Lua55GrammarParser::StatementContext * ctx) override { }
    virtual void exitStatement(Lua55GrammarParser::StatementContext * ctx) override { }
    
    virtual void enterDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext * ctx) override { }
    virtual void exitDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext * ctx) override { }
    
    virtual void enterAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext * ctx) override { }
    virtual void exitAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext * ctx) override { }
    
    virtual void enterVarlist(Lua55GrammarParser::VarlistContext * ctx) override { }
    virtual void exitVarlist(Lua55GrammarParser::VarlistContext * ctx) override { }
    
    virtual void enterExplist(Lua55GrammarParser::ExplistContext * ctx) override { }
    virtual void exitExplist(Lua55GrammarParser::ExplistContext * ctx) override { }
    
    virtual void enterDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext * ctx) override { }
    virtual void exitDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext * ctx) override { }
    
    virtual void enterGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext * ctx) override { }
    virtual void exitGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext * ctx) override { }
    
    virtual void enterAttnamelist(Lua55GrammarParser::AttnamelistContext * ctx) override { }
    virtual void exitAttnamelist(Lua55GrammarParser::AttnamelistContext * ctx) override { }
    
    virtual void enterAttrib(Lua55GrammarParser::AttribContext * ctx) override { }
    virtual void exitAttrib(Lua55GrammarParser::AttribContext * ctx) override { }
    
    virtual void enterScopeSpec(Lua55GrammarParser::ScopeSpecContext * ctx) override { }
    virtual void exitScopeSpec(Lua55GrammarParser::ScopeSpecContext * ctx) override { }
    
    virtual void enterFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext * ctx) override { }
    virtual void exitFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext * ctx) override { }
    
    virtual void enterFuncname(Lua55GrammarParser::FuncnameContext * ctx) override { }
    virtual void exitFuncname(Lua55GrammarParser::FuncnameContext * ctx) override { }
    
    virtual void enterFuncbody(Lua55GrammarParser::FuncbodyContext * ctx) override { }
    virtual void exitFuncbody(Lua55GrammarParser::FuncbodyContext * ctx) override {
        FuncBody * body = new FuncBody;
        
        body->block = std::shared_ptr<Block>((Block*) state.stack.top());
        state.stack.pop();

        if (ctx->paramlist()) {
            if (ctx->paramlist()->vararg()) {
                body->variadic = true;
                if (ctx->paramlist()->vararg()->name()) body->variadic_param = ctx->paramlist()->vararg()->name()->ID()->toString();
            }

            if (ctx->paramlist()->namelist()) {
                for (auto& name_ctx: ctx->paramlist()->namelist()->name()) {
                    body->params.push_back(name_ctx->ID()->toString());
                }
            }
        }

        state.stack.push(body);
    }
    
    virtual void enterParamlist(Lua55GrammarParser::ParamlistContext * ctx) override { }
    virtual void exitParamlist(Lua55GrammarParser::ParamlistContext * ctx) override { }
    
    virtual void enterVararg(Lua55GrammarParser::VarargContext * ctx) override { }
    virtual void exitVararg(Lua55GrammarParser::VarargContext * ctx) override { }
    
    virtual void enterNamelist(Lua55GrammarParser::NamelistContext * ctx) override { }
    virtual void exitNamelist(Lua55GrammarParser::NamelistContext * ctx) override { }
    
    virtual void enterWhileStatement(Lua55GrammarParser::WhileStatementContext * ctx) override { }
    virtual void exitWhileStatement(Lua55GrammarParser::WhileStatementContext * ctx) override { }
    
    virtual void enterRepeatStatement(Lua55GrammarParser::RepeatStatementContext * ctx) override { }
    virtual void exitRepeatStatement(Lua55GrammarParser::RepeatStatementContext * ctx) override { }
    
    virtual void enterIfStatement(Lua55GrammarParser::IfStatementContext * ctx) override { }
    virtual void exitIfStatement(Lua55GrammarParser::IfStatementContext * ctx) override { 
        std::cout << "IFST( ";
        std::cout << ctx->toStringTree();
        std::cout << " )" <<std::endl;
        if (ctx->THEN(0)) std::cout << "THEN" << std::endl;
    }
    
    virtual void enterNumericForStatement(Lua55GrammarParser::NumericForStatementContext * ctx) override { }
    virtual void exitNumericForStatement(Lua55GrammarParser::NumericForStatementContext * ctx) override { }
    
    virtual void enterGenericForStatement(Lua55GrammarParser::GenericForStatementContext * ctx) override { }
    virtual void exitGenericForStatement(Lua55GrammarParser::GenericForStatementContext * ctx) override { }
    
    virtual void enterGotoStatement(Lua55GrammarParser::GotoStatementContext * ctx) override { }
    virtual void exitGotoStatement(Lua55GrammarParser::GotoStatementContext * ctx) override { }
    
    virtual void enterLabelStatement(Lua55GrammarParser::LabelStatementContext * ctx) override { }
    virtual void exitLabelStatement(Lua55GrammarParser::LabelStatementContext * ctx) override { }
    
    virtual void enterBreakStatement(Lua55GrammarParser::BreakStatementContext * ctx) override { }
    virtual void exitBreakStatement(Lua55GrammarParser::BreakStatementContext * ctx) override { }
    
    virtual void enterReturnStatement(Lua55GrammarParser::ReturnStatementContext * ctx) override { }
    virtual void exitReturnStatement(Lua55GrammarParser::ReturnStatementContext * ctx) override { }
    
    virtual void enterFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext * ctx) override { }
    virtual void exitFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext * ctx) override { }
    
    virtual void enterFuncAnon(Lua55GrammarParser::FuncAnonContext * ctx) override { }
    virtual void exitFuncAnon(Lua55GrammarParser::FuncAnonContext * ctx) override { 
        FuncAnon* func = new FuncAnon;
        
        func->body = std::shared_ptr<FuncBody>( (FuncBody*) state.stack.top() );
        state.stack.pop();

        state.stack.push(func);
    }
    
    virtual void enterTableConstructor(Lua55GrammarParser::TableConstructorContext * ctx) override { }
    virtual void exitTableConstructor(Lua55GrammarParser::TableConstructorContext * ctx) override { }
    
    virtual void enterFieldlist(Lua55GrammarParser::FieldlistContext * ctx) override { }
    virtual void exitFieldlist(Lua55GrammarParser::FieldlistContext * ctx) override { }
    
    virtual void enterField_sep(Lua55GrammarParser::Field_sepContext * ctx) override { }
    virtual void exitField_sep(Lua55GrammarParser::Field_sepContext * ctx) override { }
    
    virtual void enterField(Lua55GrammarParser::FieldContext * ctx) override { }
    virtual void exitField(Lua55GrammarParser::FieldContext * ctx) override { }
    
    virtual void enterExp(Lua55GrammarParser::ExpContext * ctx) override { }
    virtual void exitExp(Lua55GrammarParser::ExpContext * ctx) override { 
        std::cout << "Expression( ";
        std::cout << ctx->toStringTree();
        std::cout << " )" << std::endl;
    }
    
    virtual void exitOpExp(Lua55GrammarParser::OpExpContext * ctx) override { 
        std::cout << "Operation: ";
        state.stack.top()->print(std::cout);
        std::cout << std::endl;
    }
    
    virtual void exitOrExp(Lua55GrammarParser::OrExpContext * ctx) override { 
        if (ctx->andExp().size() > 1) {
            size_t n = ctx->andExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->OR(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitAndExp(Lua55GrammarParser::AndExpContext * ctx) override { 
        if (ctx->compExp().size() > 1) {
            size_t n = ctx->compExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->AND(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitCompExp(Lua55GrammarParser::CompExpContext * ctx) override { 
        if (ctx->COMPOP()) {
            Expression* rhs = (Expression*) state.stack.top();
            state.stack.pop();

            Expression* lhs = (Expression*) state.stack.top();
            state.stack.pop();

            Operation* opexp = new Operation;
            opexp->kind = Operation::Kind::BINOP;
            opexp->operat = ctx->COMPOP()->toString();
            opexp->lhs = std::shared_ptr<Expression>(lhs);
            opexp->rhs = std::shared_ptr<Expression>(rhs);

            state.stack.push(opexp);
        }
    }
    
    virtual void exitBitorExp(Lua55GrammarParser::BitorExpContext * ctx) override { 
        if (ctx->bitxorExp().size() > 1) {
            size_t n = ctx->bitxorExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "|";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitBitxorExp(Lua55GrammarParser::BitxorExpContext * ctx) override { 
        if (ctx->bitandExp().size() > 1) {
            size_t n = ctx->bitandExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "~";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitBitandExp(Lua55GrammarParser::BitandExpContext * ctx) override { 
        if (ctx->shiftExp().size() > 1) {
            size_t n = ctx->shiftExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "&";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitShiftExp(Lua55GrammarParser::ShiftExpContext * ctx) override { 
        if (ctx->SHIFTOP().size() > 0) {
            size_t n = ctx->concatExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->SHIFTOP(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitConcatExp(Lua55GrammarParser::ConcatExpContext * ctx) override { 
        if (ctx->plusExp().size() > 1) {
            size_t n = ctx->plusExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = "..";

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitPlusExp(Lua55GrammarParser::PlusExpContext * ctx) override { 
        if (ctx->PLUSOP().size() > 0) {
            size_t n = ctx->mulExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->PLUSOP(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitMulExp(Lua55GrammarParser::MulExpContext * ctx) override { 
        if (ctx->MULOP().size() > 0) {
            size_t n = ctx->unaryExp().size();

            std::vector<Expression*> operands(n, nullptr);

            for (size_t i=0; i<n; i++) {
                operands[n-1-i] = (Expression*) state.stack.top();
                state.stack.pop();
            }

            
            for (size_t i=0; i<n-1; i++) {
                Operation* opexp = new Operation;

                Expression* lhs = operands[i];
                Expression* rhs = operands[i+1];

                opexp->kind = Operation::Kind::BINOP;
                opexp->operat = ctx->MULOP(i)->toString();

                opexp->lhs = std::shared_ptr<Expression>(lhs);
                opexp->rhs = std::shared_ptr<Expression>(rhs);

                operands[i+1] = opexp;
            }

            state.stack.push(operands[n-1]);
        }
    }
    
    virtual void exitUnaryExp(Lua55GrammarParser::UnaryExpContext * ctx) override { 
        if (ctx->UNOP()) {
            Expression* lhs = (Expression*) state.stack.top();
            state.stack.pop();

            Operation* opexp = new Operation;
            opexp->kind = Operation::Kind::UNOP;
            opexp->operat = ctx->UNOP()->toString();
            opexp->lhs = std::shared_ptr<Expression>(lhs);

            state.stack.push(opexp);
        }
    }
    
    virtual void exitPowExp(Lua55GrammarParser::PowExpContext * ctx) override {
        if (ctx->powExp()) {
            Expression* rhs = (Expression*) state.stack.top();
            state.stack.pop();

            Expression* lhs = (Expression*) state.stack.top();
            state.stack.pop();

            Operation* opexp = new Operation;
            opexp->kind = Operation::Kind::BINOP;
            opexp->operat = "^";
            opexp->lhs = std::shared_ptr<Expression>(lhs);
            opexp->rhs = std::shared_ptr<Expression>(rhs);

            state.stack.push(opexp);
        }
    }
    
    
    virtual void exitLiteral(Lua55GrammarParser::LiteralContext * ctx) override { 
        Literal* lit = new Literal;
        
        if (ctx->NIL()) {
            lit->kind = Literal::Kind::NIL;
        } else 

        if (ctx->FALSE()) {
            lit->kind = Literal::Kind::BOOLEAN;
            lit->value = false;
        } else 
        if (ctx->TRUE()) {
            lit->kind = Literal::Kind::BOOLEAN;
            lit->value = true;
        } else

        if (ctx->STRING()) {
            lit->kind = Literal::Kind::STRING;
            lit->value = ctx->STRING()->toString();
        } else

        if (ctx->NUMBER()) {
            lit->kind = Literal::Kind::NUMBER;
            std::string number = ctx->NUMBER()->toString();
            Number num;
            if (number.contains('.')) {
                // double
                num.kind = Number::Kind::FLOAT;
                num.f = std::stod(number);
            } else {
                // int
                num.kind = Number::Kind::INT;
                num.i = std::stoll(number);
            }
            lit->value = num;
        } else {
            std::cerr << "UNEXPECTED LITERAL:" << ctx->toString() << std::endl;
        }

        lit->print(std::cout);
        std::cout<<std::endl;
        state.stack.push(lit);
    }
    
    virtual void enterPrefixexp(Lua55GrammarParser::PrefixexpContext * ctx) override { }
    virtual void exitPrefixexp(Lua55GrammarParser::PrefixexpContext * ctx) override { }
    
    virtual void enterFuncCall(Lua55GrammarParser::FuncCallContext * ctx) override { }
    virtual void exitFuncCall(Lua55GrammarParser::FuncCallContext * ctx) override {
        FuncCall* funccall = new FuncCall;

        std::stack<FuncCallTail*> tails;
        size_t n = ctx->funcCall_tail().size();
        for (size_t i=0; i<n; i++) {
            tails.push((FuncCallTail*) state.stack.top());
            state.stack.pop();
        }
        for (size_t i=0; i<n; i++) {
            funccall->tails.push_back(
                std::shared_ptr<FuncCallTail>((FuncCallTail*) tails.top())
            );
            tails.pop();
        }
        
        // var inherits from expr
        funccall->function = std::shared_ptr<Expression>((Expression*) state.stack.top());
        state.stack.pop();

        std::cout << "funccall( ";
        funccall->print(std::cout);
        std::cout << " )" << std::endl;
        state.stack.push(funccall);
    }
    
    virtual void enterFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * ctx) override { }
    virtual void exitFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * ctx) override {
        FuncCallTail* tail = new FuncCallTail;
        if (ctx->name()){
            tail->name = ctx->name()->ID()->toString();
        }
        if (ctx->args()->explist()) {
            size_t n = ctx->args()->explist()->exp().size();
            std::stack<Expression*> temp;
            for (size_t i=0; i<n; i++) {
                temp.push((Expression*)state.stack.top());
                state.stack.pop();
            }
            for (size_t i=0; i<n; i++) {
                tail->args.push_back(
                    std::shared_ptr<Expression>((Expression*)temp.top())
                );
                temp.pop();
            }
        }
        
        state.stack.push(tail);
    }
    
    virtual void enterArgs(Lua55GrammarParser::ArgsContext * ctx) override { }
    virtual void exitArgs(Lua55GrammarParser::ArgsContext * ctx) override { }
    
    virtual void enterVar(Lua55GrammarParser::VarContext * ctx) override { }
    virtual void exitVar(Lua55GrammarParser::VarContext * ctx) override {
        Var* var = new Var;

        size_t n = ctx->var_tail().size();
        std::stack< VarPart* > parts;
        for (size_t i=0; i<n; i++) {
            parts.push( (VarPart*) state.stack.top() );
            state.stack.pop();
        }
        for (size_t i=0; i<n; i++) {
            var->specifications.push_back(
                std::shared_ptr<VarPart>(parts.top())
            );
            parts.pop();
        }
        
        if (ctx->name()) {
            var->base.reset(new VarPartName(ctx->name()->ID()->toString()));
            var->base->kind = VarPart::Kind::NAME;
        } else {
            std::shared_ptr<Expression> exp( (Expression*) state.stack.top() ); 
            state.stack.pop();

            var->base.reset(new VarPartExp(exp));
            var->base->kind = VarPart::Kind::EXP;
        }

        std::cout << "Var: ";
        var->print(std::cout);
        std::cout << std::endl;
        state.stack.push(var);
    }
    
    virtual void enterVar_tail(Lua55GrammarParser::Var_tailContext * ctx) override { }
    virtual void exitVar_tail(Lua55GrammarParser::Var_tailContext * ctx) override {
        VarPart* part;

        if (ctx->name()) {
            part = new VarPartName(ctx->name()->ID()->toString());
            std::cout << "VarPartName: " << ctx->name()->ID()->toString() << std::endl;
            part->kind = VarPart::Kind::NAME;
        } else {
            std::shared_ptr<Expression> exp( (Expression*) state.stack.top() ); 
            state.stack.pop();
            std::cout << "VarPartExp: ";
            exp->print(std::cout);
            std::cout << std::endl;
            
            part = new VarPartExp(exp);
            part->kind = VarPart::Kind::EXP;
        }
        state.stack.push(part);
    }
    
    virtual void enterName(Lua55GrammarParser::NameContext * ctx) override { }
    virtual void exitName(Lua55GrammarParser::NameContext * ctx) override {
        std::cout << "NAME( ";
        std::cout << ctx->ID()->toString();
        std::cout << " )" << std::endl;;
    }
    
    virtual void enterAttributes_defined(Lua55GrammarParser::Attributes_definedContext * ctx) override { }
    virtual void exitAttributes_defined(Lua55GrammarParser::Attributes_definedContext * ctx) override { }
};

}