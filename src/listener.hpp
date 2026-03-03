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
    virtual void exitFuncbody(Lua55GrammarParser::FuncbodyContext * ctx) override { }
    
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
    virtual void exitFuncAnon(Lua55GrammarParser::FuncAnonContext * ctx) override { }
    
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
    
    virtual void enterOpExp(Lua55GrammarParser::OpExpContext * ctx) override { }
    virtual void exitOpExp(Lua55GrammarParser::OpExpContext * ctx) override { }
    
    virtual void enterOrExp(Lua55GrammarParser::OrExpContext * ctx) override { }
    virtual void exitOrExp(Lua55GrammarParser::OrExpContext * ctx) override { }
    
    virtual void enterAndExp(Lua55GrammarParser::AndExpContext * ctx) override { }
    virtual void exitAndExp(Lua55GrammarParser::AndExpContext * ctx) override { }
    
    virtual void enterCompExp(Lua55GrammarParser::CompExpContext * ctx) override { }
    virtual void exitCompExp(Lua55GrammarParser::CompExpContext * ctx) override { }
    
    virtual void enterBitorExp(Lua55GrammarParser::BitorExpContext * ctx) override { }
    virtual void exitBitorExp(Lua55GrammarParser::BitorExpContext * ctx) override { }
    
    virtual void enterBitxorExp(Lua55GrammarParser::BitxorExpContext * ctx) override { }
    virtual void exitBitxorExp(Lua55GrammarParser::BitxorExpContext * ctx) override { }
    
    virtual void enterBitandExp(Lua55GrammarParser::BitandExpContext * ctx) override { }
    virtual void exitBitandExp(Lua55GrammarParser::BitandExpContext * ctx) override { }
    
    virtual void enterShiftExp(Lua55GrammarParser::ShiftExpContext * ctx) override { }
    virtual void exitShiftExp(Lua55GrammarParser::ShiftExpContext * ctx) override { }
    
    virtual void enterConcatExp(Lua55GrammarParser::ConcatExpContext * ctx) override { }
    virtual void exitConcatExp(Lua55GrammarParser::ConcatExpContext * ctx) override { }
    
    virtual void enterPlusExp(Lua55GrammarParser::PlusExpContext * ctx) override { }
    virtual void exitPlusExp(Lua55GrammarParser::PlusExpContext * ctx) override { }
    
    virtual void enterMulExp(Lua55GrammarParser::MulExpContext * ctx) override { }
    virtual void exitMulExp(Lua55GrammarParser::MulExpContext * ctx) override { }
    
    virtual void enterUnaryExp(Lua55GrammarParser::UnaryExpContext * ctx) override { }
    virtual void exitUnaryExp(Lua55GrammarParser::UnaryExpContext * ctx) override { }
    
    virtual void enterPowExp(Lua55GrammarParser::PowExpContext * ctx) override { }
    virtual void exitPowExp(Lua55GrammarParser::PowExpContext * ctx) override { }
    
    virtual void enterCompop(Lua55GrammarParser::CompopContext * ctx) override { }
    virtual void exitCompop(Lua55GrammarParser::CompopContext * ctx) override { }
    
    virtual void enterShiftop(Lua55GrammarParser::ShiftopContext * ctx) override { }
    virtual void exitShiftop(Lua55GrammarParser::ShiftopContext * ctx) override { }
    
    virtual void enterPlusop(Lua55GrammarParser::PlusopContext * ctx) override { }
    virtual void exitPlusop(Lua55GrammarParser::PlusopContext * ctx) override { }
    
    virtual void enterMulop(Lua55GrammarParser::MulopContext * ctx) override { }
    virtual void exitMulop(Lua55GrammarParser::MulopContext * ctx) override { }
    
    virtual void enterUnop(Lua55GrammarParser::UnopContext * ctx) override { }
    virtual void exitUnop(Lua55GrammarParser::UnopContext * ctx) override { }
    
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
    virtual void exitFuncCall(Lua55GrammarParser::FuncCallContext * ctx) override { }
    
    virtual void enterFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * ctx) override { }
    virtual void exitFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * ctx) override {

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