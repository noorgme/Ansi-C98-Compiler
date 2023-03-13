#ifndef ast_hpp
#define ast_hpp

#include <stdio.h>
#include <iostream>

class ASTNode
{
public:
    virtual void compile(std::ostream& os, int dstReg) const = 0;
    
};


class Return: public ASTNode
{
public:
    Return(){

    }
    void compile(std::ostream& os, int dstReg) const override {
        // expression->compile(os, dstReg);
        os << "returning"<<std::endl;
    }
private:
    ASTNode* expression;

};

class IdentType: public ASTNode
{
public:
    IntType(){
        std::cout << "IntType called" << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
        // expression->compile(os, dstReg);
        os << "identifier: " << str << std::endl;
    }
private:
    ASTNode* expression;
    std::string str;

};


class IntType: public ASTNode
{
public:
    IntType(int number){
        std::cout << "IntType called" << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
        // expression->compile(os, dstReg);
        os << "integer: " << num << std::endl;
    }
private:
    ASTNode* expression;
    int num;

};

#endif
