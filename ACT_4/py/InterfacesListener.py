# Generated from Interfaces.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .InterfacesParser import InterfacesParser
else:
    from InterfacesParser import InterfacesParser

# This class defines a complete listener for a parse tree produced by InterfacesParser.
class InterfacesListener(ParseTreeListener):

    # Enter a parse tree produced by InterfacesParser#configFile.
    def enterConfigFile(self, ctx:InterfacesParser.ConfigFileContext):
        pass

    # Exit a parse tree produced by InterfacesParser#configFile.
    def exitConfigFile(self, ctx:InterfacesParser.ConfigFileContext):
        pass


    # Enter a parse tree produced by InterfacesParser#line.
    def enterLine(self, ctx:InterfacesParser.LineContext):
        pass

    # Exit a parse tree produced by InterfacesParser#line.
    def exitLine(self, ctx:InterfacesParser.LineContext):
        pass


    # Enter a parse tree produced by InterfacesParser#autoStmt.
    def enterAutoStmt(self, ctx:InterfacesParser.AutoStmtContext):
        pass

    # Exit a parse tree produced by InterfacesParser#autoStmt.
    def exitAutoStmt(self, ctx:InterfacesParser.AutoStmtContext):
        pass


    # Enter a parse tree produced by InterfacesParser#ifaceStmt.
    def enterIfaceStmt(self, ctx:InterfacesParser.IfaceStmtContext):
        pass

    # Exit a parse tree produced by InterfacesParser#ifaceStmt.
    def exitIfaceStmt(self, ctx:InterfacesParser.IfaceStmtContext):
        pass


    # Enter a parse tree produced by InterfacesParser#optionStmt.
    def enterOptionStmt(self, ctx:InterfacesParser.OptionStmtContext):
        pass

    # Exit a parse tree produced by InterfacesParser#optionStmt.
    def exitOptionStmt(self, ctx:InterfacesParser.OptionStmtContext):
        pass


    # Enter a parse tree produced by InterfacesParser#val.
    def enterVal(self, ctx:InterfacesParser.ValContext):
        pass

    # Exit a parse tree produced by InterfacesParser#val.
    def exitVal(self, ctx:InterfacesParser.ValContext):
        pass



del InterfacesParser