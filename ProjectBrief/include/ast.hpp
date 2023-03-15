#ifndef ast_hpp
#define ast_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>

static int makeNameUnq=0;

static std::string makeName(std::string base)
{
    return "_"+base+"_"+std::to_string(makeNameUnq++);
}


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
        std::cout << "Return Called" << std::endl;
        expression = expr;
    }
    void compile(std::ostream& os, int dstReg) const override {
        expression->compile(os, dstReg);
        //os << "returning" << std::endl;
        
    }
private:
     ASTNodePtr expression;
};


class FunctionDeclaration: public ASTNode{
    public:
        FunctionDeclaration(ASTNodePtr expr){
            expression = expr;
        }
        void compile(std::ostream& os, int dstReg) const override{
            expression->compile(os, dstReg);
        }
    private:
        ASTNodePtr expression;

};

class Identifier: public ASTNode
{
public:
    Identifier(std::string* in_str):str(in_str){
        std::cout << "Identifier constructor of value: " << *str << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
    }
private:
    std::string *str;
};


class IntLiteral: public ASTNode
{
public:
    IntLiteral(int _num):num(_num){ // :num(_num) is a shorthand way of setting the private "num" to the value of "_num" passed into the function through the parser
        std::cout << "IntLiteral constructor of value: " << num << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
        // expression->compile(os, dstReg);
        os << "integer: " << num << std::endl;
    }
private:
    ASTNodePtr expression;
    int num;

};

class IntType: public ASTNode
{
public:
    IntType(){
        std::cout << "Int Type Specifier" << std::endl;
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
