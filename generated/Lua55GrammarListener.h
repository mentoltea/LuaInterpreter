
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Lua55GrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Lua55GrammarParser.
 */
class  Lua55GrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(Lua55GrammarParser::ProgContext *ctx) = 0;
  virtual void exitProg(Lua55GrammarParser::ProgContext *ctx) = 0;

  virtual void enterBlock(Lua55GrammarParser::BlockContext *ctx) = 0;
  virtual void exitBlock(Lua55GrammarParser::BlockContext *ctx) = 0;

  virtual void enterStatement(Lua55GrammarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(Lua55GrammarParser::StatementContext *ctx) = 0;

  virtual void enterEmptyStatement(Lua55GrammarParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(Lua55GrammarParser::EmptyStatementContext *ctx) = 0;

  virtual void enterDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext *ctx) = 0;
  virtual void exitDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext *ctx) = 0;

  virtual void enterAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext *ctx) = 0;

  virtual void enterVarlist(Lua55GrammarParser::VarlistContext *ctx) = 0;
  virtual void exitVarlist(Lua55GrammarParser::VarlistContext *ctx) = 0;

  virtual void enterExplist(Lua55GrammarParser::ExplistContext *ctx) = 0;
  virtual void exitExplist(Lua55GrammarParser::ExplistContext *ctx) = 0;

  virtual void enterDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext *ctx) = 0;
  virtual void exitGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext *ctx) = 0;

  virtual void enterAttnamelist(Lua55GrammarParser::AttnamelistContext *ctx) = 0;
  virtual void exitAttnamelist(Lua55GrammarParser::AttnamelistContext *ctx) = 0;

  virtual void enterNameattr(Lua55GrammarParser::NameattrContext *ctx) = 0;
  virtual void exitNameattr(Lua55GrammarParser::NameattrContext *ctx) = 0;

  virtual void enterAttrib(Lua55GrammarParser::AttribContext *ctx) = 0;
  virtual void exitAttrib(Lua55GrammarParser::AttribContext *ctx) = 0;

  virtual void enterScopeSpec(Lua55GrammarParser::ScopeSpecContext *ctx) = 0;
  virtual void exitScopeSpec(Lua55GrammarParser::ScopeSpecContext *ctx) = 0;

  virtual void enterFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext *ctx) = 0;
  virtual void exitFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext *ctx) = 0;

  virtual void enterDefaultFuncdefStatement(Lua55GrammarParser::DefaultFuncdefStatementContext *ctx) = 0;
  virtual void exitDefaultFuncdefStatement(Lua55GrammarParser::DefaultFuncdefStatementContext *ctx) = 0;

  virtual void enterScopedFuncdefStatement(Lua55GrammarParser::ScopedFuncdefStatementContext *ctx) = 0;
  virtual void exitScopedFuncdefStatement(Lua55GrammarParser::ScopedFuncdefStatementContext *ctx) = 0;

  virtual void enterFuncname(Lua55GrammarParser::FuncnameContext *ctx) = 0;
  virtual void exitFuncname(Lua55GrammarParser::FuncnameContext *ctx) = 0;

  virtual void enterNamespec(Lua55GrammarParser::NamespecContext *ctx) = 0;
  virtual void exitNamespec(Lua55GrammarParser::NamespecContext *ctx) = 0;

  virtual void enterFuncbody(Lua55GrammarParser::FuncbodyContext *ctx) = 0;
  virtual void exitFuncbody(Lua55GrammarParser::FuncbodyContext *ctx) = 0;

  virtual void enterParamlist(Lua55GrammarParser::ParamlistContext *ctx) = 0;
  virtual void exitParamlist(Lua55GrammarParser::ParamlistContext *ctx) = 0;

  virtual void enterVararg(Lua55GrammarParser::VarargContext *ctx) = 0;
  virtual void exitVararg(Lua55GrammarParser::VarargContext *ctx) = 0;

  virtual void enterNamelist(Lua55GrammarParser::NamelistContext *ctx) = 0;
  virtual void exitNamelist(Lua55GrammarParser::NamelistContext *ctx) = 0;

  virtual void enterWhileStatement(Lua55GrammarParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(Lua55GrammarParser::WhileStatementContext *ctx) = 0;

  virtual void enterRepeatStatement(Lua55GrammarParser::RepeatStatementContext *ctx) = 0;
  virtual void exitRepeatStatement(Lua55GrammarParser::RepeatStatementContext *ctx) = 0;

  virtual void enterIfStatement(Lua55GrammarParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(Lua55GrammarParser::IfStatementContext *ctx) = 0;

  virtual void enterNumericForStatement(Lua55GrammarParser::NumericForStatementContext *ctx) = 0;
  virtual void exitNumericForStatement(Lua55GrammarParser::NumericForStatementContext *ctx) = 0;

  virtual void enterGenericForStatement(Lua55GrammarParser::GenericForStatementContext *ctx) = 0;
  virtual void exitGenericForStatement(Lua55GrammarParser::GenericForStatementContext *ctx) = 0;

  virtual void enterGotoStatement(Lua55GrammarParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(Lua55GrammarParser::GotoStatementContext *ctx) = 0;

  virtual void enterLabelStatement(Lua55GrammarParser::LabelStatementContext *ctx) = 0;
  virtual void exitLabelStatement(Lua55GrammarParser::LabelStatementContext *ctx) = 0;

  virtual void enterBreakStatement(Lua55GrammarParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(Lua55GrammarParser::BreakStatementContext *ctx) = 0;

  virtual void enterReturnStatement(Lua55GrammarParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(Lua55GrammarParser::ReturnStatementContext *ctx) = 0;

  virtual void enterFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext *ctx) = 0;
  virtual void exitFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext *ctx) = 0;

  virtual void enterFuncAnon(Lua55GrammarParser::FuncAnonContext *ctx) = 0;
  virtual void exitFuncAnon(Lua55GrammarParser::FuncAnonContext *ctx) = 0;

  virtual void enterTableConstructor(Lua55GrammarParser::TableConstructorContext *ctx) = 0;
  virtual void exitTableConstructor(Lua55GrammarParser::TableConstructorContext *ctx) = 0;

  virtual void enterFieldlist(Lua55GrammarParser::FieldlistContext *ctx) = 0;
  virtual void exitFieldlist(Lua55GrammarParser::FieldlistContext *ctx) = 0;

  virtual void enterField(Lua55GrammarParser::FieldContext *ctx) = 0;
  virtual void exitField(Lua55GrammarParser::FieldContext *ctx) = 0;

  virtual void enterExp(Lua55GrammarParser::ExpContext *ctx) = 0;
  virtual void exitExp(Lua55GrammarParser::ExpContext *ctx) = 0;

  virtual void enterOpExp(Lua55GrammarParser::OpExpContext *ctx) = 0;
  virtual void exitOpExp(Lua55GrammarParser::OpExpContext *ctx) = 0;

  virtual void enterOrExp(Lua55GrammarParser::OrExpContext *ctx) = 0;
  virtual void exitOrExp(Lua55GrammarParser::OrExpContext *ctx) = 0;

  virtual void enterAndExp(Lua55GrammarParser::AndExpContext *ctx) = 0;
  virtual void exitAndExp(Lua55GrammarParser::AndExpContext *ctx) = 0;

  virtual void enterCompExp(Lua55GrammarParser::CompExpContext *ctx) = 0;
  virtual void exitCompExp(Lua55GrammarParser::CompExpContext *ctx) = 0;

  virtual void enterBitorExp(Lua55GrammarParser::BitorExpContext *ctx) = 0;
  virtual void exitBitorExp(Lua55GrammarParser::BitorExpContext *ctx) = 0;

  virtual void enterBitxorExp(Lua55GrammarParser::BitxorExpContext *ctx) = 0;
  virtual void exitBitxorExp(Lua55GrammarParser::BitxorExpContext *ctx) = 0;

  virtual void enterBitandExp(Lua55GrammarParser::BitandExpContext *ctx) = 0;
  virtual void exitBitandExp(Lua55GrammarParser::BitandExpContext *ctx) = 0;

  virtual void enterShiftExp(Lua55GrammarParser::ShiftExpContext *ctx) = 0;
  virtual void exitShiftExp(Lua55GrammarParser::ShiftExpContext *ctx) = 0;

  virtual void enterConcatExp(Lua55GrammarParser::ConcatExpContext *ctx) = 0;
  virtual void exitConcatExp(Lua55GrammarParser::ConcatExpContext *ctx) = 0;

  virtual void enterPlusExp(Lua55GrammarParser::PlusExpContext *ctx) = 0;
  virtual void exitPlusExp(Lua55GrammarParser::PlusExpContext *ctx) = 0;

  virtual void enterMulExp(Lua55GrammarParser::MulExpContext *ctx) = 0;
  virtual void exitMulExp(Lua55GrammarParser::MulExpContext *ctx) = 0;

  virtual void enterUnaryExp(Lua55GrammarParser::UnaryExpContext *ctx) = 0;
  virtual void exitUnaryExp(Lua55GrammarParser::UnaryExpContext *ctx) = 0;

  virtual void enterPowExp(Lua55GrammarParser::PowExpContext *ctx) = 0;
  virtual void exitPowExp(Lua55GrammarParser::PowExpContext *ctx) = 0;

  virtual void enterOpStartExp(Lua55GrammarParser::OpStartExpContext *ctx) = 0;
  virtual void exitOpStartExp(Lua55GrammarParser::OpStartExpContext *ctx) = 0;

  virtual void enterLiteral(Lua55GrammarParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(Lua55GrammarParser::LiteralContext *ctx) = 0;

  virtual void enterPrefixexp(Lua55GrammarParser::PrefixexpContext *ctx) = 0;
  virtual void exitPrefixexp(Lua55GrammarParser::PrefixexpContext *ctx) = 0;

  virtual void enterFuncCall(Lua55GrammarParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(Lua55GrammarParser::FuncCallContext *ctx) = 0;

  virtual void enterFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext *ctx) = 0;
  virtual void exitFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext *ctx) = 0;

  virtual void enterArgs(Lua55GrammarParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(Lua55GrammarParser::ArgsContext *ctx) = 0;

  virtual void enterVar(Lua55GrammarParser::VarContext *ctx) = 0;
  virtual void exitVar(Lua55GrammarParser::VarContext *ctx) = 0;

  virtual void enterVar_tail(Lua55GrammarParser::Var_tailContext *ctx) = 0;
  virtual void exitVar_tail(Lua55GrammarParser::Var_tailContext *ctx) = 0;

  virtual void enterName(Lua55GrammarParser::NameContext *ctx) = 0;
  virtual void exitName(Lua55GrammarParser::NameContext *ctx) = 0;


};

