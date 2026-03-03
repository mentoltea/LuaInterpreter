
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Lua55GrammarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, FIELD_SEP = 22, COMPOP = 23, SHIFTOP = 24, PLUSOP = 25, 
    MULOP = 26, UNOP = 27, DO = 28, END = 29, AND = 30, OR = 31, NOT = 32, 
    IF = 33, ELSEIF = 34, ELSE = 35, THEN = 36, WHILE = 37, REPEAT = 38, 
    UNTIL = 39, FOR = 40, IN = 41, BREAK = 42, GOTO = 43, RETURN = 44, FUNCTION = 45, 
    NIL = 46, TRUE = 47, FALSE = 48, LOCAL = 49, GLOBAL = 50, CONST = 51, 
    NUMBER = 52, STRING = 53, UNTERMINATED_STRING = 54, ID = 55, WS = 56, 
    LINE_COMMENT = 57, BLOCK_COMMENT = 58
  };

  explicit Lua55GrammarLexer(antlr4::CharStream *input);

  ~Lua55GrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void UNTERMINATED_STRINGAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

};

