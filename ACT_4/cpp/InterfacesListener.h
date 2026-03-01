
// Generated from Interfaces.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "InterfacesParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by InterfacesParser.
 */
class  InterfacesListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterConfigFile(InterfacesParser::ConfigFileContext *ctx) = 0;
  virtual void exitConfigFile(InterfacesParser::ConfigFileContext *ctx) = 0;

  virtual void enterLine(InterfacesParser::LineContext *ctx) = 0;
  virtual void exitLine(InterfacesParser::LineContext *ctx) = 0;

  virtual void enterAutoStmt(InterfacesParser::AutoStmtContext *ctx) = 0;
  virtual void exitAutoStmt(InterfacesParser::AutoStmtContext *ctx) = 0;

  virtual void enterIfaceStmt(InterfacesParser::IfaceStmtContext *ctx) = 0;
  virtual void exitIfaceStmt(InterfacesParser::IfaceStmtContext *ctx) = 0;

  virtual void enterOptionStmt(InterfacesParser::OptionStmtContext *ctx) = 0;
  virtual void exitOptionStmt(InterfacesParser::OptionStmtContext *ctx) = 0;

  virtual void enterVal(InterfacesParser::ValContext *ctx) = 0;
  virtual void exitVal(InterfacesParser::ValContext *ctx) = 0;


};

