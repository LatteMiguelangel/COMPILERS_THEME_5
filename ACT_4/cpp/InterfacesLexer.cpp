
// Generated from Interfaces.g4 by ANTLR 4.13.2


#include "InterfacesLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct InterfacesLexerStaticData final {
  InterfacesLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  InterfacesLexerStaticData(const InterfacesLexerStaticData&) = delete;
  InterfacesLexerStaticData(InterfacesLexerStaticData&&) = delete;
  InterfacesLexerStaticData& operator=(const InterfacesLexerStaticData&) = delete;
  InterfacesLexerStaticData& operator=(InterfacesLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag interfaceslexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<InterfacesLexerStaticData> interfaceslexerLexerStaticData = nullptr;

void interfaceslexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (interfaceslexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(interfaceslexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<InterfacesLexerStaticData>(
    std::vector<std::string>{
      "WS", "COMMENT", "NEWLINE", "AUTO", "IFACE", "FAMILY", "METHOD", "OPTION_NAME", 
      "ID", "VALUE_STR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "'auto'", "'iface'"
    },
    std::vector<std::string>{
      "", "WS", "COMMENT", "NEWLINE", "AUTO", "IFACE", "FAMILY", "METHOD", 
      "OPTION_NAME", "ID", "VALUE_STR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,10,154,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,1,0,4,0,23,8,0,11,0,12,0,24,1,0,1,0,1,1,1,1,
  	5,1,31,8,1,10,1,12,1,34,9,1,1,1,1,1,1,2,3,2,39,8,2,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	3,5,63,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,89,8,6,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,143,8,7,1,8,4,8,146,
  	8,8,11,8,12,8,147,1,9,4,9,151,8,9,11,9,12,9,152,0,0,10,1,1,3,2,5,3,7,
  	4,9,5,11,6,13,7,15,8,17,9,19,10,1,0,4,2,0,9,9,32,32,2,0,10,10,13,13,4,
  	0,48,57,65,90,95,95,97,122,4,0,9,10,13,13,32,32,35,35,167,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,1,22,1,0,0,0,3,28,1,0,0,0,
  	5,38,1,0,0,0,7,42,1,0,0,0,9,47,1,0,0,0,11,62,1,0,0,0,13,88,1,0,0,0,15,
  	142,1,0,0,0,17,145,1,0,0,0,19,150,1,0,0,0,21,23,7,0,0,0,22,21,1,0,0,0,
  	23,24,1,0,0,0,24,22,1,0,0,0,24,25,1,0,0,0,25,26,1,0,0,0,26,27,6,0,0,0,
  	27,2,1,0,0,0,28,32,5,35,0,0,29,31,8,1,0,0,30,29,1,0,0,0,31,34,1,0,0,0,
  	32,30,1,0,0,0,32,33,1,0,0,0,33,35,1,0,0,0,34,32,1,0,0,0,35,36,6,1,0,0,
  	36,4,1,0,0,0,37,39,5,13,0,0,38,37,1,0,0,0,38,39,1,0,0,0,39,40,1,0,0,0,
  	40,41,5,10,0,0,41,6,1,0,0,0,42,43,5,97,0,0,43,44,5,117,0,0,44,45,5,116,
  	0,0,45,46,5,111,0,0,46,8,1,0,0,0,47,48,5,105,0,0,48,49,5,102,0,0,49,50,
  	5,97,0,0,50,51,5,99,0,0,51,52,5,101,0,0,52,10,1,0,0,0,53,54,5,105,0,0,
  	54,55,5,110,0,0,55,56,5,101,0,0,56,63,5,116,0,0,57,58,5,105,0,0,58,59,
  	5,110,0,0,59,60,5,101,0,0,60,61,5,116,0,0,61,63,5,54,0,0,62,53,1,0,0,
  	0,62,57,1,0,0,0,63,12,1,0,0,0,64,65,5,115,0,0,65,66,5,116,0,0,66,67,5,
  	97,0,0,67,68,5,116,0,0,68,69,5,105,0,0,69,89,5,99,0,0,70,71,5,100,0,0,
  	71,72,5,104,0,0,72,73,5,99,0,0,73,89,5,112,0,0,74,75,5,108,0,0,75,76,
  	5,111,0,0,76,77,5,111,0,0,77,78,5,112,0,0,78,79,5,98,0,0,79,80,5,97,0,
  	0,80,81,5,99,0,0,81,89,5,107,0,0,82,83,5,109,0,0,83,84,5,97,0,0,84,85,
  	5,110,0,0,85,86,5,117,0,0,86,87,5,97,0,0,87,89,5,108,0,0,88,64,1,0,0,
  	0,88,70,1,0,0,0,88,74,1,0,0,0,88,82,1,0,0,0,89,14,1,0,0,0,90,91,5,97,
  	0,0,91,92,5,100,0,0,92,93,5,100,0,0,93,94,5,114,0,0,94,95,5,101,0,0,95,
  	96,5,115,0,0,96,143,5,115,0,0,97,98,5,110,0,0,98,99,5,101,0,0,99,100,
  	5,116,0,0,100,101,5,109,0,0,101,102,5,97,0,0,102,103,5,115,0,0,103,143,
  	5,107,0,0,104,105,5,103,0,0,105,106,5,97,0,0,106,107,5,116,0,0,107,108,
  	5,101,0,0,108,109,5,119,0,0,109,110,5,97,0,0,110,143,5,121,0,0,111,112,
  	5,110,0,0,112,113,5,101,0,0,113,114,5,116,0,0,114,115,5,119,0,0,115,116,
  	5,111,0,0,116,117,5,114,0,0,117,143,5,107,0,0,118,119,5,98,0,0,119,120,
  	5,114,0,0,120,121,5,111,0,0,121,122,5,97,0,0,122,123,5,100,0,0,123,124,
  	5,99,0,0,124,125,5,97,0,0,125,126,5,115,0,0,126,143,5,116,0,0,127,128,
  	5,100,0,0,128,129,5,110,0,0,129,130,5,115,0,0,130,131,5,45,0,0,131,132,
  	5,110,0,0,132,133,5,97,0,0,133,134,5,109,0,0,134,135,5,101,0,0,135,136,
  	5,115,0,0,136,137,5,101,0,0,137,138,5,114,0,0,138,139,5,118,0,0,139,140,
  	5,101,0,0,140,141,5,114,0,0,141,143,5,115,0,0,142,90,1,0,0,0,142,97,1,
  	0,0,0,142,104,1,0,0,0,142,111,1,0,0,0,142,118,1,0,0,0,142,127,1,0,0,0,
  	143,16,1,0,0,0,144,146,7,2,0,0,145,144,1,0,0,0,146,147,1,0,0,0,147,145,
  	1,0,0,0,147,148,1,0,0,0,148,18,1,0,0,0,149,151,8,3,0,0,150,149,1,0,0,
  	0,151,152,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,20,1,0,0,0,9,0,
  	24,32,38,62,88,142,147,152,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  interfaceslexerLexerStaticData = std::move(staticData);
}

}

InterfacesLexer::InterfacesLexer(CharStream *input) : Lexer(input) {
  InterfacesLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *interfaceslexerLexerStaticData->atn, interfaceslexerLexerStaticData->decisionToDFA, interfaceslexerLexerStaticData->sharedContextCache);
}

InterfacesLexer::~InterfacesLexer() {
  delete _interpreter;
}

std::string InterfacesLexer::getGrammarFileName() const {
  return "Interfaces.g4";
}

const std::vector<std::string>& InterfacesLexer::getRuleNames() const {
  return interfaceslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& InterfacesLexer::getChannelNames() const {
  return interfaceslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& InterfacesLexer::getModeNames() const {
  return interfaceslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& InterfacesLexer::getVocabulary() const {
  return interfaceslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView InterfacesLexer::getSerializedATN() const {
  return interfaceslexerLexerStaticData->serializedATN;
}

const atn::ATN& InterfacesLexer::getATN() const {
  return *interfaceslexerLexerStaticData->atn;
}




void InterfacesLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  interfaceslexerLexerInitialize();
#else
  ::antlr4::internal::call_once(interfaceslexerLexerOnceFlag, interfaceslexerLexerInitialize);
#endif
}
