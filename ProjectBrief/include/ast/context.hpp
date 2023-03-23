#ifndef context_hpp
#define context_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <unordered_map>

typedef std::unordered_map<std::string, int> varMap;

class Context {
    public:
        Context():vars(){
            std::cout << "Context Called" << std::endl;
        }
        ~Context(){

        }
        void newVar(const std::string& name) {
            vars[name] = currOffset;
            currOffset -= 4;

        }
        int getVariableOffset(const std::string& name) {
            return vars[name];
        }
    private:
        varMap vars;
        int currOffset = -64;
};
#endif