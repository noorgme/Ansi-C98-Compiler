#ifndef ast_hpp
#define ast_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <unordered_map>

#include "ast/context.hpp"

static int makeNameUnq=0;

static std::string makeName(std::string base)
{
    return "_"+base+"_"+std::to_string(makeNameUnq++);
}

class ASTNode
{
public:
    virtual void compile(std::ostream& os, int dstReg, Context& context) const = 0;

};

typedef const ASTNode *ASTNodePtr;
typedef std::vector<ASTNodePtr> NodeList;


extern NodeList* makeList(ASTNode* node);
extern NodeList* appendList(NodeList* list, ASTNode* node);



extern const ASTNode *parseAST();


//SCOPE:



class makeScope : public ASTNode
{
    public:
        makeScope(NodeList* _declz, NodeList* _statz): declz(_declz), statz(_statz){
            std::cout << "makeScope Called" << std::endl;
            Scope.push_back(declz);
            Scope.push_back(statz);
    
        }
        ~makeScope(){
            delete declz;
            delete statz;
        }
        void compile(std::ostream& os, int dstReg, Context& context) const override{
            
        }
        const std::vector<NodeList*>& getScope() const{
            if (Scope.empty()){
                std::cout<<"Error in 'getScope()' scope empty"<<std::endl;
                return Scope;}
            else{
                return Scope;
            }
        }
    private:    
        std::vector<NodeList*> Scope;
        NodeList* declz;
        NodeList* statz;
};






class Return: public ASTNode
{
public:
    Return(ASTNodePtr expr):childnode(expr){
        std::cout << "Return Called" << std::endl;
    }
    void compile(std::ostream& os, int dstReg, Context& context) const override {
        childnode->compile(os, 10, context);
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

    void compile(std::ostream& os, int dstReg, Context& context) const override{
        switch (typeSpecifier){
            case INT:
                std::cout << "INT typeSpecifier Called" << std::endl;
                break;
            case UNSIGNED_INT:
                std::cout << "UNISGNED_INT typeSpecifier Called" << std::endl;
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
    void compile(std::ostream& os, int dstReg, Context& context) const override {
    }
    std::string getID() const{
        std::cout << "getID Called" << std::endl;
        return str;
    }
private:
    std::string str;
};

class FunctionDeclaration: public ASTNode{
    public:
        FunctionDeclaration(Type* _returnType, ASTNodePtr _declarator):funcName(_declarator), returnType(_returnType){
            
        }
        void compile(std::ostream& os, int dstReg, Context& context) const override{
            const Identifier* identifier = dynamic_cast<const Identifier*>(funcName);
            if (identifier != nullptr){
                std::string funcID = identifier->getID();
                os << ".globl "<< funcID << std::endl;
                os << funcID <<":"<< std::endl;
                returnType->compile(os, dstReg, context);
                }
            else{
               std::cout<<"error: function name is null, expected identifier"<<std::endl;}
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
        void compile(std::ostream& os, int dstReg, Context& context) const override{
            functdecl.compile(os, dstReg, context);
            std::cout<< "compiled funcdecl"<<std::endl;
            const makeScope* noscoper = dynamic_cast<const makeScope*>(statements);
            std::cout << "makescope cast"<<std::endl;
            if (noscoper != nullptr){
                std::vector<NodeList*> listOfLists = noscoper->getScope();
                std::cout<< "getScope called;"<<std::endl;
                NodeList* listOfStatz =  listOfLists[0];
                std::cout<< "statement list retrieved in funcdef, size: "<<(*listOfStatz).size()<<std::endl;
                NodeList* listOfDeclz = listOfLists[1];
                std::cout<< "decl list retrieved in funcdef;"<<(*listOfDeclz).size()<<std::endl;
                for(int i = 0;i < (*listOfDeclz).size();i++){
                    (*listOfDeclz)[i]->compile(os, dstReg, context);
                    std::cout<< "compiled decl: " << i<<std::endl;
                }
                for(int i = 0;i < (*listOfStatz).size();i++){
                    (*listOfStatz)[i]->compile(os, dstReg, context);
                }
            }
            else{std::cout<<"couldn't cast scope"<<std::endl;}
            // statements->compile(os, dstReg, context);
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
    void compile(std::ostream& os, int dstReg, Context& context) const override {
        os << "li a5, "<< num << std::endl;
    }
private:
    ASTNodePtr expression;
    int num;

};

class varDeclaration: public ASTNode{
    public:
        varDeclaration(ASTNodePtr _decl, ASTNodePtr _expression) : decl(_decl), expression(_expression) {}
        
        void compile(std::ostream& os, int dstReg, Context& context) const override {
            const Identifier* identifier = dynamic_cast<const Identifier*>(decl);

            if(identifier != nullptr){
                std::string varName = identifier->getID();
                context.newVar(varName);
                int varOffset = context.getVariableOffset(varName);
                expression->compile(os, dstReg, context);
                os << "sw " << "a0, " << varOffset << "(sp)" << std::endl;
                }
            else{std::cout << "error: expected identifier"<<std::endl;}
        }
    private:
        //Type* type;
        ASTNodePtr decl;
        ASTNodePtr expression;
};

class CompoundStatement: public ASTNode {
public:
    CompoundStatement(std::vector<ASTNodePtr> _stmts) : stmts(_stmts) {
        std::cout << "CompoundStatement constructor" << std::endl;
    }

    void compile(std::ostream &os, int dstReg, Context& context) const override {
        for (const auto &stmt : stmts) {
            stmt->compile(os, dstReg, context);
        }
    }
private:
    std::vector<ASTNodePtr> stmts;
};



#endif





