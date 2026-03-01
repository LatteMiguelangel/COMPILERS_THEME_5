// Code generated from Interfaces.g4 by ANTLR 4.13.2. DO NOT EDIT.

package main // Interfaces
import "github.com/antlr4-go/antlr/v4"

// BaseInterfacesListener is a complete listener for a parse tree produced by InterfacesParser.
type BaseInterfacesListener struct{}

var _ InterfacesListener = &BaseInterfacesListener{}

// VisitTerminal is called when a terminal node is visited.
func (s *BaseInterfacesListener) VisitTerminal(node antlr.TerminalNode) {}

// VisitErrorNode is called when an error node is visited.
func (s *BaseInterfacesListener) VisitErrorNode(node antlr.ErrorNode) {}

// EnterEveryRule is called when any rule is entered.
func (s *BaseInterfacesListener) EnterEveryRule(ctx antlr.ParserRuleContext) {}

// ExitEveryRule is called when any rule is exited.
func (s *BaseInterfacesListener) ExitEveryRule(ctx antlr.ParserRuleContext) {}

// EnterConfigFile is called when production configFile is entered.
func (s *BaseInterfacesListener) EnterConfigFile(ctx *ConfigFileContext) {}

// ExitConfigFile is called when production configFile is exited.
func (s *BaseInterfacesListener) ExitConfigFile(ctx *ConfigFileContext) {}

// EnterLine is called when production line is entered.
func (s *BaseInterfacesListener) EnterLine(ctx *LineContext) {}

// ExitLine is called when production line is exited.
func (s *BaseInterfacesListener) ExitLine(ctx *LineContext) {}

// EnterAutoStmt is called when production autoStmt is entered.
func (s *BaseInterfacesListener) EnterAutoStmt(ctx *AutoStmtContext) {}

// ExitAutoStmt is called when production autoStmt is exited.
func (s *BaseInterfacesListener) ExitAutoStmt(ctx *AutoStmtContext) {}

// EnterIfaceStmt is called when production ifaceStmt is entered.
func (s *BaseInterfacesListener) EnterIfaceStmt(ctx *IfaceStmtContext) {}

// ExitIfaceStmt is called when production ifaceStmt is exited.
func (s *BaseInterfacesListener) ExitIfaceStmt(ctx *IfaceStmtContext) {}

// EnterOptionStmt is called when production optionStmt is entered.
func (s *BaseInterfacesListener) EnterOptionStmt(ctx *OptionStmtContext) {}

// ExitOptionStmt is called when production optionStmt is exited.
func (s *BaseInterfacesListener) ExitOptionStmt(ctx *OptionStmtContext) {}

// EnterVal is called when production val is entered.
func (s *BaseInterfacesListener) EnterVal(ctx *ValContext) {}

// ExitVal is called when production val is exited.
func (s *BaseInterfacesListener) ExitVal(ctx *ValContext) {}
