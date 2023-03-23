#ifndef context_hpp
#define context_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <unordered_map>
#include "../ast.hpp"

typedef std::unordered_map<std::string, int> varMap;

class Context {
    public:
        Context():varOffset(){
            std::cout << "Context Called" << std::endl;
        }
        ~Context(){

        }
        void newVar(const std::string& name) {
            varOffset[name] = currOffset;
            currOffset -= 4;

        }
        int getVariableOffset(const std::string& name){
            return varOffset[name];
        }
        void addVariableValue(const std::string& name, int varVal){
            varValues[name] = varVal;
        }
        int getVariableValue(const std::string& name){
            return varValues[name];
        }

    private:
        varMap varOffset;
        varMap varValues;
        int currOffset = -64;
};
#endif