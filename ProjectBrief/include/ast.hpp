#ifndef ast_hpp
#define ast_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>


class ASTNode
{
public:
    virtual void compile(std::ostream& os, int dstReg) const = 0;
    
};

typedef const ASTNode *ASTNodePtr;
extern const ASTNode *parseAST(std::string file);
class Return: public ASTNode
{
public:
    Return(ASTNodePtr expr){
        expression = expr;
    }
    void compile(std::ostream& os, int dstReg) const override {
        // expression->compile(os, dstReg);
        os << "returning"<<std::endl;
        
    }
private:
     ASTNodePtr expression;
};

class IdentType: public ASTNode
{
public:
    IdentType(std::string* in_str){
        str = in_str;
        std::cout << "IdentType called" << std::endl;

    }
    void compile(std::ostream& os, int dstReg) const override {
        // expression->compile(os, dstReg);
        os << "identifier: " << str << std::endl;
    }
private:
    ASTNodePtr expression;
    std::string *str;
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
    ASTNodePtr expression;
    int num;

};

class IntDeclare: public ASTNode
{
public:
    IntDeclare(){
        std::cout << "Int Declared" << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
        // expression->compile(os, dstReg);
        os << "integer: " << num << std::endl;
    }
private:
    ASTNodePtr expression;
    int num;

};
#endif
