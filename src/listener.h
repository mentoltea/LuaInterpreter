#ifndef LISTENER_H
#define LISTENER_H

#include "AST.h"
#include "generated/Lua55GrammarBaseListener.h"
#include <stack>


using namespace LuaAST;
    
class Lua55Listener: public Lua55GrammarBaseListener {
    struct State {
        std::stack< Node* > stack;

        struct Frame {
            Block* parent;
            Statement* last;
            Frame();
        };
        std::stack< Frame > frames;
    } state;
    
    public:
    Lua55Listener();
    ~Lua55Listener();

    std::shared_ptr<Block> ast = nullptr;
    
    virtual void exitProg(Lua55GrammarParser::ProgContext * ctx) override;
    
    virtual void enterBlock(Lua55GrammarParser::BlockContext * ctx) override;
    virtual void exitBlock(Lua55GrammarParser::BlockContext * ctx) override;
    
    virtual void exitStatement(Lua55GrammarParser::StatementContext * ctx) override;
    
    virtual void exitDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext * ctx) override;
    
    virtual void exitAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext * ctx) override;
            
    virtual void exitDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext * ctx) override;
    
    virtual void exitGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext * ctx) override;


    
    virtual void exitFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext * ctx) override;

    virtual void exitDefaultFuncdefStatement(Lua55GrammarParser::DefaultFuncdefStatementContext * ctx) override;

    virtual void exitScopedFuncdefStatement(Lua55GrammarParser::ScopedFuncdefStatementContext * ctx) override;
    
    virtual void exitFuncname(Lua55GrammarParser::FuncnameContext * ctx) override;
    
    virtual void exitFuncbody(Lua55GrammarParser::FuncbodyContext * ctx) override;
    
    virtual void exitWhileStatement(Lua55GrammarParser::WhileStatementContext * ctx) override;
    
    virtual void exitRepeatStatement(Lua55GrammarParser::RepeatStatementContext * ctx) override;
    
    virtual void exitIfStatement(Lua55GrammarParser::IfStatementContext * ctx) override;
    
    virtual void exitNumericForStatement(Lua55GrammarParser::NumericForStatementContext * ctx) override;
    
    virtual void exitGenericForStatement(Lua55GrammarParser::GenericForStatementContext * ctx) override;
    
    virtual void exitGotoStatement(Lua55GrammarParser::GotoStatementContext * ctx) override;
    
    virtual void exitLabelStatement(Lua55GrammarParser::LabelStatementContext * ctx) override;
    
    virtual void exitBreakStatement(Lua55GrammarParser::BreakStatementContext * ctx) override;
    
    virtual void exitReturnStatement(Lua55GrammarParser::ReturnStatementContext * ctx) override;

    virtual void exitFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext * ctx) override;
    

    
    virtual void exitFuncAnon(Lua55GrammarParser::FuncAnonContext * ctx) override;
    
    virtual void exitTableConstructor(Lua55GrammarParser::TableConstructorContext * ctx) override;
            
    virtual void exitField(Lua55GrammarParser::FieldContext * ctx) override;
    
    virtual void exitExp(Lua55GrammarParser::ExpContext * ctx) override;
    
    virtual void exitOrExp(Lua55GrammarParser::OrExpContext * ctx) override;
    
    virtual void exitAndExp(Lua55GrammarParser::AndExpContext * ctx) override;
    
    virtual void exitCompExp(Lua55GrammarParser::CompExpContext * ctx) override;
    
    virtual void exitBitorExp(Lua55GrammarParser::BitorExpContext * ctx) override;
    
    virtual void exitBitxorExp(Lua55GrammarParser::BitxorExpContext * ctx) override;
    
    virtual void exitBitandExp(Lua55GrammarParser::BitandExpContext * ctx) override;
    
    virtual void exitShiftExp(Lua55GrammarParser::ShiftExpContext * ctx) override;
    
    virtual void exitConcatExp(Lua55GrammarParser::ConcatExpContext * ctx) override;
    
    virtual void exitPlusExp(Lua55GrammarParser::PlusExpContext * ctx) override;
    
    virtual void exitMulExp(Lua55GrammarParser::MulExpContext * ctx) override;
    
    virtual void exitUnaryExp(Lua55GrammarParser::UnaryExpContext * ctx) override;
    
    virtual void exitPowExp(Lua55GrammarParser::PowExpContext * ctx) override;
    
    virtual void exitLiteral(Lua55GrammarParser::LiteralContext * ctx) override;
        
    virtual void exitFuncCall(Lua55GrammarParser::FuncCallContext * ctx) override;
    
    virtual void exitFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * ctx) override;
     
    virtual void exitVar(Lua55GrammarParser::VarContext * ctx) override;
    
    virtual void exitVar_tail(Lua55GrammarParser::Var_tailContext * ctx) override;
    
    virtual void exitName(Lua55GrammarParser::NameContext * ctx) override;
};

class ErrorCountListener : public antlr4::BaseErrorListener {
public:
    void syntaxError(antlr4::Recognizer* recognizer, 
                     antlr4::Token* offendingSymbol, 
                     size_t line, 
                     size_t charPositionInLine, 
                     const std::string& msg, 
                     std::exception_ptr e) override;
    
    bool hasErrors() const;
    size_t getErrorCount() const;
    const std::vector<std::string>& getErrors() const;
    
private:
    size_t errorCount = 0;
    std::vector<std::string> errors;
};

#endif // LISTENER_H
