#ifndef context_hpp
#define context_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <unordered_map>
#include "ast.hpp"
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

        void addVarType(const std::string& varName, int typenum){
            varTypes[varName] = typenum; 
        }

        int getVarType(const std::string& varName){
            return varTypes[varName];
        }

        void addUsedReg(std::string regname){
            usedReg[regname] = 1;
        }

        bool checkUsedReg(std::string regname){
            if (usedReg[regname] == 1){
                return 1;
            }
            else{
                return 0;
            }
        }

        void resetRegMap(){
            usedReg.clear();
        }
    private:
        varMap usedReg;
        varMap varTypes;
        varMap varOffset;
        varMap varValues;
        int currOffset = -64;
};
#endif