#!/bin/bash

# Clean the project directory
make clean

# Compile the lexer executable
make lexer

# Run the lexer executable with arguments for every input file in ../lexertests/
output_file="../lexertests/1.txt"
for input_file in ./lexertests/*.txt
do
    ./src/lexer -S "$input_file" -o "$output_file"
done
