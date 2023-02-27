#include <fstream>
#include "../include/lexer.hpp"
#include <iostream>

TokenValue yylval;
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
                lexerOutput << "Keyword: " << *yylval.keywordVal << std::endl;
                delete yylval.keywordVal;
        }
        else if (type == Identifier){
            lexerOutput << "Identifier: " << *yylval.identifierVal << std::endl;
            delete yylval.identifierVal;
        }
            else if (type == intLiteral) {
                lexerOutput << "intLiteral: " << yylval.intVal << std::endl;
               
            }
            else if (type == leftBracket){
                lexerOutput << "leftBracket: " << *yylval.punctuatorVal << std::endl;
                delete yylval.punctuatorVal;
            }
            else if (type == rightBracket){
                lexerOutput << "rightBracket: " << *yylval.punctuatorVal << std::endl;
                delete yylval.punctuatorVal;
            }
            else if (type == leftBrace){
                lexerOutput << "leftBrace: " << *yylval.punctuatorVal << std::endl;
                delete yylval.punctuatorVal;
            }
            else if (type == rightBrace){
                lexerOutput << "rightBrace: " << *yylval.punctuatorVal << std::endl;
                delete yylval.punctuatorVal;
            }
            else if (type == rightsqBracket){
                lexerOutput << "rightsqBracket: " << *yylval.punctuatorVal << std::endl;
                delete yylval.punctuatorVal;
            }
            else if (type == leftsqBracket){
                lexerOutput << "leftsqBracket: " << *yylval.punctuatorVal << std::endl;
                delete yylval.punctuatorVal;
            }

    }
        std::cout<<"Lexing done"<<std::endl;

}
}