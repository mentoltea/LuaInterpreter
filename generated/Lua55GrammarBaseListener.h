
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Lua55GrammarListener.h"


/**
 * This class provides an empty implementation of Lua55GrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Lua55GrammarBaseListener : public Lua55GrammarListener {
public:

  virtual void enterProg(Lua55GrammarParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(Lua55GrammarParser::ProgContext * /*ctx*/) override { }

  virtual void enterBlock(Lua55GrammarParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(Lua55GrammarParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(Lua55GrammarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(Lua55GrammarParser::StatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(Lua55GrammarParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(Lua55GrammarParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext * /*ctx*/) override { }
  virtual void exitDoBlockStatement(Lua55GrammarParser::DoBlockStatementContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(Lua55GrammarParser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterVarlist(Lua55GrammarParser::VarlistContext * /*ctx*/) override { }
  virtual void exitVarlist(Lua55GrammarParser::VarlistContext * /*ctx*/) override { }

  virtual void enterExplist(Lua55GrammarParser::ExplistContext * /*ctx*/) override { }
  virtual void exitExplist(Lua55GrammarParser::ExplistContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(Lua55GrammarParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext * /*ctx*/) override { }
  virtual void exitGlobalAttribStatement(Lua55GrammarParser::GlobalAttribStatementContext * /*ctx*/) override { }

  virtual void enterAttnamelist(Lua55GrammarParser::AttnamelistContext * /*ctx*/) override { }
  virtual void exitAttnamelist(Lua55GrammarParser::AttnamelistContext * /*ctx*/) override { }

  virtual void enterNameattr(Lua55GrammarParser::NameattrContext * /*ctx*/) override { }
  virtual void exitNameattr(Lua55GrammarParser::NameattrContext * /*ctx*/) override { }

  virtual void enterAttrib(Lua55GrammarParser::AttribContext * /*ctx*/) override { }
  virtual void exitAttrib(Lua55GrammarParser::AttribContext * /*ctx*/) override { }

  virtual void enterScopeSpec(Lua55GrammarParser::ScopeSpecContext * /*ctx*/) override { }
  virtual void exitScopeSpec(Lua55GrammarParser::ScopeSpecContext * /*ctx*/) override { }

  virtual void enterFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext * /*ctx*/) override { }
  virtual void exitFuncdefStatement(Lua55GrammarParser::FuncdefStatementContext * /*ctx*/) override { }

  virtual void enterFuncname(Lua55GrammarParser::FuncnameContext * /*ctx*/) override { }
  virtual void exitFuncname(Lua55GrammarParser::FuncnameContext * /*ctx*/) override { }

  virtual void enterFuncbody(Lua55GrammarParser::FuncbodyContext * /*ctx*/) override { }
  virtual void exitFuncbody(Lua55GrammarParser::FuncbodyContext * /*ctx*/) override { }

  virtual void enterParamlist(Lua55GrammarParser::ParamlistContext * /*ctx*/) override { }
  virtual void exitParamlist(Lua55GrammarParser::ParamlistContext * /*ctx*/) override { }

  virtual void enterVararg(Lua55GrammarParser::VarargContext * /*ctx*/) override { }
  virtual void exitVararg(Lua55GrammarParser::VarargContext * /*ctx*/) override { }

  virtual void enterNamelist(Lua55GrammarParser::NamelistContext * /*ctx*/) override { }
  virtual void exitNamelist(Lua55GrammarParser::NamelistContext * /*ctx*/) override { }

  virtual void enterWhileStatement(Lua55GrammarParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(Lua55GrammarParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterRepeatStatement(Lua55GrammarParser::RepeatStatementContext * /*ctx*/) override { }
  virtual void exitRepeatStatement(Lua55GrammarParser::RepeatStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(Lua55GrammarParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(Lua55GrammarParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterNumericForStatement(Lua55GrammarParser::NumericForStatementContext * /*ctx*/) override { }
  virtual void exitNumericForStatement(Lua55GrammarParser::NumericForStatementContext * /*ctx*/) override { }

  virtual void enterGenericForStatement(Lua55GrammarParser::GenericForStatementContext * /*ctx*/) override { }
  virtual void exitGenericForStatement(Lua55GrammarParser::GenericForStatementContext * /*ctx*/) override { }

  virtual void enterGotoStatement(Lua55GrammarParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(Lua55GrammarParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterLabelStatement(Lua55GrammarParser::LabelStatementContext * /*ctx*/) override { }
  virtual void exitLabelStatement(Lua55GrammarParser::LabelStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(Lua55GrammarParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(Lua55GrammarParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(Lua55GrammarParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(Lua55GrammarParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext * /*ctx*/) override { }
  virtual void exitFuncCallStatement(Lua55GrammarParser::FuncCallStatementContext * /*ctx*/) override { }

  virtual void enterFuncAnon(Lua55GrammarParser::FuncAnonContext * /*ctx*/) override { }
  virtual void exitFuncAnon(Lua55GrammarParser::FuncAnonContext * /*ctx*/) override { }

  virtual void enterTableConstructor(Lua55GrammarParser::TableConstructorContext * /*ctx*/) override { }
  virtual void exitTableConstructor(Lua55GrammarParser::TableConstructorContext * /*ctx*/) override { }

  virtual void enterFieldlist(Lua55GrammarParser::FieldlistContext * /*ctx*/) override { }
  virtual void exitFieldlist(Lua55GrammarParser::FieldlistContext * /*ctx*/) override { }

  virtual void enterField(Lua55GrammarParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(Lua55GrammarParser::FieldContext * /*ctx*/) override { }

  virtual void enterExp(Lua55GrammarParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(Lua55GrammarParser::ExpContext * /*ctx*/) override { }

  virtual void enterOpExp(Lua55GrammarParser::OpExpContext * /*ctx*/) override { }
  virtual void exitOpExp(Lua55GrammarParser::OpExpContext * /*ctx*/) override { }

  virtual void enterOrExp(Lua55GrammarParser::OrExpContext * /*ctx*/) override { }
  virtual void exitOrExp(Lua55GrammarParser::OrExpContext * /*ctx*/) override { }

  virtual void enterAndExp(Lua55GrammarParser::AndExpContext * /*ctx*/) override { }
  virtual void exitAndExp(Lua55GrammarParser::AndExpContext * /*ctx*/) override { }

  virtual void enterCompExp(Lua55GrammarParser::CompExpContext * /*ctx*/) override { }
  virtual void exitCompExp(Lua55GrammarParser::CompExpContext * /*ctx*/) override { }

  virtual void enterBitorExp(Lua55GrammarParser::BitorExpContext * /*ctx*/) override { }
  virtual void exitBitorExp(Lua55GrammarParser::BitorExpContext * /*ctx*/) override { }

  virtual void enterBitxorExp(Lua55GrammarParser::BitxorExpContext * /*ctx*/) override { }
  virtual void exitBitxorExp(Lua55GrammarParser::BitxorExpContext * /*ctx*/) override { }

  virtual void enterBitandExp(Lua55GrammarParser::BitandExpContext * /*ctx*/) override { }
  virtual void exitBitandExp(Lua55GrammarParser::BitandExpContext * /*ctx*/) override { }

  virtual void enterShiftExp(Lua55GrammarParser::ShiftExpContext * /*ctx*/) override { }
  virtual void exitShiftExp(Lua55GrammarParser::ShiftExpContext * /*ctx*/) override { }

  virtual void enterConcatExp(Lua55GrammarParser::ConcatExpContext * /*ctx*/) override { }
  virtual void exitConcatExp(Lua55GrammarParser::ConcatExpContext * /*ctx*/) override { }

  virtual void enterPlusExp(Lua55GrammarParser::PlusExpContext * /*ctx*/) override { }
  virtual void exitPlusExp(Lua55GrammarParser::PlusExpContext * /*ctx*/) override { }

  virtual void enterMulExp(Lua55GrammarParser::MulExpContext * /*ctx*/) override { }
  virtual void exitMulExp(Lua55GrammarParser::MulExpContext * /*ctx*/) override { }

  virtual void enterUnaryExp(Lua55GrammarParser::UnaryExpContext * /*ctx*/) override { }
  virtual void exitUnaryExp(Lua55GrammarParser::UnaryExpContext * /*ctx*/) override { }

  virtual void enterPowExp(Lua55GrammarParser::PowExpContext * /*ctx*/) override { }
  virtual void exitPowExp(Lua55GrammarParser::PowExpContext * /*ctx*/) override { }

  virtual void enterOpStartExp(Lua55GrammarParser::OpStartExpContext * /*ctx*/) override { }
  virtual void exitOpStartExp(Lua55GrammarParser::OpStartExpContext * /*ctx*/) override { }

  virtual void enterLiteral(Lua55GrammarParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(Lua55GrammarParser::LiteralContext * /*ctx*/) override { }

  virtual void enterPrefixexp(Lua55GrammarParser::PrefixexpContext * /*ctx*/) override { }
  virtual void exitPrefixexp(Lua55GrammarParser::PrefixexpContext * /*ctx*/) override { }

  virtual void enterFuncCall(Lua55GrammarParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(Lua55GrammarParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * /*ctx*/) override { }
  virtual void exitFuncCall_tail(Lua55GrammarParser::FuncCall_tailContext * /*ctx*/) override { }

  virtual void enterArgs(Lua55GrammarParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(Lua55GrammarParser::ArgsContext * /*ctx*/) override { }

  virtual void enterVar(Lua55GrammarParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(Lua55GrammarParser::VarContext * /*ctx*/) override { }

  virtual void enterVar_tail(Lua55GrammarParser::Var_tailContext * /*ctx*/) override { }
  virtual void exitVar_tail(Lua55GrammarParser::Var_tailContext * /*ctx*/) override { }

  virtual void enterName(Lua55GrammarParser::NameContext * /*ctx*/) override { }
  virtual void exitName(Lua55GrammarParser::NameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

