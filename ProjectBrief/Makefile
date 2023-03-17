# CPPFLAGS += -std=c++20 -W -Wall -g -I include

# .PHONY: default

# default: bin/c_compiler

# bin/c_compiler : src/cli.cpp src/compiler.cpp
# 	@mkdir -p bin
# 	g++ $(CPPFLAGS) -o bin/c_compiler $^

# clean :
# 	rm -rf bin/*
CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

all : bin/c_compiler

src/parser.tab.cpp src/parser.tab.hpp : src/parser.y
	bison -v -d src/parser.y -o src/parser.tab.cpp

src/lexer.yy.cpp : src/lexer.flex src/parser.tab.hpp
	flex -o src/lexer.yy.cpp  src/lexer.flex

bin/c_compiler : include/ast.hpp src/cli.cpp src/compiler.cpp src/parser.tab.o src/lexer.yy.o src/parser.tab.o 
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^
	
clean :
	rm src/*.o -rf
	rm bin/* -rf
	rm -f src/*.tab.*
	rm -f src/*.yy.cpp
	rm -f parser.output
