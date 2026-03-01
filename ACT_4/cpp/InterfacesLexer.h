
// Generated from Interfaces.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  InterfacesLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, COMMENT = 2, NEWLINE = 3, AUTO = 4, IFACE = 5, FAMILY = 6, METHOD = 7, 
    OPTION_NAME = 8, ID = 9, VALUE_STR = 10
  };

  explicit InterfacesLexer(antlr4::CharStream *input);

  ~InterfacesLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

