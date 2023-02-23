#include <fstream>
#include "../include/lexer.hpp"
#include <iostream>


void lex(std::string source){
    extern FILE *yyin;
    yyin = fopen(source.c_str(), "r");
    std::ofstream lexerOutput;

    size_t last_dot_index = source.find_last_of(".");
    std::string outputPath = source.substr(0, last_dot_index) + ".o.txt";

    lexerOutput.open(outputPath, std::ios_base::app);
    if (yyin == NULL)
    {
        perror("Could not open source file");
        
    }
    else{
        std::cout<<"Lexing: "<<source<<std::endl;

        
        while(1){

            TokenType type=(TokenType)yylex(); //Get type of next token.

            if(type==None){
                break; // No more tokens

        }
            else if (type == Keyword) {
                lexerOutput << "Keyword: " << *yylval.keywordValue << std::endl;
                delete yylval.keywordValue;
        }
    }
        std::cout<<"Lexing done: "<<std::endl;

}
}