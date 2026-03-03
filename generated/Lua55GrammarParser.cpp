
// Generated from C:/Users/s7k/Desktop/LuaProject/Lua55Grammar.g4 by ANTLR 4.13.2


#include "Lua55GrammarListener.h"

#include "Lua55GrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Lua55GrammarParserStaticData final {
  Lua55GrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Lua55GrammarParserStaticData(const Lua55GrammarParserStaticData&) = delete;
  Lua55GrammarParserStaticData(Lua55GrammarParserStaticData&&) = delete;
  Lua55GrammarParserStaticData& operator=(const Lua55GrammarParserStaticData&) = delete;
  Lua55GrammarParserStaticData& operator=(Lua55GrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lua55grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Lua55GrammarParserStaticData> lua55grammarParserStaticData = nullptr;

void lua55grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (lua55grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(lua55grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Lua55GrammarParserStaticData>(
    std::vector<std::string>{
      "prog", "block", "statement", "emptyStatement", "doBlockStatement", 
      "assignmentStatement", "varlist", "explist", "declarationStatement", 
      "globalAttribStatement", "attnamelist", "nameattr", "attrib", "scopeSpec", 
      "funcdefStatement", "funcname", "funcbody", "paramlist", "vararg", 
      "namelist", "whileStatement", "repeatStatement", "ifStatement", "numericForStatement", 
      "genericForStatement", "gotoStatement", "labelStatement", "breakStatement", 
      "returnStatement", "funcCallStatement", "funcAnon", "tableConstructor", 
      "fieldlist", "field", "exp", "opExp", "orExp", "andExp", "compExp", 
      "bitorExp", "bitxorExp", "bitandExp", "shiftExp", "concatExp", "plusExp", 
      "mulExp", "unaryExp", "powExp", "opStartExp", "literal", "prefixexp", 
      "funcCall", "funcCall_tail", "args", "var", "var_tail", "name"
    },
    std::vector<std::string>{
      "", "';'", "'='", "','", "'*'", "'<'", "'>'", "'.'", "':'", "'('", 
      "')'", "'...'", "'::'", "'{'", "'}'", "'['", "']'", "'|'", "'~'", 
      "'&'", "'..'", "'^'", "", "", "", "", "", "", "", "'do'", "'end'", 
      "'and'", "'or'", "'not'", "'if'", "'elseif'", "'else'", "'then'", 
      "'while'", "'repeat'", "'until'", "'for'", "'in'", "'break'", "'goto'", 
      "'return'", "'function'", "'nil'", "'true'", "'false'", "'local'", 
      "'global'", "'const'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "FIELD_SEP", "COMPOP", "SHIFTOP", "PLUSOP", "MULOP", 
      "UNOP", "ATTRIBUTES_DEFINED", "DO", "END", "AND", "OR", "NOT", "IF", 
      "ELSEIF", "ELSE", "THEN", "WHILE", "REPEAT", "UNTIL", "FOR", "IN", 
      "BREAK", "GOTO", "RETURN", "FUNCTION", "NIL", "TRUE", "FALSE", "LOCAL", 
      "GLOBAL", "CONST", "NUMBER", "STRING", "UNTERMINATED_STRING", "ID", 
      "WS", "LINE_COMMENT", "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,59,528,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,1,0,1,0,1,0,1,1,1,1,3,1,120,8,1,5,1,122,8,1,10,1,12,1,125,9,1,1,1,
  	1,1,3,1,129,8,1,3,1,131,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,148,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,
  	1,6,1,6,1,6,5,6,163,8,6,10,6,12,6,166,9,6,1,7,1,7,1,7,5,7,171,8,7,10,
  	7,12,7,174,9,7,1,8,1,8,3,8,178,8,8,1,8,1,8,1,8,3,8,183,8,8,1,9,1,9,1,
  	9,1,9,1,10,1,10,1,10,5,10,192,8,10,10,10,12,10,195,9,10,1,11,1,11,3,11,
  	199,8,11,1,12,1,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,3,14,216,8,14,1,15,1,15,1,15,5,15,221,8,15,10,15,12,15,
  	224,9,15,1,15,1,15,3,15,228,8,15,1,16,1,16,3,16,232,8,16,1,16,1,16,1,
  	16,1,16,1,17,1,17,1,17,3,17,241,8,17,1,17,3,17,244,8,17,1,18,1,18,3,18,
  	248,8,18,1,19,1,19,1,19,5,19,253,8,19,10,19,12,19,256,9,19,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,5,22,278,8,22,10,22,12,22,281,9,22,1,22,1,22,3,22,
  	285,8,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,297,8,
  	23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,
  	25,1,25,1,26,1,26,1,26,1,26,1,27,1,27,1,28,1,28,3,28,322,8,28,1,29,1,
  	29,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,3,31,335,8,31,1,32,1,
  	32,1,32,5,32,340,8,32,10,32,12,32,343,9,32,1,32,3,32,346,8,32,1,33,1,
  	33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,3,33,359,8,33,1,34,1,
  	34,1,34,1,34,1,34,3,34,366,8,34,1,35,1,35,1,36,1,36,1,36,5,36,373,8,36,
  	10,36,12,36,376,9,36,1,37,1,37,1,37,5,37,381,8,37,10,37,12,37,384,9,37,
  	1,38,1,38,1,38,3,38,389,8,38,1,39,1,39,1,39,5,39,394,8,39,10,39,12,39,
  	397,9,39,1,40,1,40,1,40,5,40,402,8,40,10,40,12,40,405,9,40,1,41,1,41,
  	1,41,5,41,410,8,41,10,41,12,41,413,9,41,1,42,1,42,1,42,5,42,418,8,42,
  	10,42,12,42,421,9,42,1,43,1,43,1,43,5,43,426,8,43,10,43,12,43,429,9,43,
  	1,44,1,44,1,44,5,44,434,8,44,10,44,12,44,437,9,44,1,45,1,45,1,45,5,45,
  	442,8,45,10,45,12,45,445,9,45,1,46,1,46,1,46,3,46,450,8,46,1,47,1,47,
  	1,47,3,47,455,8,47,1,48,1,48,1,48,3,48,460,8,48,1,49,1,49,1,50,1,50,1,
  	50,1,50,1,50,1,50,3,50,470,8,50,1,51,1,51,4,51,474,8,51,11,51,12,51,475,
  	1,51,1,51,1,51,1,51,4,51,482,8,51,11,51,12,51,483,3,51,486,8,51,1,52,
  	1,52,1,52,1,52,1,52,3,52,493,8,52,1,53,1,53,3,53,497,8,53,1,53,1,53,1,
  	54,1,54,5,54,503,8,54,10,54,12,54,506,9,54,1,54,1,54,1,54,1,54,4,54,512,
  	8,54,11,54,12,54,513,3,54,516,8,54,1,55,1,55,1,55,1,55,1,55,1,55,3,55,
  	524,8,55,1,56,1,56,1,56,0,0,57,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,
  	76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,0,2,1,
  	0,50,51,2,0,47,49,53,54,540,0,114,1,0,0,0,2,123,1,0,0,0,4,147,1,0,0,0,
  	6,149,1,0,0,0,8,151,1,0,0,0,10,155,1,0,0,0,12,159,1,0,0,0,14,167,1,0,
  	0,0,16,175,1,0,0,0,18,184,1,0,0,0,20,188,1,0,0,0,22,196,1,0,0,0,24,200,
  	1,0,0,0,26,204,1,0,0,0,28,215,1,0,0,0,30,217,1,0,0,0,32,229,1,0,0,0,34,
  	243,1,0,0,0,36,245,1,0,0,0,38,249,1,0,0,0,40,257,1,0,0,0,42,263,1,0,0,
  	0,44,268,1,0,0,0,46,288,1,0,0,0,48,302,1,0,0,0,50,310,1,0,0,0,52,313,
  	1,0,0,0,54,317,1,0,0,0,56,319,1,0,0,0,58,323,1,0,0,0,60,325,1,0,0,0,62,
  	334,1,0,0,0,64,336,1,0,0,0,66,358,1,0,0,0,68,365,1,0,0,0,70,367,1,0,0,
  	0,72,369,1,0,0,0,74,377,1,0,0,0,76,385,1,0,0,0,78,390,1,0,0,0,80,398,
  	1,0,0,0,82,406,1,0,0,0,84,414,1,0,0,0,86,422,1,0,0,0,88,430,1,0,0,0,90,
  	438,1,0,0,0,92,449,1,0,0,0,94,451,1,0,0,0,96,459,1,0,0,0,98,461,1,0,0,
  	0,100,469,1,0,0,0,102,485,1,0,0,0,104,492,1,0,0,0,106,494,1,0,0,0,108,
  	515,1,0,0,0,110,523,1,0,0,0,112,525,1,0,0,0,114,115,3,2,1,0,115,116,5,
  	0,0,1,116,1,1,0,0,0,117,119,3,4,2,0,118,120,5,1,0,0,119,118,1,0,0,0,119,
  	120,1,0,0,0,120,122,1,0,0,0,121,117,1,0,0,0,122,125,1,0,0,0,123,121,1,
  	0,0,0,123,124,1,0,0,0,124,130,1,0,0,0,125,123,1,0,0,0,126,128,3,56,28,
  	0,127,129,5,1,0,0,128,127,1,0,0,0,128,129,1,0,0,0,129,131,1,0,0,0,130,
  	126,1,0,0,0,130,131,1,0,0,0,131,3,1,0,0,0,132,148,3,6,3,0,133,148,3,8,
  	4,0,134,148,3,10,5,0,135,148,3,16,8,0,136,148,3,18,9,0,137,148,3,28,14,
  	0,138,148,3,40,20,0,139,148,3,42,21,0,140,148,3,44,22,0,141,148,3,46,
  	23,0,142,148,3,48,24,0,143,148,3,50,25,0,144,148,3,52,26,0,145,148,3,
  	54,27,0,146,148,3,58,29,0,147,132,1,0,0,0,147,133,1,0,0,0,147,134,1,0,
  	0,0,147,135,1,0,0,0,147,136,1,0,0,0,147,137,1,0,0,0,147,138,1,0,0,0,147,
  	139,1,0,0,0,147,140,1,0,0,0,147,141,1,0,0,0,147,142,1,0,0,0,147,143,1,
  	0,0,0,147,144,1,0,0,0,147,145,1,0,0,0,147,146,1,0,0,0,148,5,1,0,0,0,149,
  	150,5,1,0,0,150,7,1,0,0,0,151,152,5,29,0,0,152,153,3,2,1,0,153,154,5,
  	30,0,0,154,9,1,0,0,0,155,156,3,12,6,0,156,157,5,2,0,0,157,158,3,14,7,
  	0,158,11,1,0,0,0,159,164,3,108,54,0,160,161,5,3,0,0,161,163,3,108,54,
  	0,162,160,1,0,0,0,163,166,1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,
  	13,1,0,0,0,166,164,1,0,0,0,167,172,3,68,34,0,168,169,5,3,0,0,169,171,
  	3,68,34,0,170,168,1,0,0,0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,0,
  	0,0,173,15,1,0,0,0,174,172,1,0,0,0,175,177,3,26,13,0,176,178,3,24,12,
  	0,177,176,1,0,0,0,177,178,1,0,0,0,178,179,1,0,0,0,179,182,3,20,10,0,180,
  	181,5,2,0,0,181,183,3,14,7,0,182,180,1,0,0,0,182,183,1,0,0,0,183,17,1,
  	0,0,0,184,185,5,51,0,0,185,186,3,24,12,0,186,187,5,4,0,0,187,19,1,0,0,
  	0,188,193,3,22,11,0,189,190,5,3,0,0,190,192,3,22,11,0,191,189,1,0,0,0,
  	192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,21,1,0,0,0,195,193,
  	1,0,0,0,196,198,3,112,56,0,197,199,3,24,12,0,198,197,1,0,0,0,198,199,
  	1,0,0,0,199,23,1,0,0,0,200,201,5,5,0,0,201,202,5,28,0,0,202,203,5,6,0,
  	0,203,25,1,0,0,0,204,205,7,0,0,0,205,27,1,0,0,0,206,207,5,46,0,0,207,
  	208,3,30,15,0,208,209,3,32,16,0,209,216,1,0,0,0,210,211,3,26,13,0,211,
  	212,5,46,0,0,212,213,3,112,56,0,213,214,3,32,16,0,214,216,1,0,0,0,215,
  	206,1,0,0,0,215,210,1,0,0,0,216,29,1,0,0,0,217,222,3,112,56,0,218,219,
  	5,7,0,0,219,221,3,112,56,0,220,218,1,0,0,0,221,224,1,0,0,0,222,220,1,
  	0,0,0,222,223,1,0,0,0,223,227,1,0,0,0,224,222,1,0,0,0,225,226,5,8,0,0,
  	226,228,3,112,56,0,227,225,1,0,0,0,227,228,1,0,0,0,228,31,1,0,0,0,229,
  	231,5,9,0,0,230,232,3,34,17,0,231,230,1,0,0,0,231,232,1,0,0,0,232,233,
  	1,0,0,0,233,234,5,10,0,0,234,235,3,2,1,0,235,236,5,30,0,0,236,33,1,0,
  	0,0,237,240,3,38,19,0,238,239,5,3,0,0,239,241,3,36,18,0,240,238,1,0,0,
  	0,240,241,1,0,0,0,241,244,1,0,0,0,242,244,3,36,18,0,243,237,1,0,0,0,243,
  	242,1,0,0,0,244,35,1,0,0,0,245,247,5,11,0,0,246,248,3,112,56,0,247,246,
  	1,0,0,0,247,248,1,0,0,0,248,37,1,0,0,0,249,254,3,112,56,0,250,251,5,3,
  	0,0,251,253,3,112,56,0,252,250,1,0,0,0,253,256,1,0,0,0,254,252,1,0,0,
  	0,254,255,1,0,0,0,255,39,1,0,0,0,256,254,1,0,0,0,257,258,5,38,0,0,258,
  	259,3,68,34,0,259,260,5,29,0,0,260,261,3,2,1,0,261,262,5,30,0,0,262,41,
  	1,0,0,0,263,264,5,39,0,0,264,265,3,2,1,0,265,266,5,40,0,0,266,267,3,68,
  	34,0,267,43,1,0,0,0,268,269,5,34,0,0,269,270,3,68,34,0,270,271,5,37,0,
  	0,271,279,3,2,1,0,272,273,5,35,0,0,273,274,3,68,34,0,274,275,5,37,0,0,
  	275,276,3,2,1,0,276,278,1,0,0,0,277,272,1,0,0,0,278,281,1,0,0,0,279,277,
  	1,0,0,0,279,280,1,0,0,0,280,284,1,0,0,0,281,279,1,0,0,0,282,283,5,36,
  	0,0,283,285,3,2,1,0,284,282,1,0,0,0,284,285,1,0,0,0,285,286,1,0,0,0,286,
  	287,5,30,0,0,287,45,1,0,0,0,288,289,5,41,0,0,289,290,3,112,56,0,290,291,
  	5,2,0,0,291,292,3,68,34,0,292,293,5,3,0,0,293,296,3,68,34,0,294,295,5,
  	3,0,0,295,297,3,68,34,0,296,294,1,0,0,0,296,297,1,0,0,0,297,298,1,0,0,
  	0,298,299,5,29,0,0,299,300,3,2,1,0,300,301,5,30,0,0,301,47,1,0,0,0,302,
  	303,5,41,0,0,303,304,3,38,19,0,304,305,5,42,0,0,305,306,3,14,7,0,306,
  	307,5,29,0,0,307,308,3,2,1,0,308,309,5,30,0,0,309,49,1,0,0,0,310,311,
  	5,44,0,0,311,312,3,112,56,0,312,51,1,0,0,0,313,314,5,12,0,0,314,315,3,
  	112,56,0,315,316,5,12,0,0,316,53,1,0,0,0,317,318,5,43,0,0,318,55,1,0,
  	0,0,319,321,5,45,0,0,320,322,3,14,7,0,321,320,1,0,0,0,321,322,1,0,0,0,
  	322,57,1,0,0,0,323,324,3,102,51,0,324,59,1,0,0,0,325,326,5,46,0,0,326,
  	327,3,32,16,0,327,61,1,0,0,0,328,329,5,13,0,0,329,330,3,64,32,0,330,331,
  	5,14,0,0,331,335,1,0,0,0,332,333,5,13,0,0,333,335,5,14,0,0,334,328,1,
  	0,0,0,334,332,1,0,0,0,335,63,1,0,0,0,336,341,3,66,33,0,337,338,5,22,0,
  	0,338,340,3,66,33,0,339,337,1,0,0,0,340,343,1,0,0,0,341,339,1,0,0,0,341,
  	342,1,0,0,0,342,345,1,0,0,0,343,341,1,0,0,0,344,346,5,22,0,0,345,344,
  	1,0,0,0,345,346,1,0,0,0,346,65,1,0,0,0,347,348,5,15,0,0,348,349,3,68,
  	34,0,349,350,5,16,0,0,350,351,5,2,0,0,351,352,3,68,34,0,352,359,1,0,0,
  	0,353,354,3,112,56,0,354,355,5,2,0,0,355,356,3,68,34,0,356,359,1,0,0,
  	0,357,359,3,68,34,0,358,347,1,0,0,0,358,353,1,0,0,0,358,357,1,0,0,0,359,
  	67,1,0,0,0,360,366,3,98,49,0,361,366,3,60,30,0,362,366,3,100,50,0,363,
  	366,3,62,31,0,364,366,3,70,35,0,365,360,1,0,0,0,365,361,1,0,0,0,365,362,
  	1,0,0,0,365,363,1,0,0,0,365,364,1,0,0,0,366,69,1,0,0,0,367,368,3,72,36,
  	0,368,71,1,0,0,0,369,374,3,74,37,0,370,371,5,32,0,0,371,373,3,74,37,0,
  	372,370,1,0,0,0,373,376,1,0,0,0,374,372,1,0,0,0,374,375,1,0,0,0,375,73,
  	1,0,0,0,376,374,1,0,0,0,377,382,3,76,38,0,378,379,5,31,0,0,379,381,3,
  	76,38,0,380,378,1,0,0,0,381,384,1,0,0,0,382,380,1,0,0,0,382,383,1,0,0,
  	0,383,75,1,0,0,0,384,382,1,0,0,0,385,388,3,78,39,0,386,387,5,23,0,0,387,
  	389,3,78,39,0,388,386,1,0,0,0,388,389,1,0,0,0,389,77,1,0,0,0,390,395,
  	3,80,40,0,391,392,5,17,0,0,392,394,3,80,40,0,393,391,1,0,0,0,394,397,
  	1,0,0,0,395,393,1,0,0,0,395,396,1,0,0,0,396,79,1,0,0,0,397,395,1,0,0,
  	0,398,403,3,82,41,0,399,400,5,18,0,0,400,402,3,82,41,0,401,399,1,0,0,
  	0,402,405,1,0,0,0,403,401,1,0,0,0,403,404,1,0,0,0,404,81,1,0,0,0,405,
  	403,1,0,0,0,406,411,3,84,42,0,407,408,5,19,0,0,408,410,3,84,42,0,409,
  	407,1,0,0,0,410,413,1,0,0,0,411,409,1,0,0,0,411,412,1,0,0,0,412,83,1,
  	0,0,0,413,411,1,0,0,0,414,419,3,86,43,0,415,416,5,24,0,0,416,418,3,86,
  	43,0,417,415,1,0,0,0,418,421,1,0,0,0,419,417,1,0,0,0,419,420,1,0,0,0,
  	420,85,1,0,0,0,421,419,1,0,0,0,422,427,3,88,44,0,423,424,5,20,0,0,424,
  	426,3,88,44,0,425,423,1,0,0,0,426,429,1,0,0,0,427,425,1,0,0,0,427,428,
  	1,0,0,0,428,87,1,0,0,0,429,427,1,0,0,0,430,435,3,90,45,0,431,432,5,25,
  	0,0,432,434,3,90,45,0,433,431,1,0,0,0,434,437,1,0,0,0,435,433,1,0,0,0,
  	435,436,1,0,0,0,436,89,1,0,0,0,437,435,1,0,0,0,438,443,3,92,46,0,439,
  	440,5,26,0,0,440,442,3,92,46,0,441,439,1,0,0,0,442,445,1,0,0,0,443,441,
  	1,0,0,0,443,444,1,0,0,0,444,91,1,0,0,0,445,443,1,0,0,0,446,450,3,94,47,
  	0,447,448,5,27,0,0,448,450,3,92,46,0,449,446,1,0,0,0,449,447,1,0,0,0,
  	450,93,1,0,0,0,451,454,3,96,48,0,452,453,5,21,0,0,453,455,3,94,47,0,454,
  	452,1,0,0,0,454,455,1,0,0,0,455,95,1,0,0,0,456,460,3,100,50,0,457,460,
  	3,98,49,0,458,460,3,62,31,0,459,456,1,0,0,0,459,457,1,0,0,0,459,458,1,
  	0,0,0,460,97,1,0,0,0,461,462,7,1,0,0,462,99,1,0,0,0,463,470,3,108,54,
  	0,464,465,5,9,0,0,465,466,3,68,34,0,466,467,5,10,0,0,467,470,1,0,0,0,
  	468,470,3,102,51,0,469,463,1,0,0,0,469,464,1,0,0,0,469,468,1,0,0,0,470,
  	101,1,0,0,0,471,473,3,108,54,0,472,474,3,104,52,0,473,472,1,0,0,0,474,
  	475,1,0,0,0,475,473,1,0,0,0,475,476,1,0,0,0,476,486,1,0,0,0,477,478,5,
  	9,0,0,478,479,3,68,34,0,479,481,5,10,0,0,480,482,3,104,52,0,481,480,1,
  	0,0,0,482,483,1,0,0,0,483,481,1,0,0,0,483,484,1,0,0,0,484,486,1,0,0,0,
  	485,471,1,0,0,0,485,477,1,0,0,0,486,103,1,0,0,0,487,493,3,106,53,0,488,
  	489,5,8,0,0,489,490,3,112,56,0,490,491,3,106,53,0,491,493,1,0,0,0,492,
  	487,1,0,0,0,492,488,1,0,0,0,493,105,1,0,0,0,494,496,5,9,0,0,495,497,3,
  	14,7,0,496,495,1,0,0,0,496,497,1,0,0,0,497,498,1,0,0,0,498,499,5,10,0,
  	0,499,107,1,0,0,0,500,504,3,112,56,0,501,503,3,110,55,0,502,501,1,0,0,
  	0,503,506,1,0,0,0,504,502,1,0,0,0,504,505,1,0,0,0,505,516,1,0,0,0,506,
  	504,1,0,0,0,507,508,5,9,0,0,508,509,3,68,34,0,509,511,5,10,0,0,510,512,
  	3,110,55,0,511,510,1,0,0,0,512,513,1,0,0,0,513,511,1,0,0,0,513,514,1,
  	0,0,0,514,516,1,0,0,0,515,500,1,0,0,0,515,507,1,0,0,0,516,109,1,0,0,0,
  	517,518,5,15,0,0,518,519,3,68,34,0,519,520,5,16,0,0,520,524,1,0,0,0,521,
  	522,5,7,0,0,522,524,3,112,56,0,523,517,1,0,0,0,523,521,1,0,0,0,524,111,
  	1,0,0,0,525,526,5,56,0,0,526,113,1,0,0,0,51,119,123,128,130,147,164,172,
  	177,182,193,198,215,222,227,231,240,243,247,254,279,284,296,321,334,341,
  	345,358,365,374,382,388,395,403,411,419,427,435,443,449,454,459,469,475,
  	483,485,492,496,504,513,515,523
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lua55grammarParserStaticData = std::move(staticData);
}

}

Lua55GrammarParser::Lua55GrammarParser(TokenStream *input) : Lua55GrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

Lua55GrammarParser::Lua55GrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  Lua55GrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lua55grammarParserStaticData->atn, lua55grammarParserStaticData->decisionToDFA, lua55grammarParserStaticData->sharedContextCache, options);
}

Lua55GrammarParser::~Lua55GrammarParser() {
  delete _interpreter;
}

const atn::ATN& Lua55GrammarParser::getATN() const {
  return *lua55grammarParserStaticData->atn;
}

std::string Lua55GrammarParser::getGrammarFileName() const {
  return "Lua55Grammar.g4";
}

const std::vector<std::string>& Lua55GrammarParser::getRuleNames() const {
  return lua55grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& Lua55GrammarParser::getVocabulary() const {
  return lua55grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Lua55GrammarParser::getSerializedATN() const {
  return lua55grammarParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

Lua55GrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::ProgContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::ProgContext::EOF() {
  return getToken(Lua55GrammarParser::EOF, 0);
}


size_t Lua55GrammarParser::ProgContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleProg;
}

void Lua55GrammarParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void Lua55GrammarParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

Lua55GrammarParser::ProgContext* Lua55GrammarParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, Lua55GrammarParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    block();
    setState(115);
    match(Lua55GrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Lua55GrammarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::StatementContext *> Lua55GrammarParser::BlockContext::statement() {
  return getRuleContexts<Lua55GrammarParser::StatementContext>();
}

Lua55GrammarParser::StatementContext* Lua55GrammarParser::BlockContext::statement(size_t i) {
  return getRuleContext<Lua55GrammarParser::StatementContext>(i);
}

Lua55GrammarParser::ReturnStatementContext* Lua55GrammarParser::BlockContext::returnStatement() {
  return getRuleContext<Lua55GrammarParser::ReturnStatementContext>(0);
}


size_t Lua55GrammarParser::BlockContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBlock;
}

void Lua55GrammarParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void Lua55GrammarParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, Lua55GrammarParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75535092155421186) != 0)) {
      setState(117);
      statement();
      setState(119);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(118);
        match(Lua55GrammarParser::T__0);
        break;
      }

      default:
        break;
      }
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::RETURN) {
      setState(126);
      returnStatement();
      setState(128);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Lua55GrammarParser::T__0) {
        setState(127);
        match(Lua55GrammarParser::T__0);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Lua55GrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::EmptyStatementContext* Lua55GrammarParser::StatementContext::emptyStatement() {
  return getRuleContext<Lua55GrammarParser::EmptyStatementContext>(0);
}

Lua55GrammarParser::DoBlockStatementContext* Lua55GrammarParser::StatementContext::doBlockStatement() {
  return getRuleContext<Lua55GrammarParser::DoBlockStatementContext>(0);
}

Lua55GrammarParser::AssignmentStatementContext* Lua55GrammarParser::StatementContext::assignmentStatement() {
  return getRuleContext<Lua55GrammarParser::AssignmentStatementContext>(0);
}

Lua55GrammarParser::DeclarationStatementContext* Lua55GrammarParser::StatementContext::declarationStatement() {
  return getRuleContext<Lua55GrammarParser::DeclarationStatementContext>(0);
}

Lua55GrammarParser::GlobalAttribStatementContext* Lua55GrammarParser::StatementContext::globalAttribStatement() {
  return getRuleContext<Lua55GrammarParser::GlobalAttribStatementContext>(0);
}

Lua55GrammarParser::FuncdefStatementContext* Lua55GrammarParser::StatementContext::funcdefStatement() {
  return getRuleContext<Lua55GrammarParser::FuncdefStatementContext>(0);
}

Lua55GrammarParser::WhileStatementContext* Lua55GrammarParser::StatementContext::whileStatement() {
  return getRuleContext<Lua55GrammarParser::WhileStatementContext>(0);
}

Lua55GrammarParser::RepeatStatementContext* Lua55GrammarParser::StatementContext::repeatStatement() {
  return getRuleContext<Lua55GrammarParser::RepeatStatementContext>(0);
}

Lua55GrammarParser::IfStatementContext* Lua55GrammarParser::StatementContext::ifStatement() {
  return getRuleContext<Lua55GrammarParser::IfStatementContext>(0);
}

Lua55GrammarParser::NumericForStatementContext* Lua55GrammarParser::StatementContext::numericForStatement() {
  return getRuleContext<Lua55GrammarParser::NumericForStatementContext>(0);
}

Lua55GrammarParser::GenericForStatementContext* Lua55GrammarParser::StatementContext::genericForStatement() {
  return getRuleContext<Lua55GrammarParser::GenericForStatementContext>(0);
}

Lua55GrammarParser::GotoStatementContext* Lua55GrammarParser::StatementContext::gotoStatement() {
  return getRuleContext<Lua55GrammarParser::GotoStatementContext>(0);
}

Lua55GrammarParser::LabelStatementContext* Lua55GrammarParser::StatementContext::labelStatement() {
  return getRuleContext<Lua55GrammarParser::LabelStatementContext>(0);
}

Lua55GrammarParser::BreakStatementContext* Lua55GrammarParser::StatementContext::breakStatement() {
  return getRuleContext<Lua55GrammarParser::BreakStatementContext>(0);
}

Lua55GrammarParser::FuncCallStatementContext* Lua55GrammarParser::StatementContext::funcCallStatement() {
  return getRuleContext<Lua55GrammarParser::FuncCallStatementContext>(0);
}


size_t Lua55GrammarParser::StatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleStatement;
}

void Lua55GrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void Lua55GrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

Lua55GrammarParser::StatementContext* Lua55GrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, Lua55GrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(132);
      emptyStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(133);
      doBlockStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(134);
      assignmentStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(135);
      declarationStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(136);
      globalAttribStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(137);
      funcdefStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(138);
      whileStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(139);
      repeatStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(140);
      ifStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(141);
      numericForStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(142);
      genericForStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(143);
      gotoStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(144);
      labelStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(145);
      breakStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(146);
      funcCallStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

Lua55GrammarParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Lua55GrammarParser::EmptyStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleEmptyStatement;
}

void Lua55GrammarParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void Lua55GrammarParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}

Lua55GrammarParser::EmptyStatementContext* Lua55GrammarParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, Lua55GrammarParser::RuleEmptyStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(Lua55GrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoBlockStatementContext ------------------------------------------------------------------

Lua55GrammarParser::DoBlockStatementContext::DoBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::DoBlockStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::DoBlockStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::DoBlockStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::DoBlockStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleDoBlockStatement;
}

void Lua55GrammarParser::DoBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoBlockStatement(this);
}

void Lua55GrammarParser::DoBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoBlockStatement(this);
}

Lua55GrammarParser::DoBlockStatementContext* Lua55GrammarParser::doBlockStatement() {
  DoBlockStatementContext *_localctx = _tracker.createInstance<DoBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, Lua55GrammarParser::RuleDoBlockStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(Lua55GrammarParser::DO);
    setState(152);
    block();
    setState(153);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

Lua55GrammarParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::VarlistContext* Lua55GrammarParser::AssignmentStatementContext::varlist() {
  return getRuleContext<Lua55GrammarParser::VarlistContext>(0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::AssignmentStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::AssignmentStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleAssignmentStatement;
}

void Lua55GrammarParser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void Lua55GrammarParser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}

Lua55GrammarParser::AssignmentStatementContext* Lua55GrammarParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, Lua55GrammarParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    varlist();
    setState(156);
    match(Lua55GrammarParser::T__1);
    setState(157);
    explist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarlistContext ------------------------------------------------------------------

Lua55GrammarParser::VarlistContext::VarlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::VarContext *> Lua55GrammarParser::VarlistContext::var() {
  return getRuleContexts<Lua55GrammarParser::VarContext>();
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::VarlistContext::var(size_t i) {
  return getRuleContext<Lua55GrammarParser::VarContext>(i);
}


size_t Lua55GrammarParser::VarlistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVarlist;
}

void Lua55GrammarParser::VarlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarlist(this);
}

void Lua55GrammarParser::VarlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarlist(this);
}

Lua55GrammarParser::VarlistContext* Lua55GrammarParser::varlist() {
  VarlistContext *_localctx = _tracker.createInstance<VarlistContext>(_ctx, getState());
  enterRule(_localctx, 12, Lua55GrammarParser::RuleVarlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    var();
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__2) {
      setState(160);
      match(Lua55GrammarParser::T__2);
      setState(161);
      var();
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplistContext ------------------------------------------------------------------

Lua55GrammarParser::ExplistContext::ExplistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::ExplistContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::ExplistContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}


size_t Lua55GrammarParser::ExplistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleExplist;
}

void Lua55GrammarParser::ExplistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplist(this);
}

void Lua55GrammarParser::ExplistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplist(this);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::explist() {
  ExplistContext *_localctx = _tracker.createInstance<ExplistContext>(_ctx, getState());
  enterRule(_localctx, 14, Lua55GrammarParser::RuleExplist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    exp();
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__2) {
      setState(168);
      match(Lua55GrammarParser::T__2);
      setState(169);
      exp();
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

Lua55GrammarParser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ScopeSpecContext* Lua55GrammarParser::DeclarationStatementContext::scopeSpec() {
  return getRuleContext<Lua55GrammarParser::ScopeSpecContext>(0);
}

Lua55GrammarParser::AttnamelistContext* Lua55GrammarParser::DeclarationStatementContext::attnamelist() {
  return getRuleContext<Lua55GrammarParser::AttnamelistContext>(0);
}

Lua55GrammarParser::AttribContext* Lua55GrammarParser::DeclarationStatementContext::attrib() {
  return getRuleContext<Lua55GrammarParser::AttribContext>(0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::DeclarationStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::DeclarationStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleDeclarationStatement;
}

void Lua55GrammarParser::DeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationStatement(this);
}

void Lua55GrammarParser::DeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationStatement(this);
}

Lua55GrammarParser::DeclarationStatementContext* Lua55GrammarParser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, Lua55GrammarParser::RuleDeclarationStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    scopeSpec();
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__4) {
      setState(176);
      attrib();
    }
    setState(179);
    attnamelist();
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__1) {
      setState(180);
      match(Lua55GrammarParser::T__1);
      setState(181);
      explist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalAttribStatementContext ------------------------------------------------------------------

Lua55GrammarParser::GlobalAttribStatementContext::GlobalAttribStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::GlobalAttribStatementContext::GLOBAL() {
  return getToken(Lua55GrammarParser::GLOBAL, 0);
}

Lua55GrammarParser::AttribContext* Lua55GrammarParser::GlobalAttribStatementContext::attrib() {
  return getRuleContext<Lua55GrammarParser::AttribContext>(0);
}


size_t Lua55GrammarParser::GlobalAttribStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleGlobalAttribStatement;
}

void Lua55GrammarParser::GlobalAttribStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalAttribStatement(this);
}

void Lua55GrammarParser::GlobalAttribStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalAttribStatement(this);
}

Lua55GrammarParser::GlobalAttribStatementContext* Lua55GrammarParser::globalAttribStatement() {
  GlobalAttribStatementContext *_localctx = _tracker.createInstance<GlobalAttribStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, Lua55GrammarParser::RuleGlobalAttribStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(Lua55GrammarParser::GLOBAL);
    setState(185);
    attrib();
    setState(186);
    match(Lua55GrammarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttnamelistContext ------------------------------------------------------------------

Lua55GrammarParser::AttnamelistContext::AttnamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::NameattrContext *> Lua55GrammarParser::AttnamelistContext::nameattr() {
  return getRuleContexts<Lua55GrammarParser::NameattrContext>();
}

Lua55GrammarParser::NameattrContext* Lua55GrammarParser::AttnamelistContext::nameattr(size_t i) {
  return getRuleContext<Lua55GrammarParser::NameattrContext>(i);
}


size_t Lua55GrammarParser::AttnamelistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleAttnamelist;
}

void Lua55GrammarParser::AttnamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttnamelist(this);
}

void Lua55GrammarParser::AttnamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttnamelist(this);
}

Lua55GrammarParser::AttnamelistContext* Lua55GrammarParser::attnamelist() {
  AttnamelistContext *_localctx = _tracker.createInstance<AttnamelistContext>(_ctx, getState());
  enterRule(_localctx, 20, Lua55GrammarParser::RuleAttnamelist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    nameattr();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__2) {
      setState(189);
      match(Lua55GrammarParser::T__2);
      setState(190);
      nameattr();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameattrContext ------------------------------------------------------------------

Lua55GrammarParser::NameattrContext::NameattrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NameattrContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

Lua55GrammarParser::AttribContext* Lua55GrammarParser::NameattrContext::attrib() {
  return getRuleContext<Lua55GrammarParser::AttribContext>(0);
}


size_t Lua55GrammarParser::NameattrContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNameattr;
}

void Lua55GrammarParser::NameattrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameattr(this);
}

void Lua55GrammarParser::NameattrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameattr(this);
}

Lua55GrammarParser::NameattrContext* Lua55GrammarParser::nameattr() {
  NameattrContext *_localctx = _tracker.createInstance<NameattrContext>(_ctx, getState());
  enterRule(_localctx, 22, Lua55GrammarParser::RuleNameattr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    name();
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__4) {
      setState(197);
      attrib();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttribContext ------------------------------------------------------------------

Lua55GrammarParser::AttribContext::AttribContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::AttribContext::ATTRIBUTES_DEFINED() {
  return getToken(Lua55GrammarParser::ATTRIBUTES_DEFINED, 0);
}


size_t Lua55GrammarParser::AttribContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleAttrib;
}

void Lua55GrammarParser::AttribContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib(this);
}

void Lua55GrammarParser::AttribContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib(this);
}

Lua55GrammarParser::AttribContext* Lua55GrammarParser::attrib() {
  AttribContext *_localctx = _tracker.createInstance<AttribContext>(_ctx, getState());
  enterRule(_localctx, 24, Lua55GrammarParser::RuleAttrib);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(Lua55GrammarParser::T__4);
    setState(201);
    match(Lua55GrammarParser::ATTRIBUTES_DEFINED);
    setState(202);
    match(Lua55GrammarParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeSpecContext ------------------------------------------------------------------

Lua55GrammarParser::ScopeSpecContext::ScopeSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::ScopeSpecContext::GLOBAL() {
  return getToken(Lua55GrammarParser::GLOBAL, 0);
}

tree::TerminalNode* Lua55GrammarParser::ScopeSpecContext::LOCAL() {
  return getToken(Lua55GrammarParser::LOCAL, 0);
}


size_t Lua55GrammarParser::ScopeSpecContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleScopeSpec;
}

void Lua55GrammarParser::ScopeSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopeSpec(this);
}

void Lua55GrammarParser::ScopeSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopeSpec(this);
}

Lua55GrammarParser::ScopeSpecContext* Lua55GrammarParser::scopeSpec() {
  ScopeSpecContext *_localctx = _tracker.createInstance<ScopeSpecContext>(_ctx, getState());
  enterRule(_localctx, 26, Lua55GrammarParser::RuleScopeSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    _la = _input->LA(1);
    if (!(_la == Lua55GrammarParser::LOCAL

    || _la == Lua55GrammarParser::GLOBAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefStatementContext ------------------------------------------------------------------

Lua55GrammarParser::FuncdefStatementContext::FuncdefStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::FuncdefStatementContext::FUNCTION() {
  return getToken(Lua55GrammarParser::FUNCTION, 0);
}

Lua55GrammarParser::FuncnameContext* Lua55GrammarParser::FuncdefStatementContext::funcname() {
  return getRuleContext<Lua55GrammarParser::FuncnameContext>(0);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::FuncdefStatementContext::funcbody() {
  return getRuleContext<Lua55GrammarParser::FuncbodyContext>(0);
}

Lua55GrammarParser::ScopeSpecContext* Lua55GrammarParser::FuncdefStatementContext::scopeSpec() {
  return getRuleContext<Lua55GrammarParser::ScopeSpecContext>(0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FuncdefStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::FuncdefStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncdefStatement;
}

void Lua55GrammarParser::FuncdefStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncdefStatement(this);
}

void Lua55GrammarParser::FuncdefStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncdefStatement(this);
}

Lua55GrammarParser::FuncdefStatementContext* Lua55GrammarParser::funcdefStatement() {
  FuncdefStatementContext *_localctx = _tracker.createInstance<FuncdefStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, Lua55GrammarParser::RuleFuncdefStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(206);
        match(Lua55GrammarParser::FUNCTION);
        setState(207);
        funcname();
        setState(208);
        funcbody();
        break;
      }

      case Lua55GrammarParser::LOCAL:
      case Lua55GrammarParser::GLOBAL: {
        enterOuterAlt(_localctx, 2);
        setState(210);
        scopeSpec();
        setState(211);
        match(Lua55GrammarParser::FUNCTION);
        setState(212);
        name();
        setState(213);
        funcbody();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

Lua55GrammarParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::NameContext *> Lua55GrammarParser::FuncnameContext::name() {
  return getRuleContexts<Lua55GrammarParser::NameContext>();
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FuncnameContext::name(size_t i) {
  return getRuleContext<Lua55GrammarParser::NameContext>(i);
}


size_t Lua55GrammarParser::FuncnameContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncname;
}

void Lua55GrammarParser::FuncnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncname(this);
}

void Lua55GrammarParser::FuncnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncname(this);
}

Lua55GrammarParser::FuncnameContext* Lua55GrammarParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 30, Lua55GrammarParser::RuleFuncname);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    name();
    setState(222);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__6) {
      setState(218);
      match(Lua55GrammarParser::T__6);
      setState(219);
      name();
      setState(224);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__7) {
      setState(225);
      match(Lua55GrammarParser::T__7);
      setState(226);
      name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

Lua55GrammarParser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::FuncbodyContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::FuncbodyContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}

Lua55GrammarParser::ParamlistContext* Lua55GrammarParser::FuncbodyContext::paramlist() {
  return getRuleContext<Lua55GrammarParser::ParamlistContext>(0);
}


size_t Lua55GrammarParser::FuncbodyContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncbody;
}

void Lua55GrammarParser::FuncbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncbody(this);
}

void Lua55GrammarParser::FuncbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncbody(this);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 32, Lua55GrammarParser::RuleFuncbody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(Lua55GrammarParser::T__8);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__10

    || _la == Lua55GrammarParser::ID) {
      setState(230);
      paramlist();
    }
    setState(233);
    match(Lua55GrammarParser::T__9);
    setState(234);
    block();
    setState(235);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamlistContext ------------------------------------------------------------------

Lua55GrammarParser::ParamlistContext::ParamlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NamelistContext* Lua55GrammarParser::ParamlistContext::namelist() {
  return getRuleContext<Lua55GrammarParser::NamelistContext>(0);
}

Lua55GrammarParser::VarargContext* Lua55GrammarParser::ParamlistContext::vararg() {
  return getRuleContext<Lua55GrammarParser::VarargContext>(0);
}


size_t Lua55GrammarParser::ParamlistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleParamlist;
}

void Lua55GrammarParser::ParamlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamlist(this);
}

void Lua55GrammarParser::ParamlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamlist(this);
}

Lua55GrammarParser::ParamlistContext* Lua55GrammarParser::paramlist() {
  ParamlistContext *_localctx = _tracker.createInstance<ParamlistContext>(_ctx, getState());
  enterRule(_localctx, 34, Lua55GrammarParser::RuleParamlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(237);
        namelist();
        setState(240);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Lua55GrammarParser::T__2) {
          setState(238);
          match(Lua55GrammarParser::T__2);
          setState(239);
          vararg();
        }
        break;
      }

      case Lua55GrammarParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(242);
        vararg();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarargContext ------------------------------------------------------------------

Lua55GrammarParser::VarargContext::VarargContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::VarargContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::VarargContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVararg;
}

void Lua55GrammarParser::VarargContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVararg(this);
}

void Lua55GrammarParser::VarargContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVararg(this);
}

Lua55GrammarParser::VarargContext* Lua55GrammarParser::vararg() {
  VarargContext *_localctx = _tracker.createInstance<VarargContext>(_ctx, getState());
  enterRule(_localctx, 36, Lua55GrammarParser::RuleVararg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(Lua55GrammarParser::T__10);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::ID) {
      setState(246);
      name();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamelistContext ------------------------------------------------------------------

Lua55GrammarParser::NamelistContext::NamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::NameContext *> Lua55GrammarParser::NamelistContext::name() {
  return getRuleContexts<Lua55GrammarParser::NameContext>();
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NamelistContext::name(size_t i) {
  return getRuleContext<Lua55GrammarParser::NameContext>(i);
}


size_t Lua55GrammarParser::NamelistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNamelist;
}

void Lua55GrammarParser::NamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamelist(this);
}

void Lua55GrammarParser::NamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamelist(this);
}

Lua55GrammarParser::NamelistContext* Lua55GrammarParser::namelist() {
  NamelistContext *_localctx = _tracker.createInstance<NamelistContext>(_ctx, getState());
  enterRule(_localctx, 38, Lua55GrammarParser::RuleNamelist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(249);
    name();
    setState(254);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(250);
        match(Lua55GrammarParser::T__2);
        setState(251);
        name(); 
      }
      setState(256);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

Lua55GrammarParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::WhileStatementContext::WHILE() {
  return getToken(Lua55GrammarParser::WHILE, 0);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::WhileStatementContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::WhileStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::WhileStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::WhileStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::WhileStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleWhileStatement;
}

void Lua55GrammarParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void Lua55GrammarParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

Lua55GrammarParser::WhileStatementContext* Lua55GrammarParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, Lua55GrammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(Lua55GrammarParser::WHILE);
    setState(258);
    exp();
    setState(259);
    match(Lua55GrammarParser::DO);
    setState(260);
    block();
    setState(261);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStatementContext ------------------------------------------------------------------

Lua55GrammarParser::RepeatStatementContext::RepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::RepeatStatementContext::REPEAT() {
  return getToken(Lua55GrammarParser::REPEAT, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::RepeatStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::RepeatStatementContext::UNTIL() {
  return getToken(Lua55GrammarParser::UNTIL, 0);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::RepeatStatementContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}


size_t Lua55GrammarParser::RepeatStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleRepeatStatement;
}

void Lua55GrammarParser::RepeatStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStatement(this);
}

void Lua55GrammarParser::RepeatStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStatement(this);
}

Lua55GrammarParser::RepeatStatementContext* Lua55GrammarParser::repeatStatement() {
  RepeatStatementContext *_localctx = _tracker.createInstance<RepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, Lua55GrammarParser::RuleRepeatStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(Lua55GrammarParser::REPEAT);
    setState(264);
    block();
    setState(265);
    match(Lua55GrammarParser::UNTIL);
    setState(266);
    exp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

Lua55GrammarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::IF() {
  return getToken(Lua55GrammarParser::IF, 0);
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::IfStatementContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::IfStatementContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::IfStatementContext::THEN() {
  return getTokens(Lua55GrammarParser::THEN);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::THEN(size_t i) {
  return getToken(Lua55GrammarParser::THEN, i);
}

std::vector<Lua55GrammarParser::BlockContext *> Lua55GrammarParser::IfStatementContext::block() {
  return getRuleContexts<Lua55GrammarParser::BlockContext>();
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::IfStatementContext::block(size_t i) {
  return getRuleContext<Lua55GrammarParser::BlockContext>(i);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::IfStatementContext::ELSEIF() {
  return getTokens(Lua55GrammarParser::ELSEIF);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::ELSEIF(size_t i) {
  return getToken(Lua55GrammarParser::ELSEIF, i);
}

tree::TerminalNode* Lua55GrammarParser::IfStatementContext::ELSE() {
  return getToken(Lua55GrammarParser::ELSE, 0);
}


size_t Lua55GrammarParser::IfStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleIfStatement;
}

void Lua55GrammarParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void Lua55GrammarParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

Lua55GrammarParser::IfStatementContext* Lua55GrammarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, Lua55GrammarParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    match(Lua55GrammarParser::IF);
    setState(269);
    exp();
    setState(270);
    match(Lua55GrammarParser::THEN);
    setState(271);
    block();
    setState(279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::ELSEIF) {
      setState(272);
      match(Lua55GrammarParser::ELSEIF);
      setState(273);
      exp();
      setState(274);
      match(Lua55GrammarParser::THEN);
      setState(275);
      block();
      setState(281);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::ELSE) {
      setState(282);
      match(Lua55GrammarParser::ELSE);
      setState(283);
      block();
    }
    setState(286);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericForStatementContext ------------------------------------------------------------------

Lua55GrammarParser::NumericForStatementContext::NumericForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::NumericForStatementContext::FOR() {
  return getToken(Lua55GrammarParser::FOR, 0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NumericForStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::NumericForStatementContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::NumericForStatementContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}

tree::TerminalNode* Lua55GrammarParser::NumericForStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::NumericForStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::NumericForStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::NumericForStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNumericForStatement;
}

void Lua55GrammarParser::NumericForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericForStatement(this);
}

void Lua55GrammarParser::NumericForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericForStatement(this);
}

Lua55GrammarParser::NumericForStatementContext* Lua55GrammarParser::numericForStatement() {
  NumericForStatementContext *_localctx = _tracker.createInstance<NumericForStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, Lua55GrammarParser::RuleNumericForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(Lua55GrammarParser::FOR);
    setState(289);
    name();
    setState(290);
    match(Lua55GrammarParser::T__1);
    setState(291);
    exp();
    setState(292);
    match(Lua55GrammarParser::T__2);
    setState(293);
    exp();
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__2) {
      setState(294);
      match(Lua55GrammarParser::T__2);
      setState(295);
      exp();
    }
    setState(298);
    match(Lua55GrammarParser::DO);
    setState(299);
    block();
    setState(300);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericForStatementContext ------------------------------------------------------------------

Lua55GrammarParser::GenericForStatementContext::GenericForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::FOR() {
  return getToken(Lua55GrammarParser::FOR, 0);
}

Lua55GrammarParser::NamelistContext* Lua55GrammarParser::GenericForStatementContext::namelist() {
  return getRuleContext<Lua55GrammarParser::NamelistContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::IN() {
  return getToken(Lua55GrammarParser::IN, 0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::GenericForStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::DO() {
  return getToken(Lua55GrammarParser::DO, 0);
}

Lua55GrammarParser::BlockContext* Lua55GrammarParser::GenericForStatementContext::block() {
  return getRuleContext<Lua55GrammarParser::BlockContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::GenericForStatementContext::END() {
  return getToken(Lua55GrammarParser::END, 0);
}


size_t Lua55GrammarParser::GenericForStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleGenericForStatement;
}

void Lua55GrammarParser::GenericForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericForStatement(this);
}

void Lua55GrammarParser::GenericForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericForStatement(this);
}

Lua55GrammarParser::GenericForStatementContext* Lua55GrammarParser::genericForStatement() {
  GenericForStatementContext *_localctx = _tracker.createInstance<GenericForStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, Lua55GrammarParser::RuleGenericForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(Lua55GrammarParser::FOR);
    setState(303);
    namelist();
    setState(304);
    match(Lua55GrammarParser::IN);
    setState(305);
    explist();
    setState(306);
    match(Lua55GrammarParser::DO);
    setState(307);
    block();
    setState(308);
    match(Lua55GrammarParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

Lua55GrammarParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::GotoStatementContext::GOTO() {
  return getToken(Lua55GrammarParser::GOTO, 0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::GotoStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::GotoStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleGotoStatement;
}

void Lua55GrammarParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void Lua55GrammarParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}

Lua55GrammarParser::GotoStatementContext* Lua55GrammarParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, Lua55GrammarParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    match(Lua55GrammarParser::GOTO);
    setState(311);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelStatementContext ------------------------------------------------------------------

Lua55GrammarParser::LabelStatementContext::LabelStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::LabelStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::LabelStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleLabelStatement;
}

void Lua55GrammarParser::LabelStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelStatement(this);
}

void Lua55GrammarParser::LabelStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelStatement(this);
}

Lua55GrammarParser::LabelStatementContext* Lua55GrammarParser::labelStatement() {
  LabelStatementContext *_localctx = _tracker.createInstance<LabelStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, Lua55GrammarParser::RuleLabelStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(Lua55GrammarParser::T__11);
    setState(314);
    name();
    setState(315);
    match(Lua55GrammarParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

Lua55GrammarParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::BreakStatementContext::BREAK() {
  return getToken(Lua55GrammarParser::BREAK, 0);
}


size_t Lua55GrammarParser::BreakStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBreakStatement;
}

void Lua55GrammarParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void Lua55GrammarParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}

Lua55GrammarParser::BreakStatementContext* Lua55GrammarParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, Lua55GrammarParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(Lua55GrammarParser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

Lua55GrammarParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::ReturnStatementContext::RETURN() {
  return getToken(Lua55GrammarParser::RETURN, 0);
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::ReturnStatementContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::ReturnStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleReturnStatement;
}

void Lua55GrammarParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void Lua55GrammarParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

Lua55GrammarParser::ReturnStatementContext* Lua55GrammarParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, Lua55GrammarParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    match(Lua55GrammarParser::RETURN);
    setState(321);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100134723099042304) != 0)) {
      setState(320);
      explist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallStatementContext ------------------------------------------------------------------

Lua55GrammarParser::FuncCallStatementContext::FuncCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::FuncCallContext* Lua55GrammarParser::FuncCallStatementContext::funcCall() {
  return getRuleContext<Lua55GrammarParser::FuncCallContext>(0);
}


size_t Lua55GrammarParser::FuncCallStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncCallStatement;
}

void Lua55GrammarParser::FuncCallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallStatement(this);
}

void Lua55GrammarParser::FuncCallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallStatement(this);
}

Lua55GrammarParser::FuncCallStatementContext* Lua55GrammarParser::funcCallStatement() {
  FuncCallStatementContext *_localctx = _tracker.createInstance<FuncCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 58, Lua55GrammarParser::RuleFuncCallStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    funcCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncAnonContext ------------------------------------------------------------------

Lua55GrammarParser::FuncAnonContext::FuncAnonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::FuncAnonContext::FUNCTION() {
  return getToken(Lua55GrammarParser::FUNCTION, 0);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::FuncAnonContext::funcbody() {
  return getRuleContext<Lua55GrammarParser::FuncbodyContext>(0);
}


size_t Lua55GrammarParser::FuncAnonContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncAnon;
}

void Lua55GrammarParser::FuncAnonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncAnon(this);
}

void Lua55GrammarParser::FuncAnonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncAnon(this);
}

Lua55GrammarParser::FuncAnonContext* Lua55GrammarParser::funcAnon() {
  FuncAnonContext *_localctx = _tracker.createInstance<FuncAnonContext>(_ctx, getState());
  enterRule(_localctx, 60, Lua55GrammarParser::RuleFuncAnon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(Lua55GrammarParser::FUNCTION);
    setState(326);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableConstructorContext ------------------------------------------------------------------

Lua55GrammarParser::TableConstructorContext::TableConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::FieldlistContext* Lua55GrammarParser::TableConstructorContext::fieldlist() {
  return getRuleContext<Lua55GrammarParser::FieldlistContext>(0);
}


size_t Lua55GrammarParser::TableConstructorContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleTableConstructor;
}

void Lua55GrammarParser::TableConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableConstructor(this);
}

void Lua55GrammarParser::TableConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableConstructor(this);
}

Lua55GrammarParser::TableConstructorContext* Lua55GrammarParser::tableConstructor() {
  TableConstructorContext *_localctx = _tracker.createInstance<TableConstructorContext>(_ctx, getState());
  enterRule(_localctx, 62, Lua55GrammarParser::RuleTableConstructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(328);
      match(Lua55GrammarParser::T__12);
      setState(329);
      fieldlist();
      setState(330);
      match(Lua55GrammarParser::T__13);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(332);
      match(Lua55GrammarParser::T__12);
      setState(333);
      match(Lua55GrammarParser::T__13);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldlistContext ------------------------------------------------------------------

Lua55GrammarParser::FieldlistContext::FieldlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::FieldContext *> Lua55GrammarParser::FieldlistContext::field() {
  return getRuleContexts<Lua55GrammarParser::FieldContext>();
}

Lua55GrammarParser::FieldContext* Lua55GrammarParser::FieldlistContext::field(size_t i) {
  return getRuleContext<Lua55GrammarParser::FieldContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::FieldlistContext::FIELD_SEP() {
  return getTokens(Lua55GrammarParser::FIELD_SEP);
}

tree::TerminalNode* Lua55GrammarParser::FieldlistContext::FIELD_SEP(size_t i) {
  return getToken(Lua55GrammarParser::FIELD_SEP, i);
}


size_t Lua55GrammarParser::FieldlistContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFieldlist;
}

void Lua55GrammarParser::FieldlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldlist(this);
}

void Lua55GrammarParser::FieldlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldlist(this);
}

Lua55GrammarParser::FieldlistContext* Lua55GrammarParser::fieldlist() {
  FieldlistContext *_localctx = _tracker.createInstance<FieldlistContext>(_ctx, getState());
  enterRule(_localctx, 64, Lua55GrammarParser::RuleFieldlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(336);
    field();
    setState(341);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(337);
        match(Lua55GrammarParser::FIELD_SEP);
        setState(338);
        field(); 
      }
      setState(343);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::FIELD_SEP) {
      setState(344);
      match(Lua55GrammarParser::FIELD_SEP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

Lua55GrammarParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ExpContext *> Lua55GrammarParser::FieldContext::exp() {
  return getRuleContexts<Lua55GrammarParser::ExpContext>();
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::FieldContext::exp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ExpContext>(i);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FieldContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::FieldContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleField;
}

void Lua55GrammarParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void Lua55GrammarParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}

Lua55GrammarParser::FieldContext* Lua55GrammarParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 66, Lua55GrammarParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(347);
      match(Lua55GrammarParser::T__14);
      setState(348);
      exp();
      setState(349);
      match(Lua55GrammarParser::T__15);
      setState(350);
      match(Lua55GrammarParser::T__1);
      setState(351);
      exp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(353);
      name();
      setState(354);
      match(Lua55GrammarParser::T__1);
      setState(355);
      exp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(357);
      exp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

Lua55GrammarParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::LiteralContext* Lua55GrammarParser::ExpContext::literal() {
  return getRuleContext<Lua55GrammarParser::LiteralContext>(0);
}

Lua55GrammarParser::FuncAnonContext* Lua55GrammarParser::ExpContext::funcAnon() {
  return getRuleContext<Lua55GrammarParser::FuncAnonContext>(0);
}

Lua55GrammarParser::PrefixexpContext* Lua55GrammarParser::ExpContext::prefixexp() {
  return getRuleContext<Lua55GrammarParser::PrefixexpContext>(0);
}

Lua55GrammarParser::TableConstructorContext* Lua55GrammarParser::ExpContext::tableConstructor() {
  return getRuleContext<Lua55GrammarParser::TableConstructorContext>(0);
}

Lua55GrammarParser::OpExpContext* Lua55GrammarParser::ExpContext::opExp() {
  return getRuleContext<Lua55GrammarParser::OpExpContext>(0);
}


size_t Lua55GrammarParser::ExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleExp;
}

void Lua55GrammarParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void Lua55GrammarParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 68, Lua55GrammarParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(365);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(360);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(361);
      funcAnon();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(362);
      prefixexp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(363);
      tableConstructor();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(364);
      opExp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpExpContext ------------------------------------------------------------------

Lua55GrammarParser::OpExpContext::OpExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::OrExpContext* Lua55GrammarParser::OpExpContext::orExp() {
  return getRuleContext<Lua55GrammarParser::OrExpContext>(0);
}


size_t Lua55GrammarParser::OpExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleOpExp;
}

void Lua55GrammarParser::OpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExp(this);
}

void Lua55GrammarParser::OpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExp(this);
}

Lua55GrammarParser::OpExpContext* Lua55GrammarParser::opExp() {
  OpExpContext *_localctx = _tracker.createInstance<OpExpContext>(_ctx, getState());
  enterRule(_localctx, 70, Lua55GrammarParser::RuleOpExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    orExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrExpContext ------------------------------------------------------------------

Lua55GrammarParser::OrExpContext::OrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::AndExpContext *> Lua55GrammarParser::OrExpContext::andExp() {
  return getRuleContexts<Lua55GrammarParser::AndExpContext>();
}

Lua55GrammarParser::AndExpContext* Lua55GrammarParser::OrExpContext::andExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::AndExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::OrExpContext::OR() {
  return getTokens(Lua55GrammarParser::OR);
}

tree::TerminalNode* Lua55GrammarParser::OrExpContext::OR(size_t i) {
  return getToken(Lua55GrammarParser::OR, i);
}


size_t Lua55GrammarParser::OrExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleOrExp;
}

void Lua55GrammarParser::OrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrExp(this);
}

void Lua55GrammarParser::OrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrExp(this);
}

Lua55GrammarParser::OrExpContext* Lua55GrammarParser::orExp() {
  OrExpContext *_localctx = _tracker.createInstance<OrExpContext>(_ctx, getState());
  enterRule(_localctx, 72, Lua55GrammarParser::RuleOrExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    andExp();
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::OR) {
      setState(370);
      match(Lua55GrammarParser::OR);
      setState(371);
      andExp();
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpContext ------------------------------------------------------------------

Lua55GrammarParser::AndExpContext::AndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::CompExpContext *> Lua55GrammarParser::AndExpContext::compExp() {
  return getRuleContexts<Lua55GrammarParser::CompExpContext>();
}

Lua55GrammarParser::CompExpContext* Lua55GrammarParser::AndExpContext::compExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::CompExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::AndExpContext::AND() {
  return getTokens(Lua55GrammarParser::AND);
}

tree::TerminalNode* Lua55GrammarParser::AndExpContext::AND(size_t i) {
  return getToken(Lua55GrammarParser::AND, i);
}


size_t Lua55GrammarParser::AndExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleAndExp;
}

void Lua55GrammarParser::AndExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExp(this);
}

void Lua55GrammarParser::AndExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExp(this);
}

Lua55GrammarParser::AndExpContext* Lua55GrammarParser::andExp() {
  AndExpContext *_localctx = _tracker.createInstance<AndExpContext>(_ctx, getState());
  enterRule(_localctx, 74, Lua55GrammarParser::RuleAndExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    compExp();
    setState(382);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::AND) {
      setState(378);
      match(Lua55GrammarParser::AND);
      setState(379);
      compExp();
      setState(384);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompExpContext ------------------------------------------------------------------

Lua55GrammarParser::CompExpContext::CompExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::BitorExpContext *> Lua55GrammarParser::CompExpContext::bitorExp() {
  return getRuleContexts<Lua55GrammarParser::BitorExpContext>();
}

Lua55GrammarParser::BitorExpContext* Lua55GrammarParser::CompExpContext::bitorExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::BitorExpContext>(i);
}

tree::TerminalNode* Lua55GrammarParser::CompExpContext::COMPOP() {
  return getToken(Lua55GrammarParser::COMPOP, 0);
}


size_t Lua55GrammarParser::CompExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleCompExp;
}

void Lua55GrammarParser::CompExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompExp(this);
}

void Lua55GrammarParser::CompExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompExp(this);
}

Lua55GrammarParser::CompExpContext* Lua55GrammarParser::compExp() {
  CompExpContext *_localctx = _tracker.createInstance<CompExpContext>(_ctx, getState());
  enterRule(_localctx, 76, Lua55GrammarParser::RuleCompExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    bitorExp();
    setState(388);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::COMPOP) {
      setState(386);
      match(Lua55GrammarParser::COMPOP);
      setState(387);
      bitorExp();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitorExpContext ------------------------------------------------------------------

Lua55GrammarParser::BitorExpContext::BitorExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::BitxorExpContext *> Lua55GrammarParser::BitorExpContext::bitxorExp() {
  return getRuleContexts<Lua55GrammarParser::BitxorExpContext>();
}

Lua55GrammarParser::BitxorExpContext* Lua55GrammarParser::BitorExpContext::bitxorExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::BitxorExpContext>(i);
}


size_t Lua55GrammarParser::BitorExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBitorExp;
}

void Lua55GrammarParser::BitorExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitorExp(this);
}

void Lua55GrammarParser::BitorExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitorExp(this);
}

Lua55GrammarParser::BitorExpContext* Lua55GrammarParser::bitorExp() {
  BitorExpContext *_localctx = _tracker.createInstance<BitorExpContext>(_ctx, getState());
  enterRule(_localctx, 78, Lua55GrammarParser::RuleBitorExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    bitxorExp();
    setState(395);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__16) {
      setState(391);
      match(Lua55GrammarParser::T__16);
      setState(392);
      bitxorExp();
      setState(397);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitxorExpContext ------------------------------------------------------------------

Lua55GrammarParser::BitxorExpContext::BitxorExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::BitandExpContext *> Lua55GrammarParser::BitxorExpContext::bitandExp() {
  return getRuleContexts<Lua55GrammarParser::BitandExpContext>();
}

Lua55GrammarParser::BitandExpContext* Lua55GrammarParser::BitxorExpContext::bitandExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::BitandExpContext>(i);
}


size_t Lua55GrammarParser::BitxorExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBitxorExp;
}

void Lua55GrammarParser::BitxorExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitxorExp(this);
}

void Lua55GrammarParser::BitxorExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitxorExp(this);
}

Lua55GrammarParser::BitxorExpContext* Lua55GrammarParser::bitxorExp() {
  BitxorExpContext *_localctx = _tracker.createInstance<BitxorExpContext>(_ctx, getState());
  enterRule(_localctx, 80, Lua55GrammarParser::RuleBitxorExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    bitandExp();
    setState(403);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__17) {
      setState(399);
      match(Lua55GrammarParser::T__17);
      setState(400);
      bitandExp();
      setState(405);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitandExpContext ------------------------------------------------------------------

Lua55GrammarParser::BitandExpContext::BitandExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ShiftExpContext *> Lua55GrammarParser::BitandExpContext::shiftExp() {
  return getRuleContexts<Lua55GrammarParser::ShiftExpContext>();
}

Lua55GrammarParser::ShiftExpContext* Lua55GrammarParser::BitandExpContext::shiftExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ShiftExpContext>(i);
}


size_t Lua55GrammarParser::BitandExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleBitandExp;
}

void Lua55GrammarParser::BitandExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitandExp(this);
}

void Lua55GrammarParser::BitandExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitandExp(this);
}

Lua55GrammarParser::BitandExpContext* Lua55GrammarParser::bitandExp() {
  BitandExpContext *_localctx = _tracker.createInstance<BitandExpContext>(_ctx, getState());
  enterRule(_localctx, 82, Lua55GrammarParser::RuleBitandExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    shiftExp();
    setState(411);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__18) {
      setState(407);
      match(Lua55GrammarParser::T__18);
      setState(408);
      shiftExp();
      setState(413);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpContext ------------------------------------------------------------------

Lua55GrammarParser::ShiftExpContext::ShiftExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::ConcatExpContext *> Lua55GrammarParser::ShiftExpContext::concatExp() {
  return getRuleContexts<Lua55GrammarParser::ConcatExpContext>();
}

Lua55GrammarParser::ConcatExpContext* Lua55GrammarParser::ShiftExpContext::concatExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::ConcatExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::ShiftExpContext::SHIFTOP() {
  return getTokens(Lua55GrammarParser::SHIFTOP);
}

tree::TerminalNode* Lua55GrammarParser::ShiftExpContext::SHIFTOP(size_t i) {
  return getToken(Lua55GrammarParser::SHIFTOP, i);
}


size_t Lua55GrammarParser::ShiftExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleShiftExp;
}

void Lua55GrammarParser::ShiftExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExp(this);
}

void Lua55GrammarParser::ShiftExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExp(this);
}

Lua55GrammarParser::ShiftExpContext* Lua55GrammarParser::shiftExp() {
  ShiftExpContext *_localctx = _tracker.createInstance<ShiftExpContext>(_ctx, getState());
  enterRule(_localctx, 84, Lua55GrammarParser::RuleShiftExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    concatExp();
    setState(419);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::SHIFTOP) {
      setState(415);
      match(Lua55GrammarParser::SHIFTOP);
      setState(416);
      concatExp();
      setState(421);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConcatExpContext ------------------------------------------------------------------

Lua55GrammarParser::ConcatExpContext::ConcatExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::PlusExpContext *> Lua55GrammarParser::ConcatExpContext::plusExp() {
  return getRuleContexts<Lua55GrammarParser::PlusExpContext>();
}

Lua55GrammarParser::PlusExpContext* Lua55GrammarParser::ConcatExpContext::plusExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::PlusExpContext>(i);
}


size_t Lua55GrammarParser::ConcatExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleConcatExp;
}

void Lua55GrammarParser::ConcatExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConcatExp(this);
}

void Lua55GrammarParser::ConcatExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConcatExp(this);
}

Lua55GrammarParser::ConcatExpContext* Lua55GrammarParser::concatExp() {
  ConcatExpContext *_localctx = _tracker.createInstance<ConcatExpContext>(_ctx, getState());
  enterRule(_localctx, 86, Lua55GrammarParser::RuleConcatExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    plusExp();
    setState(427);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__19) {
      setState(423);
      match(Lua55GrammarParser::T__19);
      setState(424);
      plusExp();
      setState(429);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusExpContext ------------------------------------------------------------------

Lua55GrammarParser::PlusExpContext::PlusExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::MulExpContext *> Lua55GrammarParser::PlusExpContext::mulExp() {
  return getRuleContexts<Lua55GrammarParser::MulExpContext>();
}

Lua55GrammarParser::MulExpContext* Lua55GrammarParser::PlusExpContext::mulExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::MulExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::PlusExpContext::PLUSOP() {
  return getTokens(Lua55GrammarParser::PLUSOP);
}

tree::TerminalNode* Lua55GrammarParser::PlusExpContext::PLUSOP(size_t i) {
  return getToken(Lua55GrammarParser::PLUSOP, i);
}


size_t Lua55GrammarParser::PlusExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RulePlusExp;
}

void Lua55GrammarParser::PlusExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusExp(this);
}

void Lua55GrammarParser::PlusExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusExp(this);
}

Lua55GrammarParser::PlusExpContext* Lua55GrammarParser::plusExp() {
  PlusExpContext *_localctx = _tracker.createInstance<PlusExpContext>(_ctx, getState());
  enterRule(_localctx, 88, Lua55GrammarParser::RulePlusExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    mulExp();
    setState(435);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::PLUSOP) {
      setState(431);
      match(Lua55GrammarParser::PLUSOP);
      setState(432);
      mulExp();
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

Lua55GrammarParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::UnaryExpContext *> Lua55GrammarParser::MulExpContext::unaryExp() {
  return getRuleContexts<Lua55GrammarParser::UnaryExpContext>();
}

Lua55GrammarParser::UnaryExpContext* Lua55GrammarParser::MulExpContext::unaryExp(size_t i) {
  return getRuleContext<Lua55GrammarParser::UnaryExpContext>(i);
}

std::vector<tree::TerminalNode *> Lua55GrammarParser::MulExpContext::MULOP() {
  return getTokens(Lua55GrammarParser::MULOP);
}

tree::TerminalNode* Lua55GrammarParser::MulExpContext::MULOP(size_t i) {
  return getToken(Lua55GrammarParser::MULOP, i);
}


size_t Lua55GrammarParser::MulExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleMulExp;
}

void Lua55GrammarParser::MulExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulExp(this);
}

void Lua55GrammarParser::MulExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulExp(this);
}

Lua55GrammarParser::MulExpContext* Lua55GrammarParser::mulExp() {
  MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, getState());
  enterRule(_localctx, 90, Lua55GrammarParser::RuleMulExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    unaryExp();
    setState(443);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::MULOP) {
      setState(439);
      match(Lua55GrammarParser::MULOP);
      setState(440);
      unaryExp();
      setState(445);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

Lua55GrammarParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::PowExpContext* Lua55GrammarParser::UnaryExpContext::powExp() {
  return getRuleContext<Lua55GrammarParser::PowExpContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::UnaryExpContext::UNOP() {
  return getToken(Lua55GrammarParser::UNOP, 0);
}

Lua55GrammarParser::UnaryExpContext* Lua55GrammarParser::UnaryExpContext::unaryExp() {
  return getRuleContext<Lua55GrammarParser::UnaryExpContext>(0);
}


size_t Lua55GrammarParser::UnaryExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleUnaryExp;
}

void Lua55GrammarParser::UnaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExp(this);
}

void Lua55GrammarParser::UnaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExp(this);
}

Lua55GrammarParser::UnaryExpContext* Lua55GrammarParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 92, Lua55GrammarParser::RuleUnaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__8:
      case Lua55GrammarParser::T__12:
      case Lua55GrammarParser::NIL:
      case Lua55GrammarParser::TRUE:
      case Lua55GrammarParser::FALSE:
      case Lua55GrammarParser::NUMBER:
      case Lua55GrammarParser::STRING:
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(446);
        powExp();
        break;
      }

      case Lua55GrammarParser::UNOP: {
        enterOuterAlt(_localctx, 2);
        setState(447);
        match(Lua55GrammarParser::UNOP);
        setState(448);
        unaryExp();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PowExpContext ------------------------------------------------------------------

Lua55GrammarParser::PowExpContext::PowExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::OpStartExpContext* Lua55GrammarParser::PowExpContext::opStartExp() {
  return getRuleContext<Lua55GrammarParser::OpStartExpContext>(0);
}

Lua55GrammarParser::PowExpContext* Lua55GrammarParser::PowExpContext::powExp() {
  return getRuleContext<Lua55GrammarParser::PowExpContext>(0);
}


size_t Lua55GrammarParser::PowExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RulePowExp;
}

void Lua55GrammarParser::PowExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExp(this);
}

void Lua55GrammarParser::PowExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExp(this);
}

Lua55GrammarParser::PowExpContext* Lua55GrammarParser::powExp() {
  PowExpContext *_localctx = _tracker.createInstance<PowExpContext>(_ctx, getState());
  enterRule(_localctx, 94, Lua55GrammarParser::RulePowExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    opStartExp();
    setState(454);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__20) {
      setState(452);
      match(Lua55GrammarParser::T__20);
      setState(453);
      powExp();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpStartExpContext ------------------------------------------------------------------

Lua55GrammarParser::OpStartExpContext::OpStartExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::PrefixexpContext* Lua55GrammarParser::OpStartExpContext::prefixexp() {
  return getRuleContext<Lua55GrammarParser::PrefixexpContext>(0);
}

Lua55GrammarParser::LiteralContext* Lua55GrammarParser::OpStartExpContext::literal() {
  return getRuleContext<Lua55GrammarParser::LiteralContext>(0);
}

Lua55GrammarParser::TableConstructorContext* Lua55GrammarParser::OpStartExpContext::tableConstructor() {
  return getRuleContext<Lua55GrammarParser::TableConstructorContext>(0);
}


size_t Lua55GrammarParser::OpStartExpContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleOpStartExp;
}

void Lua55GrammarParser::OpStartExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpStartExp(this);
}

void Lua55GrammarParser::OpStartExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpStartExp(this);
}

Lua55GrammarParser::OpStartExpContext* Lua55GrammarParser::opStartExp() {
  OpStartExpContext *_localctx = _tracker.createInstance<OpStartExpContext>(_ctx, getState());
  enterRule(_localctx, 96, Lua55GrammarParser::RuleOpStartExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(459);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__8:
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(456);
        prefixexp();
        break;
      }

      case Lua55GrammarParser::NIL:
      case Lua55GrammarParser::TRUE:
      case Lua55GrammarParser::FALSE:
      case Lua55GrammarParser::NUMBER:
      case Lua55GrammarParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(457);
        literal();
        break;
      }

      case Lua55GrammarParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(458);
        tableConstructor();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

Lua55GrammarParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::NIL() {
  return getToken(Lua55GrammarParser::NIL, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::TRUE() {
  return getToken(Lua55GrammarParser::TRUE, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::FALSE() {
  return getToken(Lua55GrammarParser::FALSE, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::NUMBER() {
  return getToken(Lua55GrammarParser::NUMBER, 0);
}

tree::TerminalNode* Lua55GrammarParser::LiteralContext::STRING() {
  return getToken(Lua55GrammarParser::STRING, 0);
}


size_t Lua55GrammarParser::LiteralContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleLiteral;
}

void Lua55GrammarParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void Lua55GrammarParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

Lua55GrammarParser::LiteralContext* Lua55GrammarParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 98, Lua55GrammarParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28006760182710272) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixexpContext ------------------------------------------------------------------

Lua55GrammarParser::PrefixexpContext::PrefixexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::PrefixexpContext::var() {
  return getRuleContext<Lua55GrammarParser::VarContext>(0);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::PrefixexpContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}

Lua55GrammarParser::FuncCallContext* Lua55GrammarParser::PrefixexpContext::funcCall() {
  return getRuleContext<Lua55GrammarParser::FuncCallContext>(0);
}


size_t Lua55GrammarParser::PrefixexpContext::getRuleIndex() const {
  return Lua55GrammarParser::RulePrefixexp;
}

void Lua55GrammarParser::PrefixexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixexp(this);
}

void Lua55GrammarParser::PrefixexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixexp(this);
}

Lua55GrammarParser::PrefixexpContext* Lua55GrammarParser::prefixexp() {
  PrefixexpContext *_localctx = _tracker.createInstance<PrefixexpContext>(_ctx, getState());
  enterRule(_localctx, 100, Lua55GrammarParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(469);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(463);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(464);
      match(Lua55GrammarParser::T__8);
      setState(465);
      exp();
      setState(466);
      match(Lua55GrammarParser::T__9);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(468);
      funcCall();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallContext ------------------------------------------------------------------

Lua55GrammarParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::FuncCallContext::var() {
  return getRuleContext<Lua55GrammarParser::VarContext>(0);
}

std::vector<Lua55GrammarParser::FuncCall_tailContext *> Lua55GrammarParser::FuncCallContext::funcCall_tail() {
  return getRuleContexts<Lua55GrammarParser::FuncCall_tailContext>();
}

Lua55GrammarParser::FuncCall_tailContext* Lua55GrammarParser::FuncCallContext::funcCall_tail(size_t i) {
  return getRuleContext<Lua55GrammarParser::FuncCall_tailContext>(i);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::FuncCallContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}


size_t Lua55GrammarParser::FuncCallContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncCall;
}

void Lua55GrammarParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}

void Lua55GrammarParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}

Lua55GrammarParser::FuncCallContext* Lua55GrammarParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 102, Lua55GrammarParser::RuleFuncCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(485);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(471);
      var();
      setState(473); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(472);
                funcCall_tail();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(475); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(477);
      match(Lua55GrammarParser::T__8);
      setState(478);
      exp();
      setState(479);
      match(Lua55GrammarParser::T__9);
      setState(481); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(480);
                funcCall_tail();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(483); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCall_tailContext ------------------------------------------------------------------

Lua55GrammarParser::FuncCall_tailContext::FuncCall_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ArgsContext* Lua55GrammarParser::FuncCall_tailContext::args() {
  return getRuleContext<Lua55GrammarParser::ArgsContext>(0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FuncCall_tailContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::FuncCall_tailContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleFuncCall_tail;
}

void Lua55GrammarParser::FuncCall_tailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall_tail(this);
}

void Lua55GrammarParser::FuncCall_tailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall_tail(this);
}

Lua55GrammarParser::FuncCall_tailContext* Lua55GrammarParser::funcCall_tail() {
  FuncCall_tailContext *_localctx = _tracker.createInstance<FuncCall_tailContext>(_ctx, getState());
  enterRule(_localctx, 104, Lua55GrammarParser::RuleFuncCall_tail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(492);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        args();
        break;
      }

      case Lua55GrammarParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(488);
        match(Lua55GrammarParser::T__7);
        setState(489);
        name();
        setState(490);
        args();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

Lua55GrammarParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ExplistContext* Lua55GrammarParser::ArgsContext::explist() {
  return getRuleContext<Lua55GrammarParser::ExplistContext>(0);
}


size_t Lua55GrammarParser::ArgsContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleArgs;
}

void Lua55GrammarParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void Lua55GrammarParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}

Lua55GrammarParser::ArgsContext* Lua55GrammarParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 106, Lua55GrammarParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    match(Lua55GrammarParser::T__8);
    setState(496);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100134723099042304) != 0)) {
      setState(495);
      explist();
    }
    setState(498);
    match(Lua55GrammarParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

Lua55GrammarParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::VarContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

std::vector<Lua55GrammarParser::Var_tailContext *> Lua55GrammarParser::VarContext::var_tail() {
  return getRuleContexts<Lua55GrammarParser::Var_tailContext>();
}

Lua55GrammarParser::Var_tailContext* Lua55GrammarParser::VarContext::var_tail(size_t i) {
  return getRuleContext<Lua55GrammarParser::Var_tailContext>(i);
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::VarContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}


size_t Lua55GrammarParser::VarContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVar;
}

void Lua55GrammarParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void Lua55GrammarParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

Lua55GrammarParser::VarContext* Lua55GrammarParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 108, Lua55GrammarParser::RuleVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(515);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(500);
        name();
        setState(504);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Lua55GrammarParser::T__6

        || _la == Lua55GrammarParser::T__14) {
          setState(501);
          var_tail();
          setState(506);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case Lua55GrammarParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(507);
        match(Lua55GrammarParser::T__8);
        setState(508);
        exp();
        setState(509);
        match(Lua55GrammarParser::T__9);
        setState(511); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(510);
          var_tail();
          setState(513); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Lua55GrammarParser::T__6

        || _la == Lua55GrammarParser::T__14);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_tailContext ------------------------------------------------------------------

Lua55GrammarParser::Var_tailContext::Var_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ExpContext* Lua55GrammarParser::Var_tailContext::exp() {
  return getRuleContext<Lua55GrammarParser::ExpContext>(0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::Var_tailContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}


size_t Lua55GrammarParser::Var_tailContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleVar_tail;
}

void Lua55GrammarParser::Var_tailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_tail(this);
}

void Lua55GrammarParser::Var_tailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_tail(this);
}

Lua55GrammarParser::Var_tailContext* Lua55GrammarParser::var_tail() {
  Var_tailContext *_localctx = _tracker.createInstance<Var_tailContext>(_ctx, getState());
  enterRule(_localctx, 110, Lua55GrammarParser::RuleVar_tail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(523);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(517);
        match(Lua55GrammarParser::T__14);
        setState(518);
        exp();
        setState(519);
        match(Lua55GrammarParser::T__15);
        break;
      }

      case Lua55GrammarParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(521);
        match(Lua55GrammarParser::T__6);
        setState(522);
        name();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

Lua55GrammarParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::NameContext::ID() {
  return getToken(Lua55GrammarParser::ID, 0);
}


size_t Lua55GrammarParser::NameContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleName;
}

void Lua55GrammarParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void Lua55GrammarParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 112, Lua55GrammarParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(Lua55GrammarParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void Lua55GrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  lua55grammarParserInitialize();
#else
  ::antlr4::internal::call_once(lua55grammarParserOnceFlag, lua55grammarParserInitialize);
#endif
}
