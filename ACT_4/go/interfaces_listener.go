// Code generated from Interfaces.g4 by ANTLR 4.13.2. DO NOT EDIT.

package main // Interfaces
import "github.com/antlr4-go/antlr/v4"

// InterfacesListener is a complete listener for a parse tree produced by InterfacesParser.
type InterfacesListener interface {
	antlr.ParseTreeListener

	// EnterConfigFile is called when entering the configFile production.
	EnterConfigFile(c *ConfigFileContext)

	// EnterLine is called when entering the line production.
	EnterLine(c *LineContext)

	// EnterAutoStmt is called when entering the autoStmt production.
	EnterAutoStmt(c *AutoStmtContext)

	// EnterIfaceStmt is called when entering the ifaceStmt production.
	EnterIfaceStmt(c *IfaceStmtContext)

	// EnterOptionStmt is called when entering the optionStmt production.
	EnterOptionStmt(c *OptionStmtContext)

	// EnterVal is called when entering the val production.
	EnterVal(c *ValContext)

	// ExitConfigFile is called when exiting the configFile production.
	ExitConfigFile(c *ConfigFileContext)

	// ExitLine is called when exiting the line production.
	ExitLine(c *LineContext)

	// ExitAutoStmt is called when exiting the autoStmt production.
	ExitAutoStmt(c *AutoStmtContext)

	// ExitIfaceStmt is called when exiting the ifaceStmt production.
	ExitIfaceStmt(c *IfaceStmtContext)

	// ExitOptionStmt is called when exiting the optionStmt production.
	ExitOptionStmt(c *OptionStmtContext)

	// ExitVal is called when exiting the val production.
	ExitVal(c *ValContext)
}
