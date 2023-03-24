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

        void deleteReg(std::string regname){
            if(usedReg[regname] == 1){
                usedReg.erase(regname);
                std::cout << "deleted reg: " << regname << std::endl;
            }
            else{
                std::cout << "deleteReg: regname not in varmap " << std::endl;
            }
        }
        std::string getNextAvailableReg(Context& context, std::string regName = "a4") {
            
            while (context.checkUsedReg(regName)) { // Keep looping until we find an unused register
                int regNum = std::stoi(regName.substr(1)); // Get the register number
                regNum++; // Increment the register number
                regName = "a" + std::to_string(regNum); // Create the new register name
            }
            context.addUsedReg(regName); // Mark the register as used
            return regName;
        }

        int getRegisterNumber(const std::string& regName) {
            if (regName == "zero") {
                return 0;
            } else if (regName == "ra") {
                return 1;
            } else if (regName == "sp") {
                return 2;
            } else if (regName == "gp") {
                return 3;
            } else if (regName == "tp") {
                return 4;
            } else if (regName == "t0") {
                return 5;
            } else if (regName == "t1") {
                return 6;
            } else if (regName == "t2") {
                return 7;
            } else if (regName == "s0") {
                return 8;
            } else if (regName == "s1") {
                return 9;
            } else if (regName == "a0") {
                return 10;
            } else if (regName == "a1") {
                return 11;
            } else if (regName == "a2") {
                return 12;
            } else if (regName == "a3") {
                return 13;
            } else if (regName == "a4") {
                return 14;
            } else if (regName == "a5") {
                return 15;
            } else if (regName == "a6") {
                return 16;
            } else if (regName == "a7") {
                return 17;
            } else if (regName == "s2") {
                return 18;
            } else if (regName == "s3") {
                return 19;
            } else if (regName == "s4") {
                return 20;
            } else if (regName == "s5") {
                return 21;
            } else if (regName == "s6") {
                return 22;
            } else if (regName == "s7") {
                return 23;
            } else if (regName == "s8") {
                return 24;
            } else if (regName == "s9") {
                return 25;
            } else if (regName == "s10") {
                return 26;
            } else if (regName == "s11") {
                return 27;
            } else if (regName == "t3") {
                return 28;
            } else if (regName == "t4") {
                return 29;
            } else if (regName == "t5") {
                return 30;
            } else if (regName == "t6") {
                return 31;
            } else {
                throw std::invalid_argument("Invalid register name");
            }
        }


        void resetRegMap(){
            usedReg.clear();
        }


        std::string getRegisterName(int regNum) {
    switch (regNum) {
        case 0:
            return "zero";
        case 1:
            return "ra";
        case 2:
            return "sp";
        case 3:
            return "gp";
        case 4:
            return "tp";
        case 5:
            return "t0";
        case 6:
            return "t1";
        case 7:
            return "t2";
        case 8:
            return "s0";
        case 9:
            return "s1";
        case 10:
            return "a0";
        case 11:
            return "a1";
        case 12:
            return "a2";
        case 13:
            return "a3";
        case 14:
            return "a4";
        case 15:
            return "a5";
        case 16:
            return "a6";
        case 17:
            return "a7";
        case 18:
            return "s2";
        case 19:
            return "s3";
        case 20:
            return "s4";
        case 21:
            return "s5";
        case 22:
            return "s6";
        case 23:
            return "s7";
        case 24:
            return "s8";
        case 25:
            return "s9";
        case 26:
            return "s10";
        case 27:
            return "s11";
        case 28:
            return "t3";
        case 29:
            return "t4";
        case 30:
            return "t5";
        case 31:
            return "t6";
        default:
            throw std::invalid_argument("Invalid register number");
    }
}



    private:
        varMap usedReg;
        varMap varTypes;
        varMap varOffset;
        varMap varValues;
        int currOffset = -64;
};
#endif