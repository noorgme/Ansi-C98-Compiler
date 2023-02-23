# Changelog

## 23/02/2023
### Noor:
- Created lexer.hpp header with TokenTypes: Keyword, Delimiter, Operator, Identifier, Literal
- Created lexer.flex script, setup/tested basic regex framework for Literal and Keyword
- Changes to compiler.cpp main to execute lexing
  - Calls "lex()" function defined in lexer.cpp to execute lexing on input file given in the -S commandline argument
- Updated Makefile to build lexer and made "test_lexer.sh" script to test lexer on all inputs found in 'lexertests' folder,
createds output for each like so: "1.txt" -> output file: "1.o.txt"
