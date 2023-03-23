#include "ast.hpp"
#include "ast/context.hpp"
#include "cli.h"
#include <fstream>
#include <iostream>
#include <unistd.h>


void compile(std::ostream &w)
{
    Context context;
    const ASTNode *prog = parseAST();
    prog->compile(w, 10, context);

    // w << ".globl f" << std::endl;
    // w << std::endl;

    // w << "f:" << std::endl;
    // w << "addi  t0, zero, 0" << std::endl;
    // w << "addi  t0, t0,   5" << std::endl;
    // w << "add   a0, zero, t0" << std::endl;
    // w << "ret" << std::endl;
}

// TODO: uncomment the below if you're using Flex/Bison.
extern FILE *yyin;

int main(int argc, char **argv)
{
    // Parse CLI arguments, to fetch the values of the source and output files.
    std::string sourcePath = "";
    std::string outputPath = "";
    int x = parse_command_line_args(argc, argv, sourcePath, outputPath);
    if (x)
    {
        return 1;
    }

    // TODO: uncomment the below lines if you're using Flex/Bison.
    // This configures Flex to look at sourcePath instead of
    // reading from stdin.
    yyin = fopen(sourcePath.c_str(), "r");
    if (yyin == NULL)
    {
        perror("Could not open source file");
        return 1;
    }

    // Open the output file in truncation mode (to overwrite the contents)
    std::ofstream output;
    output.open(outputPath, std::ios::trunc);

    // Compile the input
    std::cout << "Compiling: " << sourcePath << std::endl;
    compile(output);
    std::cout << "Compiled to: " << outputPath << std::endl;

    output.close();
    return 0;
}