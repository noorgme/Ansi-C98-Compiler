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

extern const ASTNode *parseAST();

class Return: public ASTNode
{
public:
    Return(ASTNodePtr expr):childnode(expr){
        std::cout << "Return Called" << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
        childnode->compile(os, 10);
        os << "mv a0, a5" << std::endl;
        os << "jr ra"<<std::endl;
        
    }
private:
     ASTNodePtr childnode;
};

class Type : public ASTNode {
    public:
        enum TypeSpecifier {
            INT,
            UNSIGNED_INT,
            FLOAT,
            DOUBLE,
            VOID
        };
    Type(TypeSpecifier _typeSpecifier): typeSpecifier(_typeSpecifier){}

    void compile(std::ostream& os, int dstReg) const override{
        switch (typeSpecifier){
            case INT:
                os << "addi sp, sp, -4" << std::endl;
                break;
        }
    }
    private:
        TypeSpecifier typeSpecifier;
};

class FunctionDeclaration: public ASTNode{
    public:
        FunctionDeclaration(Type* _returnType, ASTNodePtr _declarator):declarator(_declarator), returnType(_returnType){
            
        }
        void compile(std::ostream& os, int dstReg) const override{
            returnType->compile(os, dstReg);
            declarator->compile(os, dstReg);
        }
    private:
        Type* returnType;
        ASTNodePtr declarator;
};

class FunctionDefinition: public ASTNode{
    public:
        FunctionDefinition(FunctionDeclaration _functdecl, ASTNodePtr _statements):functdecl(_functdecl), statements(_statements){
            std::cout << "FunctionDefinition called" << std::endl;
        }
        void compile(std::ostream& os, int dstReg) const override{
            functdecl.compile(os, dstReg);
            statements->compile(os, dstReg);
        }
    private:
        FunctionDeclaration functdecl;
        ASTNodePtr statements;
};

class Identifier: public ASTNode
{
public:
    Identifier(std::string* in_str):str(in_str){
        std::cout << "Identifier constructor of value: " << *str << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
        os << ".globl "<<*str<<std::endl;
        os << *str <<":"<< std::endl;
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
        os << "li a5, "<< num << std::endl;
    }
private:
    ASTNodePtr expression;
    int num;

};

class IntType: public ASTNode
{
public:
    IntType(){
        std::cout << "IntType Specifier" << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
    }
private:
    int num;

};

class unsignedType: public ASTNode
{
public:
    unsignedType(){
        std::cout << "unsignedType Specifier" << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
    }
private:
    u_int32_t num;

};

#endif
