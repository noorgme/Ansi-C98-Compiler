#ifndef context_hpp
#define context_hpp


#include <stdio.h>
#include <iostream>

static int makeNameUnq=0;

static std::string makeName(std::string base)
{
    return "_"+base+"_"+std::to_string(makeNameUnq++);
}

class Context{
    public:
        Context(){};
        void Pop(std::ostream& os, int _size){
            os << "addi " << "sp," << "sp," << size << std::endl;
        };
        void Push(std::ostream& os, int _size):size(_size){
            os << "addi " << "sp," << "sp," << -size << std::endl;
            os << "sw " << "s0," << "12(sp)" << std::endl;
            os << "addi " << "s0," << "sp," << size << std::endl;
        };
    private:
        int size;
};

#endif
