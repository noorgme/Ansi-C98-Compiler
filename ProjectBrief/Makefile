CPPFLAGS += -W -Wall -g -I
# This avoids error: ‘fileno’ was not declared in this scope
CPPFLAGS += -std=c++0x

# Avoid warnings about yyunput not used
CPPFLAGS += -Wno-unused-function

.PHONY: default

all : lexer

default: bin/c_compiler

bin/c_compiler : src/cli.cpp src/compiler.cpp
	@mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^


src/lexer.yy.cpp : src/lexer.flex include/lexer.hpp
	flex -o src/lexer.yy.cpp  src/lexer.flex

lexer : src/lexer.yy.o src/compiler.o src/lexer.cpp
	g++ $(CPPFLAGS) -o src/lexer src/lexer.yy.o src/compiler.o src/cli.cpp


clean :
	-rm -f src/lexer.yy.cpp
	-rm -f src/*.yy.cpp
	-rm -f src/*.o
	-rm -f src/lexer
	-rm -f lexertests/*.o.txt
	-rm -rf bin/*


