#ifndef lexer_hpp
#define lexer_hpp

#include <string>

enum TokenType{
    None   = 0, // This indicates there are no more tokens
    Keyword, // token codes must be positive
    Identifier,  // = 2, implicit from C++ enumeration
    Operator,
    //Punctuators
    leftBracket,
    rightBracket,
    leftBrace,
    rightBrace,
    leftsqBracket,
    rightsqBracket,
    //Literals
    intLiteral,
    floatLiteral,
    charLiteral,
    stringLiteral
    
};

union TokenValue{
    std::string *keywordVal;
    double floatVal;
    int intVal;
    char* punctuatorVal;
    std::string *identifierVal;

};

// This is a global variable used to move the
// attribute value from the lexer back to the
// main program.
// By convention it is called yylval, as that is
// the name that will be automatically generated
// by Bison (see next lab).
extern TokenValue yylval;

// This is the lexer function defined by flex. Each
// time it is called, a token type value will be
// returned.
extern int yylex();

#endif
