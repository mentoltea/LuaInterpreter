
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Lua55GrammarLexer : public antlr4::Lexer {
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

