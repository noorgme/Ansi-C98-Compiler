#ifndef ast_hpp
#define ast_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>

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

class Type: public ASTNode {
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
                
                break;
            case UNSIGNED_INT:
                
                break;
        }
    }
    private:
        TypeSpecifier typeSpecifier;
};

class Identifier: public ASTNode
{
public:
    Identifier(std::string in_str):str(in_str){
        std::cout << "Identifier constructor of value: " << str << std::endl;
    }
    void compile(std::ostream& os, int dstReg) const override {
    }
    std::string getID() const{
        return str;
    }
private:
    std::string str;
};

class FunctionDeclaration: public ASTNode{
    public:
        FunctionDeclaration(Type* _returnType, ASTNodePtr _declarator):funcName(_declarator), returnType(_returnType){
            
        }
        void compile(std::ostream& os, int dstReg) const override{
            const Identifier* identifier = dynamic_cast<const Identifier*>(funcName);
            std::string funcID = identifier->getID();
            os << ".globl "<< funcID << std::endl;
            os << funcID <<":"<< std::endl;
            returnType->compile(os, dstReg);
            //declarator->compile(os, dstReg);
            
        }
    private:
        Type* returnType;
        ASTNodePtr funcName;
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



class IntLiteral:public ASTNode
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

// class varDeclarator: public ASTNode{
//     public:
//         varDeclarator(ASTNodePtr _decl, ASTNodePtr _init):decl(_decl), init(_init) {
//             std::cout << "varDeclarator called" << std::endl;
//         }
//         void compile(std::ostream& os, int dstReg) const override {
//             // const Identifier* identifier = dynamic_cast<const Identifier*>(decl);
//             // init->compile(os, dstReg);
//             // std::string varID = identifier->getID();
//         }
//     private:
//         Type* type;
//         ASTNodePtr varName;
//         ASTNodePtr decl;
//         ASTNodePtr init;
// };

class CompoundStatement: public ASTNode {
public:
    CompoundStatement(std::vector<ASTNodePtr> _stmts) : stmts(_stmts) {
        std::cout << "CompoundStatement constructor" << std::endl;
    }

    void compile(std::ostream &os, int dstReg) const override {
        for (const auto &stmt : stmts) {
            stmt->compile(os, dstReg);
        }
    }
private:
    std::vector<ASTNodePtr> stmts;
};
#endif
