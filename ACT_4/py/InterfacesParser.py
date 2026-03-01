# Generated from Interfaces.g4 by ANTLR 4.13.2
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,10,47,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,5,
        0,14,8,0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,25,8,1,1,2,
        1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,4,4,39,8,4,11,4,12,4,
        40,1,4,1,4,1,5,1,5,1,5,0,0,6,0,2,4,6,8,10,0,1,1,0,4,10,45,0,15,1,
        0,0,0,2,24,1,0,0,0,4,26,1,0,0,0,6,30,1,0,0,0,8,36,1,0,0,0,10,44,
        1,0,0,0,12,14,3,2,1,0,13,12,1,0,0,0,14,17,1,0,0,0,15,13,1,0,0,0,
        15,16,1,0,0,0,16,18,1,0,0,0,17,15,1,0,0,0,18,19,5,0,0,1,19,1,1,0,
        0,0,20,25,3,4,2,0,21,25,3,6,3,0,22,25,3,8,4,0,23,25,5,3,0,0,24,20,
        1,0,0,0,24,21,1,0,0,0,24,22,1,0,0,0,24,23,1,0,0,0,25,3,1,0,0,0,26,
        27,5,4,0,0,27,28,3,10,5,0,28,29,5,3,0,0,29,5,1,0,0,0,30,31,5,5,0,
        0,31,32,3,10,5,0,32,33,5,6,0,0,33,34,5,7,0,0,34,35,5,3,0,0,35,7,
        1,0,0,0,36,38,5,8,0,0,37,39,3,10,5,0,38,37,1,0,0,0,39,40,1,0,0,0,
        40,38,1,0,0,0,40,41,1,0,0,0,41,42,1,0,0,0,42,43,5,3,0,0,43,9,1,0,
        0,0,44,45,7,0,0,0,45,11,1,0,0,0,3,15,24,40
    ]

class InterfacesParser ( Parser ):

    grammarFileName = "Interfaces.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                     "'auto'", "'iface'" ]

    symbolicNames = [ "<INVALID>", "WS", "COMMENT", "NEWLINE", "AUTO", "IFACE", 
                      "FAMILY", "METHOD", "OPTION_NAME", "ID", "VALUE_STR" ]

    RULE_configFile = 0
    RULE_line = 1
    RULE_autoStmt = 2
    RULE_ifaceStmt = 3
    RULE_optionStmt = 4
    RULE_val = 5

    ruleNames =  [ "configFile", "line", "autoStmt", "ifaceStmt", "optionStmt", 
                   "val" ]

    EOF = Token.EOF
    WS=1
    COMMENT=2
    NEWLINE=3
    AUTO=4
    IFACE=5
    FAMILY=6
    METHOD=7
    OPTION_NAME=8
    ID=9
    VALUE_STR=10

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class ConfigFileContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EOF(self):
            return self.getToken(InterfacesParser.EOF, 0)

        def line(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(InterfacesParser.LineContext)
            else:
                return self.getTypedRuleContext(InterfacesParser.LineContext,i)


        def getRuleIndex(self):
            return InterfacesParser.RULE_configFile

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterConfigFile" ):
                listener.enterConfigFile(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitConfigFile" ):
                listener.exitConfigFile(self)




    def configFile(self):

        localctx = InterfacesParser.ConfigFileContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_configFile)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 15
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 312) != 0):
                self.state = 12
                self.line()
                self.state = 17
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 18
            self.match(InterfacesParser.EOF)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class LineContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def autoStmt(self):
            return self.getTypedRuleContext(InterfacesParser.AutoStmtContext,0)


        def ifaceStmt(self):
            return self.getTypedRuleContext(InterfacesParser.IfaceStmtContext,0)


        def optionStmt(self):
            return self.getTypedRuleContext(InterfacesParser.OptionStmtContext,0)


        def NEWLINE(self):
            return self.getToken(InterfacesParser.NEWLINE, 0)

        def getRuleIndex(self):
            return InterfacesParser.RULE_line

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterLine" ):
                listener.enterLine(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitLine" ):
                listener.exitLine(self)




    def line(self):

        localctx = InterfacesParser.LineContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_line)
        try:
            self.state = 24
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [4]:
                self.enterOuterAlt(localctx, 1)
                self.state = 20
                self.autoStmt()
                pass
            elif token in [5]:
                self.enterOuterAlt(localctx, 2)
                self.state = 21
                self.ifaceStmt()
                pass
            elif token in [8]:
                self.enterOuterAlt(localctx, 3)
                self.state = 22
                self.optionStmt()
                pass
            elif token in [3]:
                self.enterOuterAlt(localctx, 4)
                self.state = 23
                self.match(InterfacesParser.NEWLINE)
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AutoStmtContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def AUTO(self):
            return self.getToken(InterfacesParser.AUTO, 0)

        def val(self):
            return self.getTypedRuleContext(InterfacesParser.ValContext,0)


        def NEWLINE(self):
            return self.getToken(InterfacesParser.NEWLINE, 0)

        def getRuleIndex(self):
            return InterfacesParser.RULE_autoStmt

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAutoStmt" ):
                listener.enterAutoStmt(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAutoStmt" ):
                listener.exitAutoStmt(self)




    def autoStmt(self):

        localctx = InterfacesParser.AutoStmtContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_autoStmt)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 26
            self.match(InterfacesParser.AUTO)
            self.state = 27
            self.val()
            self.state = 28
            self.match(InterfacesParser.NEWLINE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class IfaceStmtContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IFACE(self):
            return self.getToken(InterfacesParser.IFACE, 0)

        def val(self):
            return self.getTypedRuleContext(InterfacesParser.ValContext,0)


        def FAMILY(self):
            return self.getToken(InterfacesParser.FAMILY, 0)

        def METHOD(self):
            return self.getToken(InterfacesParser.METHOD, 0)

        def NEWLINE(self):
            return self.getToken(InterfacesParser.NEWLINE, 0)

        def getRuleIndex(self):
            return InterfacesParser.RULE_ifaceStmt

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterIfaceStmt" ):
                listener.enterIfaceStmt(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitIfaceStmt" ):
                listener.exitIfaceStmt(self)




    def ifaceStmt(self):

        localctx = InterfacesParser.IfaceStmtContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_ifaceStmt)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 30
            self.match(InterfacesParser.IFACE)
            self.state = 31
            self.val()
            self.state = 32
            self.match(InterfacesParser.FAMILY)
            self.state = 33
            self.match(InterfacesParser.METHOD)
            self.state = 34
            self.match(InterfacesParser.NEWLINE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OptionStmtContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def OPTION_NAME(self):
            return self.getToken(InterfacesParser.OPTION_NAME, 0)

        def NEWLINE(self):
            return self.getToken(InterfacesParser.NEWLINE, 0)

        def val(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(InterfacesParser.ValContext)
            else:
                return self.getTypedRuleContext(InterfacesParser.ValContext,i)


        def getRuleIndex(self):
            return InterfacesParser.RULE_optionStmt

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterOptionStmt" ):
                listener.enterOptionStmt(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitOptionStmt" ):
                listener.exitOptionStmt(self)




    def optionStmt(self):

        localctx = InterfacesParser.OptionStmtContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_optionStmt)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 36
            self.match(InterfacesParser.OPTION_NAME)
            self.state = 38 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 37
                self.val()
                self.state = 40 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 2032) != 0)):
                    break

            self.state = 42
            self.match(InterfacesParser.NEWLINE)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ValContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(InterfacesParser.ID, 0)

        def VALUE_STR(self):
            return self.getToken(InterfacesParser.VALUE_STR, 0)

        def FAMILY(self):
            return self.getToken(InterfacesParser.FAMILY, 0)

        def METHOD(self):
            return self.getToken(InterfacesParser.METHOD, 0)

        def AUTO(self):
            return self.getToken(InterfacesParser.AUTO, 0)

        def IFACE(self):
            return self.getToken(InterfacesParser.IFACE, 0)

        def OPTION_NAME(self):
            return self.getToken(InterfacesParser.OPTION_NAME, 0)

        def getRuleIndex(self):
            return InterfacesParser.RULE_val

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterVal" ):
                listener.enterVal(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitVal" ):
                listener.exitVal(self)




    def val(self):

        localctx = InterfacesParser.ValContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_val)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 44
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 2032) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





