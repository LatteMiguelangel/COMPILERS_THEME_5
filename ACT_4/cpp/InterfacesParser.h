
// Generated from Interfaces.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  InterfacesParser : public antlr4::Parser {
public:
  enum {
    WS = 1, COMMENT = 2, NEWLINE = 3, AUTO = 4, IFACE = 5, FAMILY = 6, METHOD = 7, 
    OPTION_NAME = 8, ID = 9, VALUE_STR = 10
  };

  enum {
    RuleConfigFile = 0, RuleLine = 1, RuleAutoStmt = 2, RuleIfaceStmt = 3, 
    RuleOptionStmt = 4, RuleVal = 5
  };

  explicit InterfacesParser(antlr4::TokenStream *input);

  InterfacesParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~InterfacesParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ConfigFileContext;
  class LineContext;
  class AutoStmtContext;
  class IfaceStmtContext;
  class OptionStmtContext;
  class ValContext; 

  class  ConfigFileContext : public antlr4::ParserRuleContext {
  public:
    ConfigFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConfigFileContext* configFile();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AutoStmtContext *autoStmt();
    IfaceStmtContext *ifaceStmt();
    OptionStmtContext *optionStmt();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineContext* line();

  class  AutoStmtContext : public antlr4::ParserRuleContext {
  public:
    AutoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTO();
    ValContext *val();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AutoStmtContext* autoStmt();

  class  IfaceStmtContext : public antlr4::ParserRuleContext {
  public:
    IfaceStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IFACE();
    ValContext *val();
    antlr4::tree::TerminalNode *FAMILY();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfaceStmtContext* ifaceStmt();

  class  OptionStmtContext : public antlr4::ParserRuleContext {
  public:
    OptionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION_NAME();
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<ValContext *> val();
    ValContext* val(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionStmtContext* optionStmt();

  class  ValContext : public antlr4::ParserRuleContext {
  public:
    ValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *VALUE_STR();
    antlr4::tree::TerminalNode *FAMILY();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *AUTO();
    antlr4::tree::TerminalNode *IFACE();
    antlr4::tree::TerminalNode *OPTION_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValContext* val();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

