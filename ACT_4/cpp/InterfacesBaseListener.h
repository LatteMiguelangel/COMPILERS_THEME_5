
// Generated from Interfaces.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "InterfacesListener.h"


/**
 * This class provides an empty implementation of InterfacesListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  InterfacesBaseListener : public InterfacesListener {
public:

  virtual void enterConfigFile(InterfacesParser::ConfigFileContext * /*ctx*/) override { }
  virtual void exitConfigFile(InterfacesParser::ConfigFileContext * /*ctx*/) override { }

  virtual void enterLine(InterfacesParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(InterfacesParser::LineContext * /*ctx*/) override { }

  virtual void enterAutoStmt(InterfacesParser::AutoStmtContext * /*ctx*/) override { }
  virtual void exitAutoStmt(InterfacesParser::AutoStmtContext * /*ctx*/) override { }

  virtual void enterIfaceStmt(InterfacesParser::IfaceStmtContext * /*ctx*/) override { }
  virtual void exitIfaceStmt(InterfacesParser::IfaceStmtContext * /*ctx*/) override { }

  virtual void enterOptionStmt(InterfacesParser::OptionStmtContext * /*ctx*/) override { }
  virtual void exitOptionStmt(InterfacesParser::OptionStmtContext * /*ctx*/) override { }

  virtual void enterVal(InterfacesParser::ValContext * /*ctx*/) override { }
  virtual void exitVal(InterfacesParser::ValContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

