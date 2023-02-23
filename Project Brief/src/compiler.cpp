#include <fstream>
#include <iostream>
#include <unistd.h>
#include "../include/lexer.hpp"
#include "../include/cli.h"
#include "lexer.cpp"

void compile(std::ostream &w)
{
    int x = 5;
}




TokenValue yylval;

int main(int argc, char **argv)
{

    // Parse CLI arguments, to fetch the values of the source and output files.
    std::string sourcePath = "";
    std::string outputPath = "";

    if (parse_command_line_args(argc, argv, sourcePath, outputPath))
    {
        //std::string sourcePath = "../compiler_tests/lexer/yo.txt";
        sourcePath += sourcePath;
        outputPath += outputPath;
        
        return 1;
    }
     

    // This configures Flex to look at sourcePath instead of
    // reading from stdin.
    // yyin = fopen(sourcePath.c_str(), "r");
    lex(sourcePath);



    

    // Open the output file in truncation mode (to overwrite the contents)
    // std::ofstream output;
    // output.open(outputPath, std::ios::trunc);

    // // Compile the input
    // std::cout << "Compiling: " << sourcePath << std::endl;
    // compile(output);
    // std::cout << "Compiled to: " << outputPath << std::endl;

    // output.close();
    return 0;
}

