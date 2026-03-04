
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
      "funcdefStatement", "defaultFuncdefStatement", "scopedFuncdefStatement", 
      "funcname", "namespec", "funcbody", "paramlist", "vararg", "namelist", 
      "whileStatement", "repeatStatement", "ifStatement", "numericForStatement", 
      "genericForStatement", "gotoStatement", "labelStatement", "breakStatement", 
      "returnStatement", "funcCallStatement", "funcAnon", "tableConstructor", 
      "fieldlist", "field", "exp", "opExp", "orExp", "andExp", "compExp", 
      "bitorExp", "bitxorExp", "bitandExp", "shiftExp", "concatExp", "plusExp", 
      "mulExp", "unaryExp", "powExp", "opStartExp", "literal", "prefixexp", 
      "funcCall", "funcCall_tail", "args", "var", "var_tail", "name"
    },
    std::vector<std::string>{
      "", "';'", "'='", "','", "'*'", "'<'", "'>'", "':'", "'.'", "'('", 
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
  	4,1,59,537,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,1,0,1,0,1,0,1,1,1,1,3,1,126,8,1,5,1,
  	128,8,1,10,1,12,1,131,9,1,1,1,1,1,3,1,135,8,1,3,1,137,8,1,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,154,8,2,1,3,1,3,1,
  	4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,5,6,169,8,6,10,6,12,6,172,9,
  	6,1,7,1,7,1,7,5,7,177,8,7,10,7,12,7,180,9,7,1,8,1,8,3,8,184,8,8,1,8,1,
  	8,1,8,3,8,189,8,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,5,10,198,8,10,10,10,
  	12,10,201,9,10,1,11,1,11,3,11,205,8,11,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,14,1,14,3,14,215,8,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,
  	1,17,1,17,1,17,3,17,229,8,17,1,18,1,18,1,18,5,18,234,8,18,10,18,12,18,
  	237,9,18,1,19,1,19,3,19,241,8,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,3,
  	20,250,8,20,1,20,3,20,253,8,20,1,21,1,21,3,21,257,8,21,1,22,1,22,1,22,
  	5,22,262,8,22,10,22,12,22,265,9,22,1,23,1,23,1,23,1,23,1,23,1,23,1,24,
  	1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,5,25,
  	287,8,25,10,25,12,25,290,9,25,1,25,1,25,3,25,294,8,25,1,25,1,25,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,306,8,26,1,26,1,26,1,26,1,26,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,29,
  	1,29,1,30,1,30,1,31,1,31,3,31,331,8,31,1,32,1,32,1,33,1,33,1,33,1,34,
  	1,34,1,34,1,34,1,34,1,34,3,34,344,8,34,1,35,1,35,1,35,5,35,349,8,35,10,
  	35,12,35,352,9,35,1,35,3,35,355,8,35,1,36,1,36,1,36,1,36,1,36,1,36,1,
  	36,1,36,1,36,1,36,1,36,3,36,368,8,36,1,37,1,37,1,37,1,37,1,37,3,37,375,
  	8,37,1,38,1,38,1,39,1,39,1,39,5,39,382,8,39,10,39,12,39,385,9,39,1,40,
  	1,40,1,40,5,40,390,8,40,10,40,12,40,393,9,40,1,41,1,41,1,41,3,41,398,
  	8,41,1,42,1,42,1,42,5,42,403,8,42,10,42,12,42,406,9,42,1,43,1,43,1,43,
  	5,43,411,8,43,10,43,12,43,414,9,43,1,44,1,44,1,44,5,44,419,8,44,10,44,
  	12,44,422,9,44,1,45,1,45,1,45,5,45,427,8,45,10,45,12,45,430,9,45,1,46,
  	1,46,1,46,5,46,435,8,46,10,46,12,46,438,9,46,1,47,1,47,1,47,5,47,443,
  	8,47,10,47,12,47,446,9,47,1,48,1,48,1,48,5,48,451,8,48,10,48,12,48,454,
  	9,48,1,49,1,49,1,49,3,49,459,8,49,1,50,1,50,1,50,3,50,464,8,50,1,51,1,
  	51,1,51,3,51,469,8,51,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,53,3,53,479,
  	8,53,1,54,1,54,4,54,483,8,54,11,54,12,54,484,1,54,1,54,1,54,1,54,4,54,
  	491,8,54,11,54,12,54,492,3,54,495,8,54,1,55,1,55,1,55,1,55,1,55,3,55,
  	502,8,55,1,56,1,56,3,56,506,8,56,1,56,1,56,1,57,1,57,5,57,512,8,57,10,
  	57,12,57,515,9,57,1,57,1,57,1,57,1,57,4,57,521,8,57,11,57,12,57,522,3,
  	57,525,8,57,1,58,1,58,1,58,1,58,1,58,1,58,3,58,533,8,58,1,59,1,59,1,59,
  	0,0,60,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,
  	92,94,96,98,100,102,104,106,108,110,112,114,116,118,0,2,1,0,50,51,2,0,
  	47,49,53,54,546,0,120,1,0,0,0,2,129,1,0,0,0,4,153,1,0,0,0,6,155,1,0,0,
  	0,8,157,1,0,0,0,10,161,1,0,0,0,12,165,1,0,0,0,14,173,1,0,0,0,16,181,1,
  	0,0,0,18,190,1,0,0,0,20,194,1,0,0,0,22,202,1,0,0,0,24,206,1,0,0,0,26,
  	210,1,0,0,0,28,214,1,0,0,0,30,216,1,0,0,0,32,220,1,0,0,0,34,225,1,0,0,
  	0,36,230,1,0,0,0,38,238,1,0,0,0,40,252,1,0,0,0,42,254,1,0,0,0,44,258,
  	1,0,0,0,46,266,1,0,0,0,48,272,1,0,0,0,50,277,1,0,0,0,52,297,1,0,0,0,54,
  	311,1,0,0,0,56,319,1,0,0,0,58,322,1,0,0,0,60,326,1,0,0,0,62,328,1,0,0,
  	0,64,332,1,0,0,0,66,334,1,0,0,0,68,343,1,0,0,0,70,345,1,0,0,0,72,367,
  	1,0,0,0,74,374,1,0,0,0,76,376,1,0,0,0,78,378,1,0,0,0,80,386,1,0,0,0,82,
  	394,1,0,0,0,84,399,1,0,0,0,86,407,1,0,0,0,88,415,1,0,0,0,90,423,1,0,0,
  	0,92,431,1,0,0,0,94,439,1,0,0,0,96,447,1,0,0,0,98,458,1,0,0,0,100,460,
  	1,0,0,0,102,468,1,0,0,0,104,470,1,0,0,0,106,478,1,0,0,0,108,494,1,0,0,
  	0,110,501,1,0,0,0,112,503,1,0,0,0,114,524,1,0,0,0,116,532,1,0,0,0,118,
  	534,1,0,0,0,120,121,3,2,1,0,121,122,5,0,0,1,122,1,1,0,0,0,123,125,3,4,
  	2,0,124,126,5,1,0,0,125,124,1,0,0,0,125,126,1,0,0,0,126,128,1,0,0,0,127,
  	123,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,129,130,1,0,0,0,130,136,1,
  	0,0,0,131,129,1,0,0,0,132,134,3,62,31,0,133,135,5,1,0,0,134,133,1,0,0,
  	0,134,135,1,0,0,0,135,137,1,0,0,0,136,132,1,0,0,0,136,137,1,0,0,0,137,
  	3,1,0,0,0,138,154,3,6,3,0,139,154,3,8,4,0,140,154,3,10,5,0,141,154,3,
  	16,8,0,142,154,3,18,9,0,143,154,3,28,14,0,144,154,3,46,23,0,145,154,3,
  	48,24,0,146,154,3,50,25,0,147,154,3,52,26,0,148,154,3,54,27,0,149,154,
  	3,56,28,0,150,154,3,58,29,0,151,154,3,60,30,0,152,154,3,64,32,0,153,138,
  	1,0,0,0,153,139,1,0,0,0,153,140,1,0,0,0,153,141,1,0,0,0,153,142,1,0,0,
  	0,153,143,1,0,0,0,153,144,1,0,0,0,153,145,1,0,0,0,153,146,1,0,0,0,153,
  	147,1,0,0,0,153,148,1,0,0,0,153,149,1,0,0,0,153,150,1,0,0,0,153,151,1,
  	0,0,0,153,152,1,0,0,0,154,5,1,0,0,0,155,156,5,1,0,0,156,7,1,0,0,0,157,
  	158,5,29,0,0,158,159,3,2,1,0,159,160,5,30,0,0,160,9,1,0,0,0,161,162,3,
  	12,6,0,162,163,5,2,0,0,163,164,3,14,7,0,164,11,1,0,0,0,165,170,3,114,
  	57,0,166,167,5,3,0,0,167,169,3,114,57,0,168,166,1,0,0,0,169,172,1,0,0,
  	0,170,168,1,0,0,0,170,171,1,0,0,0,171,13,1,0,0,0,172,170,1,0,0,0,173,
  	178,3,74,37,0,174,175,5,3,0,0,175,177,3,74,37,0,176,174,1,0,0,0,177,180,
  	1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,15,1,0,0,0,180,178,1,0,0,
  	0,181,183,3,26,13,0,182,184,3,24,12,0,183,182,1,0,0,0,183,184,1,0,0,0,
  	184,185,1,0,0,0,185,188,3,20,10,0,186,187,5,2,0,0,187,189,3,14,7,0,188,
  	186,1,0,0,0,188,189,1,0,0,0,189,17,1,0,0,0,190,191,5,51,0,0,191,192,3,
  	24,12,0,192,193,5,4,0,0,193,19,1,0,0,0,194,199,3,22,11,0,195,196,5,3,
  	0,0,196,198,3,22,11,0,197,195,1,0,0,0,198,201,1,0,0,0,199,197,1,0,0,0,
  	199,200,1,0,0,0,200,21,1,0,0,0,201,199,1,0,0,0,202,204,3,118,59,0,203,
  	205,3,24,12,0,204,203,1,0,0,0,204,205,1,0,0,0,205,23,1,0,0,0,206,207,
  	5,5,0,0,207,208,5,28,0,0,208,209,5,6,0,0,209,25,1,0,0,0,210,211,7,0,0,
  	0,211,27,1,0,0,0,212,215,3,30,15,0,213,215,3,32,16,0,214,212,1,0,0,0,
  	214,213,1,0,0,0,215,29,1,0,0,0,216,217,5,46,0,0,217,218,3,34,17,0,218,
  	219,3,38,19,0,219,31,1,0,0,0,220,221,3,26,13,0,221,222,5,46,0,0,222,223,
  	3,118,59,0,223,224,3,38,19,0,224,33,1,0,0,0,225,228,3,36,18,0,226,227,
  	5,7,0,0,227,229,3,118,59,0,228,226,1,0,0,0,228,229,1,0,0,0,229,35,1,0,
  	0,0,230,235,3,118,59,0,231,232,5,8,0,0,232,234,3,118,59,0,233,231,1,0,
  	0,0,234,237,1,0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,37,1,0,0,0,237,
  	235,1,0,0,0,238,240,5,9,0,0,239,241,3,40,20,0,240,239,1,0,0,0,240,241,
  	1,0,0,0,241,242,1,0,0,0,242,243,5,10,0,0,243,244,3,2,1,0,244,245,5,30,
  	0,0,245,39,1,0,0,0,246,249,3,44,22,0,247,248,5,3,0,0,248,250,3,42,21,
  	0,249,247,1,0,0,0,249,250,1,0,0,0,250,253,1,0,0,0,251,253,3,42,21,0,252,
  	246,1,0,0,0,252,251,1,0,0,0,253,41,1,0,0,0,254,256,5,11,0,0,255,257,3,
  	118,59,0,256,255,1,0,0,0,256,257,1,0,0,0,257,43,1,0,0,0,258,263,3,118,
  	59,0,259,260,5,3,0,0,260,262,3,118,59,0,261,259,1,0,0,0,262,265,1,0,0,
  	0,263,261,1,0,0,0,263,264,1,0,0,0,264,45,1,0,0,0,265,263,1,0,0,0,266,
  	267,5,38,0,0,267,268,3,74,37,0,268,269,5,29,0,0,269,270,3,2,1,0,270,271,
  	5,30,0,0,271,47,1,0,0,0,272,273,5,39,0,0,273,274,3,2,1,0,274,275,5,40,
  	0,0,275,276,3,74,37,0,276,49,1,0,0,0,277,278,5,34,0,0,278,279,3,74,37,
  	0,279,280,5,37,0,0,280,288,3,2,1,0,281,282,5,35,0,0,282,283,3,74,37,0,
  	283,284,5,37,0,0,284,285,3,2,1,0,285,287,1,0,0,0,286,281,1,0,0,0,287,
  	290,1,0,0,0,288,286,1,0,0,0,288,289,1,0,0,0,289,293,1,0,0,0,290,288,1,
  	0,0,0,291,292,5,36,0,0,292,294,3,2,1,0,293,291,1,0,0,0,293,294,1,0,0,
  	0,294,295,1,0,0,0,295,296,5,30,0,0,296,51,1,0,0,0,297,298,5,41,0,0,298,
  	299,3,118,59,0,299,300,5,2,0,0,300,301,3,74,37,0,301,302,5,3,0,0,302,
  	305,3,74,37,0,303,304,5,3,0,0,304,306,3,74,37,0,305,303,1,0,0,0,305,306,
  	1,0,0,0,306,307,1,0,0,0,307,308,5,29,0,0,308,309,3,2,1,0,309,310,5,30,
  	0,0,310,53,1,0,0,0,311,312,5,41,0,0,312,313,3,44,22,0,313,314,5,42,0,
  	0,314,315,3,14,7,0,315,316,5,29,0,0,316,317,3,2,1,0,317,318,5,30,0,0,
  	318,55,1,0,0,0,319,320,5,44,0,0,320,321,3,118,59,0,321,57,1,0,0,0,322,
  	323,5,12,0,0,323,324,3,118,59,0,324,325,5,12,0,0,325,59,1,0,0,0,326,327,
  	5,43,0,0,327,61,1,0,0,0,328,330,5,45,0,0,329,331,3,14,7,0,330,329,1,0,
  	0,0,330,331,1,0,0,0,331,63,1,0,0,0,332,333,3,108,54,0,333,65,1,0,0,0,
  	334,335,5,46,0,0,335,336,3,38,19,0,336,67,1,0,0,0,337,338,5,13,0,0,338,
  	339,3,70,35,0,339,340,5,14,0,0,340,344,1,0,0,0,341,342,5,13,0,0,342,344,
  	5,14,0,0,343,337,1,0,0,0,343,341,1,0,0,0,344,69,1,0,0,0,345,350,3,72,
  	36,0,346,347,5,22,0,0,347,349,3,72,36,0,348,346,1,0,0,0,349,352,1,0,0,
  	0,350,348,1,0,0,0,350,351,1,0,0,0,351,354,1,0,0,0,352,350,1,0,0,0,353,
  	355,5,22,0,0,354,353,1,0,0,0,354,355,1,0,0,0,355,71,1,0,0,0,356,357,5,
  	15,0,0,357,358,3,74,37,0,358,359,5,16,0,0,359,360,5,2,0,0,360,361,3,74,
  	37,0,361,368,1,0,0,0,362,363,3,118,59,0,363,364,5,2,0,0,364,365,3,74,
  	37,0,365,368,1,0,0,0,366,368,3,74,37,0,367,356,1,0,0,0,367,362,1,0,0,
  	0,367,366,1,0,0,0,368,73,1,0,0,0,369,375,3,104,52,0,370,375,3,66,33,0,
  	371,375,3,106,53,0,372,375,3,68,34,0,373,375,3,76,38,0,374,369,1,0,0,
  	0,374,370,1,0,0,0,374,371,1,0,0,0,374,372,1,0,0,0,374,373,1,0,0,0,375,
  	75,1,0,0,0,376,377,3,78,39,0,377,77,1,0,0,0,378,383,3,80,40,0,379,380,
  	5,32,0,0,380,382,3,80,40,0,381,379,1,0,0,0,382,385,1,0,0,0,383,381,1,
  	0,0,0,383,384,1,0,0,0,384,79,1,0,0,0,385,383,1,0,0,0,386,391,3,82,41,
  	0,387,388,5,31,0,0,388,390,3,82,41,0,389,387,1,0,0,0,390,393,1,0,0,0,
  	391,389,1,0,0,0,391,392,1,0,0,0,392,81,1,0,0,0,393,391,1,0,0,0,394,397,
  	3,84,42,0,395,396,5,23,0,0,396,398,3,84,42,0,397,395,1,0,0,0,397,398,
  	1,0,0,0,398,83,1,0,0,0,399,404,3,86,43,0,400,401,5,17,0,0,401,403,3,86,
  	43,0,402,400,1,0,0,0,403,406,1,0,0,0,404,402,1,0,0,0,404,405,1,0,0,0,
  	405,85,1,0,0,0,406,404,1,0,0,0,407,412,3,88,44,0,408,409,5,18,0,0,409,
  	411,3,88,44,0,410,408,1,0,0,0,411,414,1,0,0,0,412,410,1,0,0,0,412,413,
  	1,0,0,0,413,87,1,0,0,0,414,412,1,0,0,0,415,420,3,90,45,0,416,417,5,19,
  	0,0,417,419,3,90,45,0,418,416,1,0,0,0,419,422,1,0,0,0,420,418,1,0,0,0,
  	420,421,1,0,0,0,421,89,1,0,0,0,422,420,1,0,0,0,423,428,3,92,46,0,424,
  	425,5,24,0,0,425,427,3,92,46,0,426,424,1,0,0,0,427,430,1,0,0,0,428,426,
  	1,0,0,0,428,429,1,0,0,0,429,91,1,0,0,0,430,428,1,0,0,0,431,436,3,94,47,
  	0,432,433,5,20,0,0,433,435,3,94,47,0,434,432,1,0,0,0,435,438,1,0,0,0,
  	436,434,1,0,0,0,436,437,1,0,0,0,437,93,1,0,0,0,438,436,1,0,0,0,439,444,
  	3,96,48,0,440,441,5,25,0,0,441,443,3,96,48,0,442,440,1,0,0,0,443,446,
  	1,0,0,0,444,442,1,0,0,0,444,445,1,0,0,0,445,95,1,0,0,0,446,444,1,0,0,
  	0,447,452,3,98,49,0,448,449,5,26,0,0,449,451,3,98,49,0,450,448,1,0,0,
  	0,451,454,1,0,0,0,452,450,1,0,0,0,452,453,1,0,0,0,453,97,1,0,0,0,454,
  	452,1,0,0,0,455,459,3,100,50,0,456,457,5,27,0,0,457,459,3,98,49,0,458,
  	455,1,0,0,0,458,456,1,0,0,0,459,99,1,0,0,0,460,463,3,102,51,0,461,462,
  	5,21,0,0,462,464,3,100,50,0,463,461,1,0,0,0,463,464,1,0,0,0,464,101,1,
  	0,0,0,465,469,3,106,53,0,466,469,3,104,52,0,467,469,3,68,34,0,468,465,
  	1,0,0,0,468,466,1,0,0,0,468,467,1,0,0,0,469,103,1,0,0,0,470,471,7,1,0,
  	0,471,105,1,0,0,0,472,479,3,114,57,0,473,474,5,9,0,0,474,475,3,74,37,
  	0,475,476,5,10,0,0,476,479,1,0,0,0,477,479,3,108,54,0,478,472,1,0,0,0,
  	478,473,1,0,0,0,478,477,1,0,0,0,479,107,1,0,0,0,480,482,3,114,57,0,481,
  	483,3,110,55,0,482,481,1,0,0,0,483,484,1,0,0,0,484,482,1,0,0,0,484,485,
  	1,0,0,0,485,495,1,0,0,0,486,487,5,9,0,0,487,488,3,74,37,0,488,490,5,10,
  	0,0,489,491,3,110,55,0,490,489,1,0,0,0,491,492,1,0,0,0,492,490,1,0,0,
  	0,492,493,1,0,0,0,493,495,1,0,0,0,494,480,1,0,0,0,494,486,1,0,0,0,495,
  	109,1,0,0,0,496,502,3,112,56,0,497,498,5,7,0,0,498,499,3,118,59,0,499,
  	500,3,112,56,0,500,502,1,0,0,0,501,496,1,0,0,0,501,497,1,0,0,0,502,111,
  	1,0,0,0,503,505,5,9,0,0,504,506,3,14,7,0,505,504,1,0,0,0,505,506,1,0,
  	0,0,506,507,1,0,0,0,507,508,5,10,0,0,508,113,1,0,0,0,509,513,3,118,59,
  	0,510,512,3,116,58,0,511,510,1,0,0,0,512,515,1,0,0,0,513,511,1,0,0,0,
  	513,514,1,0,0,0,514,525,1,0,0,0,515,513,1,0,0,0,516,517,5,9,0,0,517,518,
  	3,74,37,0,518,520,5,10,0,0,519,521,3,116,58,0,520,519,1,0,0,0,521,522,
  	1,0,0,0,522,520,1,0,0,0,522,523,1,0,0,0,523,525,1,0,0,0,524,509,1,0,0,
  	0,524,516,1,0,0,0,525,115,1,0,0,0,526,527,5,15,0,0,527,528,3,74,37,0,
  	528,529,5,16,0,0,529,533,1,0,0,0,530,531,5,8,0,0,531,533,3,118,59,0,532,
  	526,1,0,0,0,532,530,1,0,0,0,533,117,1,0,0,0,534,535,5,56,0,0,535,119,
  	1,0,0,0,51,125,129,134,136,153,170,178,183,188,199,204,214,228,235,240,
  	249,252,256,263,288,293,305,330,343,350,354,367,374,383,391,397,404,412,
  	420,428,436,444,452,458,463,468,478,484,492,494,501,505,513,522,524,532
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
    setState(120);
    block();
    setState(121);
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
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75535092155421186) != 0)) {
      setState(123);
      statement();
      setState(125);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(124);
        match(Lua55GrammarParser::T__0);
        break;
      }

      default:
        break;
      }
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::RETURN) {
      setState(132);
      returnStatement();
      setState(134);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Lua55GrammarParser::T__0) {
        setState(133);
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
    setState(153);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      emptyStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      doBlockStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(140);
      assignmentStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(141);
      declarationStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(142);
      globalAttribStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(143);
      funcdefStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(144);
      whileStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(145);
      repeatStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(146);
      ifStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(147);
      numericForStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(148);
      genericForStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(149);
      gotoStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(150);
      labelStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(151);
      breakStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(152);
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
    setState(155);
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
    setState(157);
    match(Lua55GrammarParser::DO);
    setState(158);
    block();
    setState(159);
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
    setState(161);
    varlist();
    setState(162);
    match(Lua55GrammarParser::T__1);
    setState(163);
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
    setState(165);
    var();
    setState(170);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__2) {
      setState(166);
      match(Lua55GrammarParser::T__2);
      setState(167);
      var();
      setState(172);
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
    setState(173);
    exp();
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__2) {
      setState(174);
      match(Lua55GrammarParser::T__2);
      setState(175);
      exp();
      setState(180);
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
    setState(181);
    scopeSpec();
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__4) {
      setState(182);
      attrib();
    }
    setState(185);
    attnamelist();
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__1) {
      setState(186);
      match(Lua55GrammarParser::T__1);
      setState(187);
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
    setState(190);
    match(Lua55GrammarParser::GLOBAL);
    setState(191);
    attrib();
    setState(192);
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
    setState(194);
    nameattr();
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__2) {
      setState(195);
      match(Lua55GrammarParser::T__2);
      setState(196);
      nameattr();
      setState(201);
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
    setState(202);
    name();
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__4) {
      setState(203);
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
    setState(206);
    match(Lua55GrammarParser::T__4);
    setState(207);
    match(Lua55GrammarParser::ATTRIBUTES_DEFINED);
    setState(208);
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
    setState(210);
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

Lua55GrammarParser::DefaultFuncdefStatementContext* Lua55GrammarParser::FuncdefStatementContext::defaultFuncdefStatement() {
  return getRuleContext<Lua55GrammarParser::DefaultFuncdefStatementContext>(0);
}

Lua55GrammarParser::ScopedFuncdefStatementContext* Lua55GrammarParser::FuncdefStatementContext::scopedFuncdefStatement() {
  return getRuleContext<Lua55GrammarParser::ScopedFuncdefStatementContext>(0);
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
    setState(214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(212);
        defaultFuncdefStatement();
        break;
      }

      case Lua55GrammarParser::LOCAL:
      case Lua55GrammarParser::GLOBAL: {
        enterOuterAlt(_localctx, 2);
        setState(213);
        scopedFuncdefStatement();
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

//----------------- DefaultFuncdefStatementContext ------------------------------------------------------------------

Lua55GrammarParser::DefaultFuncdefStatementContext::DefaultFuncdefStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Lua55GrammarParser::DefaultFuncdefStatementContext::FUNCTION() {
  return getToken(Lua55GrammarParser::FUNCTION, 0);
}

Lua55GrammarParser::FuncnameContext* Lua55GrammarParser::DefaultFuncdefStatementContext::funcname() {
  return getRuleContext<Lua55GrammarParser::FuncnameContext>(0);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::DefaultFuncdefStatementContext::funcbody() {
  return getRuleContext<Lua55GrammarParser::FuncbodyContext>(0);
}


size_t Lua55GrammarParser::DefaultFuncdefStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleDefaultFuncdefStatement;
}

void Lua55GrammarParser::DefaultFuncdefStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultFuncdefStatement(this);
}

void Lua55GrammarParser::DefaultFuncdefStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultFuncdefStatement(this);
}

Lua55GrammarParser::DefaultFuncdefStatementContext* Lua55GrammarParser::defaultFuncdefStatement() {
  DefaultFuncdefStatementContext *_localctx = _tracker.createInstance<DefaultFuncdefStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, Lua55GrammarParser::RuleDefaultFuncdefStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(Lua55GrammarParser::FUNCTION);
    setState(217);
    funcname();
    setState(218);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopedFuncdefStatementContext ------------------------------------------------------------------

Lua55GrammarParser::ScopedFuncdefStatementContext::ScopedFuncdefStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Lua55GrammarParser::ScopeSpecContext* Lua55GrammarParser::ScopedFuncdefStatementContext::scopeSpec() {
  return getRuleContext<Lua55GrammarParser::ScopeSpecContext>(0);
}

tree::TerminalNode* Lua55GrammarParser::ScopedFuncdefStatementContext::FUNCTION() {
  return getToken(Lua55GrammarParser::FUNCTION, 0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::ScopedFuncdefStatementContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
}

Lua55GrammarParser::FuncbodyContext* Lua55GrammarParser::ScopedFuncdefStatementContext::funcbody() {
  return getRuleContext<Lua55GrammarParser::FuncbodyContext>(0);
}


size_t Lua55GrammarParser::ScopedFuncdefStatementContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleScopedFuncdefStatement;
}

void Lua55GrammarParser::ScopedFuncdefStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopedFuncdefStatement(this);
}

void Lua55GrammarParser::ScopedFuncdefStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopedFuncdefStatement(this);
}

Lua55GrammarParser::ScopedFuncdefStatementContext* Lua55GrammarParser::scopedFuncdefStatement() {
  ScopedFuncdefStatementContext *_localctx = _tracker.createInstance<ScopedFuncdefStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, Lua55GrammarParser::RuleScopedFuncdefStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    scopeSpec();
    setState(221);
    match(Lua55GrammarParser::FUNCTION);
    setState(222);
    name();
    setState(223);
    funcbody();
   
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

Lua55GrammarParser::NamespecContext* Lua55GrammarParser::FuncnameContext::namespec() {
  return getRuleContext<Lua55GrammarParser::NamespecContext>(0);
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::FuncnameContext::name() {
  return getRuleContext<Lua55GrammarParser::NameContext>(0);
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
  enterRule(_localctx, 34, Lua55GrammarParser::RuleFuncname);
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
    setState(225);
    namespec();
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__6) {
      setState(226);
      match(Lua55GrammarParser::T__6);
      setState(227);
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

//----------------- NamespecContext ------------------------------------------------------------------

Lua55GrammarParser::NamespecContext::NamespecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Lua55GrammarParser::NameContext *> Lua55GrammarParser::NamespecContext::name() {
  return getRuleContexts<Lua55GrammarParser::NameContext>();
}

Lua55GrammarParser::NameContext* Lua55GrammarParser::NamespecContext::name(size_t i) {
  return getRuleContext<Lua55GrammarParser::NameContext>(i);
}


size_t Lua55GrammarParser::NamespecContext::getRuleIndex() const {
  return Lua55GrammarParser::RuleNamespec;
}

void Lua55GrammarParser::NamespecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespec(this);
}

void Lua55GrammarParser::NamespecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Lua55GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespec(this);
}

Lua55GrammarParser::NamespecContext* Lua55GrammarParser::namespec() {
  NamespecContext *_localctx = _tracker.createInstance<NamespecContext>(_ctx, getState());
  enterRule(_localctx, 36, Lua55GrammarParser::RuleNamespec);
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
    setState(230);
    name();
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__7) {
      setState(231);
      match(Lua55GrammarParser::T__7);
      setState(232);
      name();
      setState(237);
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
  enterRule(_localctx, 38, Lua55GrammarParser::RuleFuncbody);
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
    setState(238);
    match(Lua55GrammarParser::T__8);
    setState(240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__10

    || _la == Lua55GrammarParser::ID) {
      setState(239);
      paramlist();
    }
    setState(242);
    match(Lua55GrammarParser::T__9);
    setState(243);
    block();
    setState(244);
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
  enterRule(_localctx, 40, Lua55GrammarParser::RuleParamlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(246);
        namelist();
        setState(249);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Lua55GrammarParser::T__2) {
          setState(247);
          match(Lua55GrammarParser::T__2);
          setState(248);
          vararg();
        }
        break;
      }

      case Lua55GrammarParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(251);
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
  enterRule(_localctx, 42, Lua55GrammarParser::RuleVararg);
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
    setState(254);
    match(Lua55GrammarParser::T__10);
    setState(256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::ID) {
      setState(255);
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
  enterRule(_localctx, 44, Lua55GrammarParser::RuleNamelist);

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
    setState(258);
    name();
    setState(263);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(259);
        match(Lua55GrammarParser::T__2);
        setState(260);
        name(); 
      }
      setState(265);
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
  enterRule(_localctx, 46, Lua55GrammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(Lua55GrammarParser::WHILE);
    setState(267);
    exp();
    setState(268);
    match(Lua55GrammarParser::DO);
    setState(269);
    block();
    setState(270);
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
  enterRule(_localctx, 48, Lua55GrammarParser::RuleRepeatStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(Lua55GrammarParser::REPEAT);
    setState(273);
    block();
    setState(274);
    match(Lua55GrammarParser::UNTIL);
    setState(275);
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
  enterRule(_localctx, 50, Lua55GrammarParser::RuleIfStatement);
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
    setState(277);
    match(Lua55GrammarParser::IF);
    setState(278);
    exp();
    setState(279);
    match(Lua55GrammarParser::THEN);
    setState(280);
    block();
    setState(288);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::ELSEIF) {
      setState(281);
      match(Lua55GrammarParser::ELSEIF);
      setState(282);
      exp();
      setState(283);
      match(Lua55GrammarParser::THEN);
      setState(284);
      block();
      setState(290);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::ELSE) {
      setState(291);
      match(Lua55GrammarParser::ELSE);
      setState(292);
      block();
    }
    setState(295);
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
  enterRule(_localctx, 52, Lua55GrammarParser::RuleNumericForStatement);
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
    setState(297);
    match(Lua55GrammarParser::FOR);
    setState(298);
    name();
    setState(299);
    match(Lua55GrammarParser::T__1);
    setState(300);
    exp();
    setState(301);
    match(Lua55GrammarParser::T__2);
    setState(302);
    exp();
    setState(305);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__2) {
      setState(303);
      match(Lua55GrammarParser::T__2);
      setState(304);
      exp();
    }
    setState(307);
    match(Lua55GrammarParser::DO);
    setState(308);
    block();
    setState(309);
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
  enterRule(_localctx, 54, Lua55GrammarParser::RuleGenericForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(Lua55GrammarParser::FOR);
    setState(312);
    namelist();
    setState(313);
    match(Lua55GrammarParser::IN);
    setState(314);
    explist();
    setState(315);
    match(Lua55GrammarParser::DO);
    setState(316);
    block();
    setState(317);
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
  enterRule(_localctx, 56, Lua55GrammarParser::RuleGotoStatement);

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
    match(Lua55GrammarParser::GOTO);
    setState(320);
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
  enterRule(_localctx, 58, Lua55GrammarParser::RuleLabelStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    match(Lua55GrammarParser::T__11);
    setState(323);
    name();
    setState(324);
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
  enterRule(_localctx, 60, Lua55GrammarParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
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
  enterRule(_localctx, 62, Lua55GrammarParser::RuleReturnStatement);
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
    setState(328);
    match(Lua55GrammarParser::RETURN);
    setState(330);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100134723099042304) != 0)) {
      setState(329);
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
  enterRule(_localctx, 64, Lua55GrammarParser::RuleFuncCallStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
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
  enterRule(_localctx, 66, Lua55GrammarParser::RuleFuncAnon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    match(Lua55GrammarParser::FUNCTION);
    setState(335);
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
  enterRule(_localctx, 68, Lua55GrammarParser::RuleTableConstructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(343);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(337);
      match(Lua55GrammarParser::T__12);
      setState(338);
      fieldlist();
      setState(339);
      match(Lua55GrammarParser::T__13);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(341);
      match(Lua55GrammarParser::T__12);
      setState(342);
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
  enterRule(_localctx, 70, Lua55GrammarParser::RuleFieldlist);
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
    setState(345);
    field();
    setState(350);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(346);
        match(Lua55GrammarParser::FIELD_SEP);
        setState(347);
        field(); 
      }
      setState(352);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
    setState(354);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::FIELD_SEP) {
      setState(353);
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
  enterRule(_localctx, 72, Lua55GrammarParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(356);
      match(Lua55GrammarParser::T__14);
      setState(357);
      exp();
      setState(358);
      match(Lua55GrammarParser::T__15);
      setState(359);
      match(Lua55GrammarParser::T__1);
      setState(360);
      exp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(362);
      name();
      setState(363);
      match(Lua55GrammarParser::T__1);
      setState(364);
      exp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(366);
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
  enterRule(_localctx, 74, Lua55GrammarParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(374);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(369);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(370);
      funcAnon();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(371);
      prefixexp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(372);
      tableConstructor();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(373);
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
  enterRule(_localctx, 76, Lua55GrammarParser::RuleOpExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
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
  enterRule(_localctx, 78, Lua55GrammarParser::RuleOrExp);
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
    setState(378);
    andExp();
    setState(383);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::OR) {
      setState(379);
      match(Lua55GrammarParser::OR);
      setState(380);
      andExp();
      setState(385);
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
  enterRule(_localctx, 80, Lua55GrammarParser::RuleAndExp);
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
    setState(386);
    compExp();
    setState(391);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::AND) {
      setState(387);
      match(Lua55GrammarParser::AND);
      setState(388);
      compExp();
      setState(393);
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
  enterRule(_localctx, 82, Lua55GrammarParser::RuleCompExp);
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
    setState(394);
    bitorExp();
    setState(397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::COMPOP) {
      setState(395);
      match(Lua55GrammarParser::COMPOP);
      setState(396);
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
  enterRule(_localctx, 84, Lua55GrammarParser::RuleBitorExp);
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
    setState(399);
    bitxorExp();
    setState(404);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__16) {
      setState(400);
      match(Lua55GrammarParser::T__16);
      setState(401);
      bitxorExp();
      setState(406);
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
  enterRule(_localctx, 86, Lua55GrammarParser::RuleBitxorExp);
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
    setState(407);
    bitandExp();
    setState(412);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__17) {
      setState(408);
      match(Lua55GrammarParser::T__17);
      setState(409);
      bitandExp();
      setState(414);
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
  enterRule(_localctx, 88, Lua55GrammarParser::RuleBitandExp);
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
    setState(415);
    shiftExp();
    setState(420);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__18) {
      setState(416);
      match(Lua55GrammarParser::T__18);
      setState(417);
      shiftExp();
      setState(422);
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
  enterRule(_localctx, 90, Lua55GrammarParser::RuleShiftExp);
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
    setState(423);
    concatExp();
    setState(428);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::SHIFTOP) {
      setState(424);
      match(Lua55GrammarParser::SHIFTOP);
      setState(425);
      concatExp();
      setState(430);
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
  enterRule(_localctx, 92, Lua55GrammarParser::RuleConcatExp);
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
    setState(431);
    plusExp();
    setState(436);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::T__19) {
      setState(432);
      match(Lua55GrammarParser::T__19);
      setState(433);
      plusExp();
      setState(438);
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
  enterRule(_localctx, 94, Lua55GrammarParser::RulePlusExp);
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
    setState(439);
    mulExp();
    setState(444);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::PLUSOP) {
      setState(440);
      match(Lua55GrammarParser::PLUSOP);
      setState(441);
      mulExp();
      setState(446);
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
  enterRule(_localctx, 96, Lua55GrammarParser::RuleMulExp);
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
    setState(447);
    unaryExp();
    setState(452);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Lua55GrammarParser::MULOP) {
      setState(448);
      match(Lua55GrammarParser::MULOP);
      setState(449);
      unaryExp();
      setState(454);
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
  enterRule(_localctx, 98, Lua55GrammarParser::RuleUnaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(458);
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
        setState(455);
        powExp();
        break;
      }

      case Lua55GrammarParser::UNOP: {
        enterOuterAlt(_localctx, 2);
        setState(456);
        match(Lua55GrammarParser::UNOP);
        setState(457);
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
  enterRule(_localctx, 100, Lua55GrammarParser::RulePowExp);
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
    setState(460);
    opStartExp();
    setState(463);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Lua55GrammarParser::T__20) {
      setState(461);
      match(Lua55GrammarParser::T__20);
      setState(462);
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
  enterRule(_localctx, 102, Lua55GrammarParser::RuleOpStartExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(468);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__8:
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(465);
        prefixexp();
        break;
      }

      case Lua55GrammarParser::NIL:
      case Lua55GrammarParser::TRUE:
      case Lua55GrammarParser::FALSE:
      case Lua55GrammarParser::NUMBER:
      case Lua55GrammarParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(466);
        literal();
        break;
      }

      case Lua55GrammarParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(467);
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
  enterRule(_localctx, 104, Lua55GrammarParser::RuleLiteral);
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
    setState(470);
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
  enterRule(_localctx, 106, Lua55GrammarParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(478);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(472);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(473);
      match(Lua55GrammarParser::T__8);
      setState(474);
      exp();
      setState(475);
      match(Lua55GrammarParser::T__9);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(477);
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
  enterRule(_localctx, 108, Lua55GrammarParser::RuleFuncCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(494);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(480);
      var();
      setState(482); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(481);
                funcCall_tail();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(484); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(486);
      match(Lua55GrammarParser::T__8);
      setState(487);
      exp();
      setState(488);
      match(Lua55GrammarParser::T__9);
      setState(490); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(489);
                funcCall_tail();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(492); 
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
  enterRule(_localctx, 110, Lua55GrammarParser::RuleFuncCall_tail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(501);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(496);
        args();
        break;
      }

      case Lua55GrammarParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(497);
        match(Lua55GrammarParser::T__6);
        setState(498);
        name();
        setState(499);
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
  enterRule(_localctx, 112, Lua55GrammarParser::RuleArgs);
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
    setState(503);
    match(Lua55GrammarParser::T__8);
    setState(505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100134723099042304) != 0)) {
      setState(504);
      explist();
    }
    setState(507);
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
  enterRule(_localctx, 114, Lua55GrammarParser::RuleVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(524);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(509);
        name();
        setState(513);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Lua55GrammarParser::T__7

        || _la == Lua55GrammarParser::T__14) {
          setState(510);
          var_tail();
          setState(515);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case Lua55GrammarParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(516);
        match(Lua55GrammarParser::T__8);
        setState(517);
        exp();
        setState(518);
        match(Lua55GrammarParser::T__9);
        setState(520); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(519);
          var_tail();
          setState(522); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == Lua55GrammarParser::T__7

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
  enterRule(_localctx, 116, Lua55GrammarParser::RuleVar_tail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(532);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Lua55GrammarParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(526);
        match(Lua55GrammarParser::T__14);
        setState(527);
        exp();
        setState(528);
        match(Lua55GrammarParser::T__15);
        break;
      }

      case Lua55GrammarParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(530);
        match(Lua55GrammarParser::T__7);
        setState(531);
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
  enterRule(_localctx, 118, Lua55GrammarParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
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
