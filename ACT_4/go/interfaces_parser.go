// Code generated from Interfaces.g4 by ANTLR 4.13.2. DO NOT EDIT.

package main // Interfaces
import (
	"fmt"
	"strconv"
	"sync"

	"github.com/antlr4-go/antlr/v4"
)

// Suppress unused import errors
var _ = fmt.Printf
var _ = strconv.Itoa
var _ = sync.Once{}

type InterfacesParser struct {
	*antlr.BaseParser
}

var InterfacesParserStaticData struct {
	once                   sync.Once
	serializedATN          []int32
	LiteralNames           []string
	SymbolicNames          []string
	RuleNames              []string
	PredictionContextCache *antlr.PredictionContextCache
	atn                    *antlr.ATN
	decisionToDFA          []*antlr.DFA
}

func interfacesParserInit() {
	staticData := &InterfacesParserStaticData
	staticData.LiteralNames = []string{
		"", "", "", "", "'auto'", "'iface'",
	}
	staticData.SymbolicNames = []string{
		"", "WS", "COMMENT", "NEWLINE", "AUTO", "IFACE", "FAMILY", "METHOD",
		"OPTION_NAME", "ID", "VALUE_STR",
	}
	staticData.RuleNames = []string{
		"configFile", "line", "autoStmt", "ifaceStmt", "optionStmt", "val",
	}
	staticData.PredictionContextCache = antlr.NewPredictionContextCache()
	staticData.serializedATN = []int32{
		4, 1, 10, 47, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7,
		4, 2, 5, 7, 5, 1, 0, 5, 0, 14, 8, 0, 10, 0, 12, 0, 17, 9, 0, 1, 0, 1, 0,
		1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 25, 8, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 3, 1,
		3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 4, 1, 4, 4, 4, 39, 8, 4, 11, 4, 12, 4, 40,
		1, 4, 1, 4, 1, 5, 1, 5, 1, 5, 0, 0, 6, 0, 2, 4, 6, 8, 10, 0, 1, 1, 0, 4,
		10, 45, 0, 15, 1, 0, 0, 0, 2, 24, 1, 0, 0, 0, 4, 26, 1, 0, 0, 0, 6, 30,
		1, 0, 0, 0, 8, 36, 1, 0, 0, 0, 10, 44, 1, 0, 0, 0, 12, 14, 3, 2, 1, 0,
		13, 12, 1, 0, 0, 0, 14, 17, 1, 0, 0, 0, 15, 13, 1, 0, 0, 0, 15, 16, 1,
		0, 0, 0, 16, 18, 1, 0, 0, 0, 17, 15, 1, 0, 0, 0, 18, 19, 5, 0, 0, 1, 19,
		1, 1, 0, 0, 0, 20, 25, 3, 4, 2, 0, 21, 25, 3, 6, 3, 0, 22, 25, 3, 8, 4,
		0, 23, 25, 5, 3, 0, 0, 24, 20, 1, 0, 0, 0, 24, 21, 1, 0, 0, 0, 24, 22,
		1, 0, 0, 0, 24, 23, 1, 0, 0, 0, 25, 3, 1, 0, 0, 0, 26, 27, 5, 4, 0, 0,
		27, 28, 3, 10, 5, 0, 28, 29, 5, 3, 0, 0, 29, 5, 1, 0, 0, 0, 30, 31, 5,
		5, 0, 0, 31, 32, 3, 10, 5, 0, 32, 33, 5, 6, 0, 0, 33, 34, 5, 7, 0, 0, 34,
		35, 5, 3, 0, 0, 35, 7, 1, 0, 0, 0, 36, 38, 5, 8, 0, 0, 37, 39, 3, 10, 5,
		0, 38, 37, 1, 0, 0, 0, 39, 40, 1, 0, 0, 0, 40, 38, 1, 0, 0, 0, 40, 41,
		1, 0, 0, 0, 41, 42, 1, 0, 0, 0, 42, 43, 5, 3, 0, 0, 43, 9, 1, 0, 0, 0,
		44, 45, 7, 0, 0, 0, 45, 11, 1, 0, 0, 0, 3, 15, 24, 40,
	}
	deserializer := antlr.NewATNDeserializer(nil)
	staticData.atn = deserializer.Deserialize(staticData.serializedATN)
	atn := staticData.atn
	staticData.decisionToDFA = make([]*antlr.DFA, len(atn.DecisionToState))
	decisionToDFA := staticData.decisionToDFA
	for index, state := range atn.DecisionToState {
		decisionToDFA[index] = antlr.NewDFA(state, index)
	}
}

// InterfacesParserInit initializes any static state used to implement InterfacesParser. By default the
// static state used to implement the parser is lazily initialized during the first call to
// NewInterfacesParser(). You can call this function if you wish to initialize the static state ahead
// of time.
func InterfacesParserInit() {
	staticData := &InterfacesParserStaticData
	staticData.once.Do(interfacesParserInit)
}

// NewInterfacesParser produces a new parser instance for the optional input antlr.TokenStream.
func NewInterfacesParser(input antlr.TokenStream) *InterfacesParser {
	InterfacesParserInit()
	this := new(InterfacesParser)
	this.BaseParser = antlr.NewBaseParser(input)
	staticData := &InterfacesParserStaticData
	this.Interpreter = antlr.NewParserATNSimulator(this, staticData.atn, staticData.decisionToDFA, staticData.PredictionContextCache)
	this.RuleNames = staticData.RuleNames
	this.LiteralNames = staticData.LiteralNames
	this.SymbolicNames = staticData.SymbolicNames
	this.GrammarFileName = "Interfaces.g4"

	return this
}

// InterfacesParser tokens.
const (
	InterfacesParserEOF         = antlr.TokenEOF
	InterfacesParserWS          = 1
	InterfacesParserCOMMENT     = 2
	InterfacesParserNEWLINE     = 3
	InterfacesParserAUTO        = 4
	InterfacesParserIFACE       = 5
	InterfacesParserFAMILY      = 6
	InterfacesParserMETHOD      = 7
	InterfacesParserOPTION_NAME = 8
	InterfacesParserID          = 9
	InterfacesParserVALUE_STR   = 10
)

// InterfacesParser rules.
const (
	InterfacesParserRULE_configFile = 0
	InterfacesParserRULE_line       = 1
	InterfacesParserRULE_autoStmt   = 2
	InterfacesParserRULE_ifaceStmt  = 3
	InterfacesParserRULE_optionStmt = 4
	InterfacesParserRULE_val        = 5
)

// IConfigFileContext is an interface to support dynamic dispatch.
type IConfigFileContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// Getter signatures
	EOF() antlr.TerminalNode
	AllLine() []ILineContext
	Line(i int) ILineContext

	// IsConfigFileContext differentiates from other interfaces.
	IsConfigFileContext()
}

type ConfigFileContext struct {
	antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyConfigFileContext() *ConfigFileContext {
	var p = new(ConfigFileContext)
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_configFile
	return p
}

func InitEmptyConfigFileContext(p *ConfigFileContext) {
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_configFile
}

func (*ConfigFileContext) IsConfigFileContext() {}

func NewConfigFileContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ConfigFileContext {
	var p = new(ConfigFileContext)

	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, parent, invokingState)

	p.parser = parser
	p.RuleIndex = InterfacesParserRULE_configFile

	return p
}

func (s *ConfigFileContext) GetParser() antlr.Parser { return s.parser }

func (s *ConfigFileContext) EOF() antlr.TerminalNode {
	return s.GetToken(InterfacesParserEOF, 0)
}

func (s *ConfigFileContext) AllLine() []ILineContext {
	children := s.GetChildren()
	len := 0
	for _, ctx := range children {
		if _, ok := ctx.(ILineContext); ok {
			len++
		}
	}

	tst := make([]ILineContext, len)
	i := 0
	for _, ctx := range children {
		if t, ok := ctx.(ILineContext); ok {
			tst[i] = t.(ILineContext)
			i++
		}
	}

	return tst
}

func (s *ConfigFileContext) Line(i int) ILineContext {
	var t antlr.RuleContext
	j := 0
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(ILineContext); ok {
			if j == i {
				t = ctx.(antlr.RuleContext)
				break
			}
			j++
		}
	}

	if t == nil {
		return nil
	}

	return t.(ILineContext)
}

func (s *ConfigFileContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ConfigFileContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ConfigFileContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.EnterConfigFile(s)
	}
}

func (s *ConfigFileContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.ExitConfigFile(s)
	}
}

func (p *InterfacesParser) ConfigFile() (localctx IConfigFileContext) {
	localctx = NewConfigFileContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 0, InterfacesParserRULE_configFile)
	var _la int

	p.EnterOuterAlt(localctx, 1)
	p.SetState(15)
	p.GetErrorHandler().Sync(p)
	if p.HasError() {
		goto errorExit
	}
	_la = p.GetTokenStream().LA(1)

	for (int64(_la) & ^0x3f) == 0 && ((int64(1)<<_la)&312) != 0 {
		{
			p.SetState(12)
			p.Line()
		}

		p.SetState(17)
		p.GetErrorHandler().Sync(p)
		if p.HasError() {
			goto errorExit
		}
		_la = p.GetTokenStream().LA(1)
	}
	{
		p.SetState(18)
		p.Match(InterfacesParserEOF)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}

errorExit:
	if p.HasError() {
		v := p.GetError()
		localctx.SetException(v)
		p.GetErrorHandler().ReportError(p, v)
		p.GetErrorHandler().Recover(p, v)
		p.SetError(nil)
	}
	p.ExitRule()
	return localctx
	goto errorExit // Trick to prevent compiler error if the label is not used
}

// ILineContext is an interface to support dynamic dispatch.
type ILineContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// Getter signatures
	AutoStmt() IAutoStmtContext
	IfaceStmt() IIfaceStmtContext
	OptionStmt() IOptionStmtContext
	NEWLINE() antlr.TerminalNode

	// IsLineContext differentiates from other interfaces.
	IsLineContext()
}

type LineContext struct {
	antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyLineContext() *LineContext {
	var p = new(LineContext)
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_line
	return p
}

func InitEmptyLineContext(p *LineContext) {
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_line
}

func (*LineContext) IsLineContext() {}

func NewLineContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *LineContext {
	var p = new(LineContext)

	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, parent, invokingState)

	p.parser = parser
	p.RuleIndex = InterfacesParserRULE_line

	return p
}

func (s *LineContext) GetParser() antlr.Parser { return s.parser }

func (s *LineContext) AutoStmt() IAutoStmtContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IAutoStmtContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IAutoStmtContext)
}

func (s *LineContext) IfaceStmt() IIfaceStmtContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IIfaceStmtContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IIfaceStmtContext)
}

func (s *LineContext) OptionStmt() IOptionStmtContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IOptionStmtContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IOptionStmtContext)
}

func (s *LineContext) NEWLINE() antlr.TerminalNode {
	return s.GetToken(InterfacesParserNEWLINE, 0)
}

func (s *LineContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *LineContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *LineContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.EnterLine(s)
	}
}

func (s *LineContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.ExitLine(s)
	}
}

func (p *InterfacesParser) Line() (localctx ILineContext) {
	localctx = NewLineContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 2, InterfacesParserRULE_line)
	p.SetState(24)
	p.GetErrorHandler().Sync(p)
	if p.HasError() {
		goto errorExit
	}

	switch p.GetTokenStream().LA(1) {
	case InterfacesParserAUTO:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(20)
			p.AutoStmt()
		}

	case InterfacesParserIFACE:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(21)
			p.IfaceStmt()
		}

	case InterfacesParserOPTION_NAME:
		p.EnterOuterAlt(localctx, 3)
		{
			p.SetState(22)
			p.OptionStmt()
		}

	case InterfacesParserNEWLINE:
		p.EnterOuterAlt(localctx, 4)
		{
			p.SetState(23)
			p.Match(InterfacesParserNEWLINE)
			if p.HasError() {
				// Recognition error - abort rule
				goto errorExit
			}
		}

	default:
		p.SetError(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
		goto errorExit
	}

errorExit:
	if p.HasError() {
		v := p.GetError()
		localctx.SetException(v)
		p.GetErrorHandler().ReportError(p, v)
		p.GetErrorHandler().Recover(p, v)
		p.SetError(nil)
	}
	p.ExitRule()
	return localctx
	goto errorExit // Trick to prevent compiler error if the label is not used
}

// IAutoStmtContext is an interface to support dynamic dispatch.
type IAutoStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// Getter signatures
	AUTO() antlr.TerminalNode
	Val() IValContext
	NEWLINE() antlr.TerminalNode

	// IsAutoStmtContext differentiates from other interfaces.
	IsAutoStmtContext()
}

type AutoStmtContext struct {
	antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyAutoStmtContext() *AutoStmtContext {
	var p = new(AutoStmtContext)
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_autoStmt
	return p
}

func InitEmptyAutoStmtContext(p *AutoStmtContext) {
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_autoStmt
}

func (*AutoStmtContext) IsAutoStmtContext() {}

func NewAutoStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *AutoStmtContext {
	var p = new(AutoStmtContext)

	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, parent, invokingState)

	p.parser = parser
	p.RuleIndex = InterfacesParserRULE_autoStmt

	return p
}

func (s *AutoStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *AutoStmtContext) AUTO() antlr.TerminalNode {
	return s.GetToken(InterfacesParserAUTO, 0)
}

func (s *AutoStmtContext) Val() IValContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IValContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IValContext)
}

func (s *AutoStmtContext) NEWLINE() antlr.TerminalNode {
	return s.GetToken(InterfacesParserNEWLINE, 0)
}

func (s *AutoStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *AutoStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *AutoStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.EnterAutoStmt(s)
	}
}

func (s *AutoStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.ExitAutoStmt(s)
	}
}

func (p *InterfacesParser) AutoStmt() (localctx IAutoStmtContext) {
	localctx = NewAutoStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 4, InterfacesParserRULE_autoStmt)
	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(26)
		p.Match(InterfacesParserAUTO)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}
	{
		p.SetState(27)
		p.Val()
	}
	{
		p.SetState(28)
		p.Match(InterfacesParserNEWLINE)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}

errorExit:
	if p.HasError() {
		v := p.GetError()
		localctx.SetException(v)
		p.GetErrorHandler().ReportError(p, v)
		p.GetErrorHandler().Recover(p, v)
		p.SetError(nil)
	}
	p.ExitRule()
	return localctx
	goto errorExit // Trick to prevent compiler error if the label is not used
}

// IIfaceStmtContext is an interface to support dynamic dispatch.
type IIfaceStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// Getter signatures
	IFACE() antlr.TerminalNode
	Val() IValContext
	FAMILY() antlr.TerminalNode
	METHOD() antlr.TerminalNode
	NEWLINE() antlr.TerminalNode

	// IsIfaceStmtContext differentiates from other interfaces.
	IsIfaceStmtContext()
}

type IfaceStmtContext struct {
	antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyIfaceStmtContext() *IfaceStmtContext {
	var p = new(IfaceStmtContext)
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_ifaceStmt
	return p
}

func InitEmptyIfaceStmtContext(p *IfaceStmtContext) {
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_ifaceStmt
}

func (*IfaceStmtContext) IsIfaceStmtContext() {}

func NewIfaceStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *IfaceStmtContext {
	var p = new(IfaceStmtContext)

	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, parent, invokingState)

	p.parser = parser
	p.RuleIndex = InterfacesParserRULE_ifaceStmt

	return p
}

func (s *IfaceStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *IfaceStmtContext) IFACE() antlr.TerminalNode {
	return s.GetToken(InterfacesParserIFACE, 0)
}

func (s *IfaceStmtContext) Val() IValContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IValContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IValContext)
}

func (s *IfaceStmtContext) FAMILY() antlr.TerminalNode {
	return s.GetToken(InterfacesParserFAMILY, 0)
}

func (s *IfaceStmtContext) METHOD() antlr.TerminalNode {
	return s.GetToken(InterfacesParserMETHOD, 0)
}

func (s *IfaceStmtContext) NEWLINE() antlr.TerminalNode {
	return s.GetToken(InterfacesParserNEWLINE, 0)
}

func (s *IfaceStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *IfaceStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *IfaceStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.EnterIfaceStmt(s)
	}
}

func (s *IfaceStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.ExitIfaceStmt(s)
	}
}

func (p *InterfacesParser) IfaceStmt() (localctx IIfaceStmtContext) {
	localctx = NewIfaceStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 6, InterfacesParserRULE_ifaceStmt)
	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(30)
		p.Match(InterfacesParserIFACE)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}
	{
		p.SetState(31)
		p.Val()
	}
	{
		p.SetState(32)
		p.Match(InterfacesParserFAMILY)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}
	{
		p.SetState(33)
		p.Match(InterfacesParserMETHOD)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}
	{
		p.SetState(34)
		p.Match(InterfacesParserNEWLINE)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}

errorExit:
	if p.HasError() {
		v := p.GetError()
		localctx.SetException(v)
		p.GetErrorHandler().ReportError(p, v)
		p.GetErrorHandler().Recover(p, v)
		p.SetError(nil)
	}
	p.ExitRule()
	return localctx
	goto errorExit // Trick to prevent compiler error if the label is not used
}

// IOptionStmtContext is an interface to support dynamic dispatch.
type IOptionStmtContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// Getter signatures
	OPTION_NAME() antlr.TerminalNode
	NEWLINE() antlr.TerminalNode
	AllVal() []IValContext
	Val(i int) IValContext

	// IsOptionStmtContext differentiates from other interfaces.
	IsOptionStmtContext()
}

type OptionStmtContext struct {
	antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyOptionStmtContext() *OptionStmtContext {
	var p = new(OptionStmtContext)
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_optionStmt
	return p
}

func InitEmptyOptionStmtContext(p *OptionStmtContext) {
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_optionStmt
}

func (*OptionStmtContext) IsOptionStmtContext() {}

func NewOptionStmtContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *OptionStmtContext {
	var p = new(OptionStmtContext)

	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, parent, invokingState)

	p.parser = parser
	p.RuleIndex = InterfacesParserRULE_optionStmt

	return p
}

func (s *OptionStmtContext) GetParser() antlr.Parser { return s.parser }

func (s *OptionStmtContext) OPTION_NAME() antlr.TerminalNode {
	return s.GetToken(InterfacesParserOPTION_NAME, 0)
}

func (s *OptionStmtContext) NEWLINE() antlr.TerminalNode {
	return s.GetToken(InterfacesParserNEWLINE, 0)
}

func (s *OptionStmtContext) AllVal() []IValContext {
	children := s.GetChildren()
	len := 0
	for _, ctx := range children {
		if _, ok := ctx.(IValContext); ok {
			len++
		}
	}

	tst := make([]IValContext, len)
	i := 0
	for _, ctx := range children {
		if t, ok := ctx.(IValContext); ok {
			tst[i] = t.(IValContext)
			i++
		}
	}

	return tst
}

func (s *OptionStmtContext) Val(i int) IValContext {
	var t antlr.RuleContext
	j := 0
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IValContext); ok {
			if j == i {
				t = ctx.(antlr.RuleContext)
				break
			}
			j++
		}
	}

	if t == nil {
		return nil
	}

	return t.(IValContext)
}

func (s *OptionStmtContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *OptionStmtContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *OptionStmtContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.EnterOptionStmt(s)
	}
}

func (s *OptionStmtContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.ExitOptionStmt(s)
	}
}

func (p *InterfacesParser) OptionStmt() (localctx IOptionStmtContext) {
	localctx = NewOptionStmtContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 8, InterfacesParserRULE_optionStmt)
	var _la int

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(36)
		p.Match(InterfacesParserOPTION_NAME)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}
	p.SetState(38)
	p.GetErrorHandler().Sync(p)
	if p.HasError() {
		goto errorExit
	}
	_la = p.GetTokenStream().LA(1)

	for ok := true; ok; ok = ((int64(_la) & ^0x3f) == 0 && ((int64(1)<<_la)&2032) != 0) {
		{
			p.SetState(37)
			p.Val()
		}

		p.SetState(40)
		p.GetErrorHandler().Sync(p)
		if p.HasError() {
			goto errorExit
		}
		_la = p.GetTokenStream().LA(1)
	}
	{
		p.SetState(42)
		p.Match(InterfacesParserNEWLINE)
		if p.HasError() {
			// Recognition error - abort rule
			goto errorExit
		}
	}

errorExit:
	if p.HasError() {
		v := p.GetError()
		localctx.SetException(v)
		p.GetErrorHandler().ReportError(p, v)
		p.GetErrorHandler().Recover(p, v)
		p.SetError(nil)
	}
	p.ExitRule()
	return localctx
	goto errorExit // Trick to prevent compiler error if the label is not used
}

// IValContext is an interface to support dynamic dispatch.
type IValContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// Getter signatures
	ID() antlr.TerminalNode
	VALUE_STR() antlr.TerminalNode
	FAMILY() antlr.TerminalNode
	METHOD() antlr.TerminalNode
	AUTO() antlr.TerminalNode
	IFACE() antlr.TerminalNode
	OPTION_NAME() antlr.TerminalNode

	// IsValContext differentiates from other interfaces.
	IsValContext()
}

type ValContext struct {
	antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyValContext() *ValContext {
	var p = new(ValContext)
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_val
	return p
}

func InitEmptyValContext(p *ValContext) {
	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, nil, -1)
	p.RuleIndex = InterfacesParserRULE_val
}

func (*ValContext) IsValContext() {}

func NewValContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ValContext {
	var p = new(ValContext)

	antlr.InitBaseParserRuleContext(&p.BaseParserRuleContext, parent, invokingState)

	p.parser = parser
	p.RuleIndex = InterfacesParserRULE_val

	return p
}

func (s *ValContext) GetParser() antlr.Parser { return s.parser }

func (s *ValContext) ID() antlr.TerminalNode {
	return s.GetToken(InterfacesParserID, 0)
}

func (s *ValContext) VALUE_STR() antlr.TerminalNode {
	return s.GetToken(InterfacesParserVALUE_STR, 0)
}

func (s *ValContext) FAMILY() antlr.TerminalNode {
	return s.GetToken(InterfacesParserFAMILY, 0)
}

func (s *ValContext) METHOD() antlr.TerminalNode {
	return s.GetToken(InterfacesParserMETHOD, 0)
}

func (s *ValContext) AUTO() antlr.TerminalNode {
	return s.GetToken(InterfacesParserAUTO, 0)
}

func (s *ValContext) IFACE() antlr.TerminalNode {
	return s.GetToken(InterfacesParserIFACE, 0)
}

func (s *ValContext) OPTION_NAME() antlr.TerminalNode {
	return s.GetToken(InterfacesParserOPTION_NAME, 0)
}

func (s *ValContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ValContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ValContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.EnterVal(s)
	}
}

func (s *ValContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(InterfacesListener); ok {
		listenerT.ExitVal(s)
	}
}

func (p *InterfacesParser) Val() (localctx IValContext) {
	localctx = NewValContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 10, InterfacesParserRULE_val)
	var _la int

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(44)
		_la = p.GetTokenStream().LA(1)

		if !((int64(_la) & ^0x3f) == 0 && ((int64(1)<<_la)&2032) != 0) {
			p.GetErrorHandler().RecoverInline(p)
		} else {
			p.GetErrorHandler().ReportMatch(p)
			p.Consume()
		}
	}

errorExit:
	if p.HasError() {
		v := p.GetError()
		localctx.SetException(v)
		p.GetErrorHandler().ReportError(p, v)
		p.GetErrorHandler().Recover(p, v)
		p.SetError(nil)
	}
	p.ExitRule()
	return localctx
	goto errorExit // Trick to prevent compiler error if the label is not used
}
