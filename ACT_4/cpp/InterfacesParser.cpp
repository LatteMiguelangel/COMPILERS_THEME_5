
// Generated from Interfaces.g4 by ANTLR 4.13.2


#include "InterfacesListener.h"

#include "InterfacesParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct InterfacesParserStaticData final {
  InterfacesParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  InterfacesParserStaticData(const InterfacesParserStaticData&) = delete;
  InterfacesParserStaticData(InterfacesParserStaticData&&) = delete;
  InterfacesParserStaticData& operator=(const InterfacesParserStaticData&) = delete;
  InterfacesParserStaticData& operator=(InterfacesParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag interfacesParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<InterfacesParserStaticData> interfacesParserStaticData = nullptr;

void interfacesParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (interfacesParserStaticData != nullptr) {
    return;
  }
#else
  assert(interfacesParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<InterfacesParserStaticData>(
    std::vector<std::string>{
      "configFile", "line", "autoStmt", "ifaceStmt", "optionStmt", "val"
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
  	4,1,10,47,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,5,0,14,
  	8,0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,25,8,1,1,2,1,2,1,2,1,
  	2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,4,4,39,8,4,11,4,12,4,40,1,4,1,4,1,5,
  	1,5,1,5,0,0,6,0,2,4,6,8,10,0,1,1,0,4,10,45,0,15,1,0,0,0,2,24,1,0,0,0,
  	4,26,1,0,0,0,6,30,1,0,0,0,8,36,1,0,0,0,10,44,1,0,0,0,12,14,3,2,1,0,13,
  	12,1,0,0,0,14,17,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,18,1,0,0,0,17,
  	15,1,0,0,0,18,19,5,0,0,1,19,1,1,0,0,0,20,25,3,4,2,0,21,25,3,6,3,0,22,
  	25,3,8,4,0,23,25,5,3,0,0,24,20,1,0,0,0,24,21,1,0,0,0,24,22,1,0,0,0,24,
  	23,1,0,0,0,25,3,1,0,0,0,26,27,5,4,0,0,27,28,3,10,5,0,28,29,5,3,0,0,29,
  	5,1,0,0,0,30,31,5,5,0,0,31,32,3,10,5,0,32,33,5,6,0,0,33,34,5,7,0,0,34,
  	35,5,3,0,0,35,7,1,0,0,0,36,38,5,8,0,0,37,39,3,10,5,0,38,37,1,0,0,0,39,
  	40,1,0,0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,42,1,0,0,0,42,43,5,3,0,0,43,
  	9,1,0,0,0,44,45,7,0,0,0,45,11,1,0,0,0,3,15,24,40
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  interfacesParserStaticData = std::move(staticData);
}

}

InterfacesParser::InterfacesParser(TokenStream *input) : InterfacesParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

InterfacesParser::InterfacesParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  InterfacesParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *interfacesParserStaticData->atn, interfacesParserStaticData->decisionToDFA, interfacesParserStaticData->sharedContextCache, options);
}

InterfacesParser::~InterfacesParser() {
  delete _interpreter;
}

const atn::ATN& InterfacesParser::getATN() const {
  return *interfacesParserStaticData->atn;
}

std::string InterfacesParser::getGrammarFileName() const {
  return "Interfaces.g4";
}

const std::vector<std::string>& InterfacesParser::getRuleNames() const {
  return interfacesParserStaticData->ruleNames;
}

const dfa::Vocabulary& InterfacesParser::getVocabulary() const {
  return interfacesParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView InterfacesParser::getSerializedATN() const {
  return interfacesParserStaticData->serializedATN;
}


//----------------- ConfigFileContext ------------------------------------------------------------------

InterfacesParser::ConfigFileContext::ConfigFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InterfacesParser::ConfigFileContext::EOF() {
  return getToken(InterfacesParser::EOF, 0);
}

std::vector<InterfacesParser::LineContext *> InterfacesParser::ConfigFileContext::line() {
  return getRuleContexts<InterfacesParser::LineContext>();
}

InterfacesParser::LineContext* InterfacesParser::ConfigFileContext::line(size_t i) {
  return getRuleContext<InterfacesParser::LineContext>(i);
}


size_t InterfacesParser::ConfigFileContext::getRuleIndex() const {
  return InterfacesParser::RuleConfigFile;
}

void InterfacesParser::ConfigFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConfigFile(this);
}

void InterfacesParser::ConfigFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConfigFile(this);
}

InterfacesParser::ConfigFileContext* InterfacesParser::configFile() {
  ConfigFileContext *_localctx = _tracker.createInstance<ConfigFileContext>(_ctx, getState());
  enterRule(_localctx, 0, InterfacesParser::RuleConfigFile);
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
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 312) != 0)) {
      setState(12);
      line();
      setState(17);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(18);
    match(InterfacesParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

InterfacesParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

InterfacesParser::AutoStmtContext* InterfacesParser::LineContext::autoStmt() {
  return getRuleContext<InterfacesParser::AutoStmtContext>(0);
}

InterfacesParser::IfaceStmtContext* InterfacesParser::LineContext::ifaceStmt() {
  return getRuleContext<InterfacesParser::IfaceStmtContext>(0);
}

InterfacesParser::OptionStmtContext* InterfacesParser::LineContext::optionStmt() {
  return getRuleContext<InterfacesParser::OptionStmtContext>(0);
}

tree::TerminalNode* InterfacesParser::LineContext::NEWLINE() {
  return getToken(InterfacesParser::NEWLINE, 0);
}


size_t InterfacesParser::LineContext::getRuleIndex() const {
  return InterfacesParser::RuleLine;
}

void InterfacesParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void InterfacesParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}

InterfacesParser::LineContext* InterfacesParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, InterfacesParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(24);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case InterfacesParser::AUTO: {
        enterOuterAlt(_localctx, 1);
        setState(20);
        autoStmt();
        break;
      }

      case InterfacesParser::IFACE: {
        enterOuterAlt(_localctx, 2);
        setState(21);
        ifaceStmt();
        break;
      }

      case InterfacesParser::OPTION_NAME: {
        enterOuterAlt(_localctx, 3);
        setState(22);
        optionStmt();
        break;
      }

      case InterfacesParser::NEWLINE: {
        enterOuterAlt(_localctx, 4);
        setState(23);
        match(InterfacesParser::NEWLINE);
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

//----------------- AutoStmtContext ------------------------------------------------------------------

InterfacesParser::AutoStmtContext::AutoStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InterfacesParser::AutoStmtContext::AUTO() {
  return getToken(InterfacesParser::AUTO, 0);
}

InterfacesParser::ValContext* InterfacesParser::AutoStmtContext::val() {
  return getRuleContext<InterfacesParser::ValContext>(0);
}

tree::TerminalNode* InterfacesParser::AutoStmtContext::NEWLINE() {
  return getToken(InterfacesParser::NEWLINE, 0);
}


size_t InterfacesParser::AutoStmtContext::getRuleIndex() const {
  return InterfacesParser::RuleAutoStmt;
}

void InterfacesParser::AutoStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAutoStmt(this);
}

void InterfacesParser::AutoStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAutoStmt(this);
}

InterfacesParser::AutoStmtContext* InterfacesParser::autoStmt() {
  AutoStmtContext *_localctx = _tracker.createInstance<AutoStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, InterfacesParser::RuleAutoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(InterfacesParser::AUTO);
    setState(27);
    val();
    setState(28);
    match(InterfacesParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfaceStmtContext ------------------------------------------------------------------

InterfacesParser::IfaceStmtContext::IfaceStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InterfacesParser::IfaceStmtContext::IFACE() {
  return getToken(InterfacesParser::IFACE, 0);
}

InterfacesParser::ValContext* InterfacesParser::IfaceStmtContext::val() {
  return getRuleContext<InterfacesParser::ValContext>(0);
}

tree::TerminalNode* InterfacesParser::IfaceStmtContext::FAMILY() {
  return getToken(InterfacesParser::FAMILY, 0);
}

tree::TerminalNode* InterfacesParser::IfaceStmtContext::METHOD() {
  return getToken(InterfacesParser::METHOD, 0);
}

tree::TerminalNode* InterfacesParser::IfaceStmtContext::NEWLINE() {
  return getToken(InterfacesParser::NEWLINE, 0);
}


size_t InterfacesParser::IfaceStmtContext::getRuleIndex() const {
  return InterfacesParser::RuleIfaceStmt;
}

void InterfacesParser::IfaceStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfaceStmt(this);
}

void InterfacesParser::IfaceStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfaceStmt(this);
}

InterfacesParser::IfaceStmtContext* InterfacesParser::ifaceStmt() {
  IfaceStmtContext *_localctx = _tracker.createInstance<IfaceStmtContext>(_ctx, getState());
  enterRule(_localctx, 6, InterfacesParser::RuleIfaceStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(InterfacesParser::IFACE);
    setState(31);
    val();
    setState(32);
    match(InterfacesParser::FAMILY);
    setState(33);
    match(InterfacesParser::METHOD);
    setState(34);
    match(InterfacesParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionStmtContext ------------------------------------------------------------------

InterfacesParser::OptionStmtContext::OptionStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InterfacesParser::OptionStmtContext::OPTION_NAME() {
  return getToken(InterfacesParser::OPTION_NAME, 0);
}

tree::TerminalNode* InterfacesParser::OptionStmtContext::NEWLINE() {
  return getToken(InterfacesParser::NEWLINE, 0);
}

std::vector<InterfacesParser::ValContext *> InterfacesParser::OptionStmtContext::val() {
  return getRuleContexts<InterfacesParser::ValContext>();
}

InterfacesParser::ValContext* InterfacesParser::OptionStmtContext::val(size_t i) {
  return getRuleContext<InterfacesParser::ValContext>(i);
}


size_t InterfacesParser::OptionStmtContext::getRuleIndex() const {
  return InterfacesParser::RuleOptionStmt;
}

void InterfacesParser::OptionStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionStmt(this);
}

void InterfacesParser::OptionStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionStmt(this);
}

InterfacesParser::OptionStmtContext* InterfacesParser::optionStmt() {
  OptionStmtContext *_localctx = _tracker.createInstance<OptionStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, InterfacesParser::RuleOptionStmt);
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
    setState(36);
    match(InterfacesParser::OPTION_NAME);
    setState(38); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(37);
      val();
      setState(40); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2032) != 0));
    setState(42);
    match(InterfacesParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValContext ------------------------------------------------------------------

InterfacesParser::ValContext::ValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* InterfacesParser::ValContext::ID() {
  return getToken(InterfacesParser::ID, 0);
}

tree::TerminalNode* InterfacesParser::ValContext::VALUE_STR() {
  return getToken(InterfacesParser::VALUE_STR, 0);
}

tree::TerminalNode* InterfacesParser::ValContext::FAMILY() {
  return getToken(InterfacesParser::FAMILY, 0);
}

tree::TerminalNode* InterfacesParser::ValContext::METHOD() {
  return getToken(InterfacesParser::METHOD, 0);
}

tree::TerminalNode* InterfacesParser::ValContext::AUTO() {
  return getToken(InterfacesParser::AUTO, 0);
}

tree::TerminalNode* InterfacesParser::ValContext::IFACE() {
  return getToken(InterfacesParser::IFACE, 0);
}

tree::TerminalNode* InterfacesParser::ValContext::OPTION_NAME() {
  return getToken(InterfacesParser::OPTION_NAME, 0);
}


size_t InterfacesParser::ValContext::getRuleIndex() const {
  return InterfacesParser::RuleVal;
}

void InterfacesParser::ValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVal(this);
}

void InterfacesParser::ValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<InterfacesListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVal(this);
}

InterfacesParser::ValContext* InterfacesParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 10, InterfacesParser::RuleVal);
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
    setState(44);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2032) != 0))) {
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

void InterfacesParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  interfacesParserInitialize();
#else
  ::antlr4::internal::call_once(interfacesParserOnceFlag, interfacesParserInitialize);
#endif
}
