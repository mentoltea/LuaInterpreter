
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Lua55GrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, COMPOP = 22, SHIFTOP = 23, PLUSOP = 24, MULOP = 25, UNOP = 26, 
    DO = 27, END = 28, AND = 29, OR = 30, NOT = 31, IF = 32, ELSEIF = 33, 
    ELSE = 34, THEN = 35, WHILE = 36, REPEAT = 37, UNTIL = 38, FOR = 39, 
    IN = 40, BREAK = 41, GOTO = 42, RETURN = 43, FUNCTION = 44, NIL = 45, 
    TRUE = 46, FALSE = 47, LOCAL = 48, GLOBAL = 49, CONST = 50, NUMBER = 51, 
    STRING = 52, UNTERMINATED_STRING = 53, ID = 54, WS = 55, LINE_COMMENT = 56, 
    BLOCK_COMMENT = 57
  };

  enum {
    RuleProg = 0, RuleBlock = 1, RuleStatement = 2, RuleEmptyStatement = 3, 
    RuleDoBlockStatement = 4, RuleAssignmentStatement = 5, RuleVarlist = 6, 
    RuleExplist = 7, RuleDeclarationStatement = 8, RuleGlobalAttribStatement = 9, 
    RuleAttnamelist = 10, RuleAttrib = 11, RuleScopeSpec = 12, RuleFuncdefStatement = 13, 
    RuleFuncname = 14, RuleFuncbody = 15, RuleParamlist = 16, RuleVararg = 17, 
    RuleNamelist = 18, RuleWhileStatement = 19, RuleRepeatStatement = 20, 
    RuleIfStatement = 21, RuleNumericForStatement = 22, RuleGenericForStatement = 23, 
    RuleGotoStatement = 24, RuleLabelStatement = 25, RuleBreakStatement = 26, 
    RuleReturnStatement = 27, RuleFuncCallStatement = 28, RuleFuncAnon = 29, 
    RuleTableConstructor = 30, RuleFieldlist = 31, RuleField_sep = 32, RuleField = 33, 
    RuleExp = 34, RuleOpExp = 35, RuleOrExp = 36, RuleAndExp = 37, RuleCompExp = 38, 
    RuleBitorExp = 39, RuleBitxorExp = 40, RuleBitandExp = 41, RuleShiftExp = 42, 
    RuleConcatExp = 43, RulePlusExp = 44, RuleMulExp = 45, RuleUnaryExp = 46, 
    RulePowExp = 47, RuleOpStartExp = 48, RuleLiteral = 49, RulePrefixexp = 50, 
    RuleFuncCall = 51, RuleFuncCall_tail = 52, RuleArgs = 53, RuleVar = 54, 
    RuleVar_tail = 55, RuleName = 56, RuleAttributes_defined = 57
  };

  explicit Lua55GrammarParser(antlr4::TokenStream *input);

  Lua55GrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Lua55GrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class BlockContext;
  class StatementContext;
  class EmptyStatementContext;
  class DoBlockStatementContext;
  class AssignmentStatementContext;
  class VarlistContext;
  class ExplistContext;
  class DeclarationStatementContext;
  class GlobalAttribStatementContext;
  class AttnamelistContext;
  class AttribContext;
  class ScopeSpecContext;
  class FuncdefStatementContext;
  class FuncnameContext;
  class FuncbodyContext;
  class ParamlistContext;
  class VarargContext;
  class NamelistContext;
  class WhileStatementContext;
  class RepeatStatementContext;
  class IfStatementContext;
  class NumericForStatementContext;
  class GenericForStatementContext;
  class GotoStatementContext;
  class LabelStatementContext;
  class BreakStatementContext;
  class ReturnStatementContext;
  class FuncCallStatementContext;
  class FuncAnonContext;
  class TableConstructorContext;
  class FieldlistContext;
  class Field_sepContext;
  class FieldContext;
  class ExpContext;
  class OpExpContext;
  class OrExpContext;
  class AndExpContext;
  class CompExpContext;
  class BitorExpContext;
  class BitxorExpContext;
  class BitandExpContext;
  class ShiftExpContext;
  class ConcatExpContext;
  class PlusExpContext;
  class MulExpContext;
  class UnaryExpContext;
  class PowExpContext;
  class OpStartExpContext;
  class LiteralContext;
  class PrefixexpContext;
  class FuncCallContext;
  class FuncCall_tailContext;
  class ArgsContext;
  class VarContext;
  class Var_tailContext;
  class NameContext;
  class Attributes_definedContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgContext* prog();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    ReturnStatementContext *returnStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EmptyStatementContext *emptyStatement();
    DoBlockStatementContext *doBlockStatement();
    AssignmentStatementContext *assignmentStatement();
    DeclarationStatementContext *declarationStatement();
    GlobalAttribStatementContext *globalAttribStatement();
    FuncdefStatementContext *funcdefStatement();
    WhileStatementContext *whileStatement();
    RepeatStatementContext *repeatStatement();
    IfStatementContext *ifStatement();
    NumericForStatementContext *numericForStatement();
    GenericForStatementContext *genericForStatement();
    GotoStatementContext *gotoStatement();
    LabelStatementContext *labelStatement();
    BreakStatementContext *breakStatement();
    FuncCallStatementContext *funcCallStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  DoBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    DoBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoBlockStatementContext* doBlockStatement();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarlistContext *varlist();
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  VarlistContext : public antlr4::ParserRuleContext {
  public:
    VarlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarContext *> var();
    VarContext* var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarlistContext* varlist();

  class  ExplistContext : public antlr4::ParserRuleContext {
  public:
    ExplistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplistContext* explist();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeSpecContext *scopeSpec();
    AttnamelistContext *attnamelist();
    AttribContext *attrib();
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  GlobalAttribStatementContext : public antlr4::ParserRuleContext {
  public:
    GlobalAttribStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    AttribContext *attrib();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GlobalAttribStatementContext* globalAttribStatement();

  class  AttnamelistContext : public antlr4::ParserRuleContext {
  public:
    AttnamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<AttribContext *> attrib();
    AttribContext* attrib(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttnamelistContext* attnamelist();

  class  AttribContext : public antlr4::ParserRuleContext {
  public:
    AttribContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attributes_definedContext *attributes_defined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttribContext* attrib();

  class  ScopeSpecContext : public antlr4::ParserRuleContext {
  public:
    ScopeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScopeSpecContext* scopeSpec();

  class  FuncdefStatementContext : public antlr4::ParserRuleContext {
  public:
    FuncdefStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FuncnameContext *funcname();
    FuncbodyContext *funcbody();
    ScopeSpecContext *scopeSpec();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncdefStatementContext* funcdefStatement();

  class  FuncnameContext : public antlr4::ParserRuleContext {
  public:
    FuncnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncnameContext* funcname();

  class  FuncbodyContext : public antlr4::ParserRuleContext {
  public:
    FuncbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *END();
    ParamlistContext *paramlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncbodyContext* funcbody();

  class  ParamlistContext : public antlr4::ParserRuleContext {
  public:
    ParamlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamelistContext *namelist();
    VarargContext *vararg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamlistContext* paramlist();

  class  VarargContext : public antlr4::ParserRuleContext {
  public:
    VarargContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarargContext* vararg();

  class  NamelistContext : public antlr4::ParserRuleContext {
  public:
    NamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistContext* namelist();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpContext *exp();
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  RepeatStatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    BlockContext *block();
    antlr4::tree::TerminalNode *UNTIL();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RepeatStatementContext* repeatStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  NumericForStatementContext : public antlr4::ParserRuleContext {
  public:
    NumericForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    NameContext *name();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericForStatementContext* numericForStatement();

  class  GenericForStatementContext : public antlr4::ParserRuleContext {
  public:
    GenericForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    NamelistContext *namelist();
    antlr4::tree::TerminalNode *IN();
    ExplistContext *explist();
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericForStatementContext* genericForStatement();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  LabelStatementContext : public antlr4::ParserRuleContext {
  public:
    LabelStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelStatementContext* labelStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  FuncCallStatementContext : public antlr4::ParserRuleContext {
  public:
    FuncCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncCallContext *funcCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncCallStatementContext* funcCallStatement();

  class  FuncAnonContext : public antlr4::ParserRuleContext {
  public:
    FuncAnonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FuncbodyContext *funcbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncAnonContext* funcAnon();

  class  TableConstructorContext : public antlr4::ParserRuleContext {
  public:
    TableConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldlistContext *fieldlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableConstructorContext* tableConstructor();

  class  FieldlistContext : public antlr4::ParserRuleContext {
  public:
    FieldlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    std::vector<Field_sepContext *> field_sep();
    Field_sepContext* field_sep(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldlistContext* fieldlist();

  class  Field_sepContext : public antlr4::ParserRuleContext {
  public:
    Field_sepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_sepContext* field_sep();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldContext* field();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    FuncAnonContext *funcAnon();
    PrefixexpContext *prefixexp();
    TableConstructorContext *tableConstructor();
    OpExpContext *opExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpContext* exp();

  class  OpExpContext : public antlr4::ParserRuleContext {
  public:
    OpExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrExpContext *orExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpExpContext* opExp();

  class  OrExpContext : public antlr4::ParserRuleContext {
  public:
    OrExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExpContext *> andExp();
    AndExpContext* andExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrExpContext* orExp();

  class  AndExpContext : public antlr4::ParserRuleContext {
  public:
    AndExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompExpContext *> compExp();
    CompExpContext* compExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndExpContext* andExp();

  class  CompExpContext : public antlr4::ParserRuleContext {
  public:
    CompExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitorExpContext *> bitorExp();
    BitorExpContext* bitorExp(size_t i);
    antlr4::tree::TerminalNode *COMPOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompExpContext* compExp();

  class  BitorExpContext : public antlr4::ParserRuleContext {
  public:
    BitorExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitxorExpContext *> bitxorExp();
    BitxorExpContext* bitxorExp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitorExpContext* bitorExp();

  class  BitxorExpContext : public antlr4::ParserRuleContext {
  public:
    BitxorExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitandExpContext *> bitandExp();
    BitandExpContext* bitandExp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitxorExpContext* bitxorExp();

  class  BitandExpContext : public antlr4::ParserRuleContext {
  public:
    BitandExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpContext *> shiftExp();
    ShiftExpContext* shiftExp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitandExpContext* bitandExp();

  class  ShiftExpContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConcatExpContext *> concatExp();
    ConcatExpContext* concatExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHIFTOP();
    antlr4::tree::TerminalNode* SHIFTOP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftExpContext* shiftExp();

  class  ConcatExpContext : public antlr4::ParserRuleContext {
  public:
    ConcatExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PlusExpContext *> plusExp();
    PlusExpContext* plusExp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConcatExpContext* concatExp();

  class  PlusExpContext : public antlr4::ParserRuleContext {
  public:
    PlusExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulExpContext *> mulExp();
    MulExpContext* mulExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUSOP();
    antlr4::tree::TerminalNode* PLUSOP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PlusExpContext* plusExp();

  class  MulExpContext : public antlr4::ParserRuleContext {
  public:
    MulExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnaryExpContext *> unaryExp();
    UnaryExpContext* unaryExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULOP();
    antlr4::tree::TerminalNode* MULOP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MulExpContext* mulExp();

  class  UnaryExpContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PowExpContext *powExp();
    antlr4::tree::TerminalNode *UNOP();
    UnaryExpContext *unaryExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryExpContext* unaryExp();

  class  PowExpContext : public antlr4::ParserRuleContext {
  public:
    PowExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpStartExpContext *opStartExp();
    PowExpContext *powExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PowExpContext* powExp();

  class  OpStartExpContext : public antlr4::ParserRuleContext {
  public:
    OpStartExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixexpContext *prefixexp();
    LiteralContext *literal();
    TableConstructorContext *tableConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpStartExpContext* opStartExp();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NIL();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  PrefixexpContext : public antlr4::ParserRuleContext {
  public:
    PrefixexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();
    ExpContext *exp();
    FuncCallContext *funcCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixexpContext* prefixexp();

  class  FuncCallContext : public antlr4::ParserRuleContext {
  public:
    FuncCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();
    std::vector<FuncCall_tailContext *> funcCall_tail();
    FuncCall_tailContext* funcCall_tail(size_t i);
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncCallContext* funcCall();

  class  FuncCall_tailContext : public antlr4::ParserRuleContext {
  public:
    FuncCall_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgsContext *args();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncCall_tailContext* funcCall_tail();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsContext* args();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    std::vector<Var_tailContext *> var_tail();
    Var_tailContext* var_tail(size_t i);
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarContext* var();

  class  Var_tailContext : public antlr4::ParserRuleContext {
  public:
    Var_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Var_tailContext* var_tail();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  Attributes_definedContext : public antlr4::ParserRuleContext {
  public:
    Attributes_definedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attributes_definedContext* attributes_defined();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

