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



//RETURN




//TYPES

class Type: public ASTNode {
    public:
        enum TypeSpecifier {
            INT,
            UNSIGNED_INT,
            FLOAT,
            DOUBLE,
            VOID,
            CHAR
        };
    Type(TypeSpecifier _typeSpecifier): typeSpecifier(_typeSpecifier){}

    void compile(std::ostream& os, int dstReg, Context& context) const override{
        std::cout<<"Type class compile called"<<std::endl;
        switch (typeSpecifier){
            case INT:
                std::cout << "INT typeSpecifier Called" << std::endl;
                break;
            case UNSIGNED_INT:
                std::cout << "UNISGNED_INT typeSpecifier Called" << std::endl;
                break;
            case CHAR:
                std::cout<<"CHAR typespec called"<<std::endl;
                break;
            case FLOAT:
                std::cout<<"FLOAT typespec specified"<<std::endl;
                break;
             case DOUBLE:
                std::cout<<"DOUBLE typespec specified"<<std::endl;
                break;
             case VOID:
                std::cout<<"VOID typespec specified"<<std::endl;
                break;                   
        }
    }

    TypeSpecifier getType() const{
        return typeSpecifier;
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
        std::cout<<"Identifier compile called"<<std::endl;
        int varOffset = context.getVariableOffset(str);
        std::string reg;
        if (context.checkUsedReg("a0")){
            if (context.checkUsedReg("a1")){
                if (context.checkUsedReg("a2")){
                    reg = "a3";
                    context.addUsedReg("a3");
                }
                else{
                    reg = "a2";
                    context.addUsedReg("a2");
                }

            }
            else{
                reg = "a1";
                context.addUsedReg("a1");
            }
        }
        else{
            reg = "a0";
            context.addUsedReg("a0");
        }
        if (context.getVarType(str) == 5){
            //DOUBLE
            os<<"fsd f"<<reg<<", "<<varOffset<<"(s0)"<<std::endl;

        }
        else if (context.getVarType(str) == 1){
            //INT
            std::cout<<"doing overwrite"<<std::endl;
            os<<"sw "<<reg<<", "<<varOffset<<"(s0)"<<std::endl;
        }
        else if (context.getVarType(str) == 3){
            //FLOAT
            os<<"fsw f"<<reg<<", "<<varOffset<<"(s0)"<<std::endl;
        }
        

        else{
            std::cout << "type not implemented" << std::endl;
        }
    }
    std::string getID() const{
        std::cout << "getID Called" << std::endl;
        return str;
    }
    int getVal(Context& context) const{
        return context.getVariableValue(str);
    }
    int getOffset(Context& context) const{
        return context.getVariableOffset(str);
    }

    int getVarType(Context& context) const{
        return context.getVarType(str);
    }
    
private:
    std::string str;
};


//DEFINITION & DECLARATION:


class FloatLiteral: public ASTNode {
    public:
        FloatLiteral(double _floater):floater(_floater){
            std::cout<<"float literal constructed"<<std::endl;
        };
        void compile(std::ostream& os, int dstReg, Context& context) const override {
        std::cout<<"Float literal compile called"<<std::endl;
        }
        
        double getVal() const{
            return floater;
        }
        
    private:
        double floater;
};

class IntLiteral:public ASTNode
{
public:
    IntLiteral(int _num):num(_num){ // :num(_num) is a shorthand way of setting the private "num" to the value of "_num" passed into the function through the parser
        std::cout << "IntLiteral constructor of value: " << num << std::endl;
    }
    void compile(std::ostream& os, int dstReg, Context& context) const override {
        std::cout<<"IntLiteral compile called"<<std::endl;
        os << "li a5, "<< num << std::endl;
    }
    int getintval() const {
        return num;
    }
private:
    ASTNodePtr expression;
    int num;

};

class SizeOf : public ASTNode {

    public:
        SizeOf(ASTNodePtr _expr): expr(_expr){
        std::cout<<"SizeOf Constructed"<<std::endl;
    };
    void compile(std::ostream &os, int dstreg, Context& context) const override{
        //check if identifier
        std::cout<<"SizeOf compile called"<<std::endl;
        const IntLiteral* intliteral = dynamic_cast<const IntLiteral*>(expr);
        const Identifier* identifier = dynamic_cast<const Identifier*>(expr);
        const Type* typer = dynamic_cast<const Type*>(expr);
    
        if (identifier != nullptr){
            int type = identifier->getVarType(context);
            if (type == 1){
                size = 4;
            }
            else if (type == 2){
                size = 1;
            }
            
        }
        else if (intliteral != nullptr){
            size = 4;
        }
        else if (typer != nullptr){
            if (typer->getType() == Type::CHAR){
                size = 1;
            }
            else if (typer->getType() == Type::INT){
                size = 4;
            }
        }
    }
    int getSize() const{
        return size;
    };
        
    private:
        ASTNodePtr expr;
        mutable int size;
};

class BinaryOperator: public ASTNode{
    public:
        enum OperatorType{
            ADD,
            SUBTRACT,
            MULTIPLY,
            DIVIDE,
            MODULO,
            LEFT_SHIFT,
            RIGHT_SHIFT,
            LESS_THAN,
            GREATER_THAN,
            LESS_EQ,
            GREATER_EQ,
            EQUAL,
            NEQUAL,
            AND,
            XOR,
            OR,
            LOGICAL_AND,
            LOGICAL_OR
        };

        BinaryOperator(OperatorType _opType, ASTNodePtr _left, ASTNodePtr _right):left(_left), right(_right), opType(_opType){

        }

        
        void compile(std::ostream &os, int dstReg, Context& context) const override {
            std::cout << "BinaryOperator compile called" << std::endl;

            //check if left is an intliteral or a Identifier or floatliteral
            const IntLiteral* leftValInt = dynamic_cast<const IntLiteral*>(left);
            const Identifier* leftValIdent = dynamic_cast<const Identifier*>(left);
            const FloatLiteral* leftValFloat = dynamic_cast<const FloatLiteral*>(left);
            if(leftValInt != nullptr){
                std::cout<<"BinaryOperator(left) is an Intliteral" << std::endl;
                leftValIdent->compile(os, dstReg, context);
                //os << "mv t0, a5" << std::endl;  // Save left operand in t0
            }
            else if(leftValIdent != nullptr){
                leftValIdent->compile(os, dstReg, context);
                std::cout<<"BinaryOperator(left) is Identifier" <<std::endl;
                //std::cout << "BinaryOperator(left) has value: " << context.getVariableValue(leftValIdent->getID()) << std::endl;
                type = leftValIdent->getVarType(context);
                //get reg
                std::string reg;
                if (context.checkUsedReg("a4")){
                    reg = "a5";
                    context.addUsedReg("a5");
                }
                else{
                    reg = "a4"; 
                    context.addUsedReg("a4");
                }
                if (type == 5){
                    //DOUBLE
                    os<<"fld f"<<reg<<", "<<leftValIdent->getOffset(context)<<"(s0)"<<std::endl;
                }
                else if (type == 3 ){
                    //FLOAT
                    os<<"flw f"<<reg<<", "<<leftValIdent->getOffset(context)<<"(s0)"<<std::endl;
                }
                else if (type == 1){
                    //INT
                    os<<"lw "<<reg<<", "<<leftValIdent->getOffset(context)<<"(s0)"<<std::endl;
                }
                //os << "mv t0, a4" << std::endl;
            }
            else if(leftValFloat != nullptr){
                leftValFloat->compile(os, dstReg, context);
                //shouldnt reach?
            }

            //check if right is an intliteral or a Identifier
            const IntLiteral* rightValInt = dynamic_cast<const IntLiteral*>(right);
            const Identifier* rightValIdent = dynamic_cast<const Identifier*>(right);
            const FloatLiteral* rightValFloat = dynamic_cast<const FloatLiteral*>(right);
            if(rightValInt != nullptr){
                std::cout <<"BinaryOperator(right) is an Intliteral" <<std::endl;
                rightValInt->compile(os, dstReg, context);
                //os << "mv t1, a5" << std::endl;  // Save right operand in t0
            }
            else if(rightValIdent != nullptr){
                rightValIdent->compile(os, dstReg, context);
                std::cout<<"BinaryOperator(right) is an Identifier" <<std::endl;
                //std::cout << "BinaryOperator(right) has value: " << context.getVariableValue(rightValIdent->getID())<< std::endl;
                type = leftValIdent->getVarType(context);

                std::string reg2;
                if (context.checkUsedReg("a4")){
                    if(context.checkUsedReg("a5")){
                        reg2 = "a6";
                        context.addUsedReg("a6");
                    }
                
                    else{
                        reg2 = "a5";
                        context.addUsedReg("a5");
                    }
                }
                else{
                    reg2 = "a4";
                    context.addUsedReg("a4");
                    }


                

                if (type == 5){
                    //DOUBLE
                    os<<"fld f"<<reg2<<", "<<rightValIdent->getOffset(context)<<"(s0)"<<std::endl;
                }
                else if (type ==3 ){
                    //FLOAT
                    os<<"flw f"<<reg2<<", "<<rightValIdent->getOffset(context)<<"(s0)"<<std::endl;
                }
                else if (type == 1){
                //INT
                os<<"lw "<<reg2<<", "<<rightValIdent->getOffset(context)<<"(s0)"<<std::endl;
                }
                //os << "mv t1, a5" << std::endl;
            }
        
        switch (opType) {
            case ADD:
                if (type == 5){
                    os << "fadd.d fa5, fa4, fa5" << std::endl;
                }
                else if (type == 3){
                    os << "fadd.s fa5, fa4, fa5" << std::endl;
                }
                else{
                os << "add a5, a4, a5" << std::endl;
                }
                break;
            case SUBTRACT:
                os << "sub a5, a4, a5" << std::endl; //NOT WORKING!!!!
                break;
            case MULTIPLY:
                if (type == 5){
                    os << "fmul.d fa5, fa4, fa5" << std::endl;
                }
                else if (type == 3){
                    os << "fmul.s fa5, fa4, fa5" << std::endl;
                }
                else{
                os << "mul a5, a4, a5" << std::endl;
                }
                break;
            case DIVIDE:
                os << "div a5, a4, a5" << std::endl;
                break;
            case MODULO:
                os << "rem a5, a4, a5" << std::endl;
                break;
            case LEFT_SHIFT:
                os << "sll a5, a4, a5" << std::endl;
                break;
            case RIGHT_SHIFT:
                os << "srl a5, a4, a5" << std::endl;
                break;
            case LESS_THAN:
                os << "slt a5, a4, a5" << std::endl;
                break;
            case GREATER_THAN:
                os << "slt a5, a5, a4" << std::endl;
                break;
            case LESS_EQ:
                os << "sle a5, a4, a5" << std::endl; //NOT WORKING!!
                break;
            case GREATER_EQ:
                os << "sle a5, a5, a4" << std::endl;
                break;
            case EQUAL:
                os << "sub a5, a4, a5" << std::endl;
                os << "seqz a5, a5" << std::endl;
                os << "andi a5, a5, 0xff" << std::endl;
                break;
            case NEQUAL:
                os << "sne a5, a4, a5" << std::endl;
                break;
            case AND:
                os << "and a5, a4, a5" << std::endl; 
                break;
            case XOR:
                os << "xor a5, a4, a5" << std::endl;
                break;
            case OR:
                os << "or a5, a4, a5" << std::endl; //NEEDS ASSIGN
                break;
            case LOGICAL_AND:
                os << "sltu t0, a4, 1" << std::endl;
                os << "sltu t1, a5, 1" << std::endl;
                os << "or t2, t0, t1" << std::endl;
                os << "xori a5, t2, 1" << std::endl;
                break;
            case LOGICAL_OR:
                os << "sltu t0, a4, 1" << std::endl;
                os << "sltu t1, a5, 1" << std::endl;
                os << "and t2, t0, t1" << std::endl;
                os << "xori a5, t2, 1" << std::endl;
                break;
            }
        }
        

        int giveType() const{
            return type;
        }
    private:
        mutable int type = 0;
        OperatorType opType;
        ASTNodePtr left;
        ASTNodePtr right;

};



class Return: public ASTNode
{
public:
    Return(ASTNodePtr expr):childnode(expr){
        std::cout << "Return Called" << std::endl;
    }
    void compile(std::ostream& os, int dstReg, Context& context) const override {
        std::cout<<"Return compile called"<<std::endl;
        bool returned = 0;
        const IntLiteral* returnvalliteral = dynamic_cast<const IntLiteral*>(childnode);
        
        const Identifier* returnvalidentifier = dynamic_cast<const Identifier*>(childnode);
      
        const SizeOf* returnvalsizeof = dynamic_cast<const SizeOf*>(childnode);
       
        const BinaryOperator* binary = dynamic_cast<const BinaryOperator*>(childnode);
        if (returnvalliteral != nullptr){
            returnvalliteral->compile(os, 10, context);
            std::cout<<"returning "<<returnvalliteral->getintval()<<std::endl;
        }
        else if (returnvalidentifier != nullptr){
            int returnval = returnvalidentifier->getVal(context);
            std::cout<<"returning: "<<returnval<<std::endl;
            int offset = returnvalidentifier->getOffset(context);
            //load from memory into a5
            std::cout<<"doing here"<<std::endl;
            //returnvalidentifier->compile(os, 10, context);
            //os<<"lw a5, "<<offset<<"(sp)"<<std::endl;
        }
        else if (returnvalsizeof != nullptr){
            int size;
            std::cout<<"flag 4"<<std::endl;
            returnvalsizeof->compile(os, dstReg, context);
            size = returnvalsizeof->getSize();
            os<<"li a5, "<<size<<std::endl;
        }
        else if (binary != nullptr){
            binary->compile(os, dstReg, context);
            if (binary->giveType() == 3){
                //float
                os << "fmv.s fa0, fa5" << std::endl;
                returned = 1;
            }
            else if (binary->giveType() == 5){
                //double
                os << "fmv.d fa0, fa5" << std::endl;
                returned = 1;
            };
        }
        if (returned != 1){
        os << "mv a0, a5" << std::endl;}
        //function epilogue
        os<<"lw s0, 28(sp)"<<std::endl;
        os<<"addi sp, sp, 256"<<std::endl;
        os << "jr ra"<<std::endl;
        
    }
private:
     
     ASTNodePtr childnode;
};


class initDeclarator: public ASTNode{

    public:
        initDeclarator(ASTNodePtr _declarator, ASTNodePtr _initialiser): declarator(_declarator), initialiser(_initialiser){
            std::cout << "initDeclarator constructed" << std::endl;
            if (initialiser == nullptr){
                std::cout<<"null init constr";
            }

        }
        void compile(std::ostream& os, int dstReg, Context& context) const override{
            std::cout<< "initDeclarator compile called" << std::endl;
            const Identifier* identifier = dynamic_cast<const Identifier*>(declarator);
            const IntLiteral* intval = dynamic_cast<const IntLiteral*>(initialiser);
            
            
            if (identifier != nullptr){
                std::string varName = identifier->getID(); //should define varName for the class so it can be used later
                name = varName;
                //add to context
                context.newVar(varName);
                
                //get new offset
                int varOffset = context.getVariableOffset(varName);
 
                std::cout << "initDeclarator compiled for varName: " << varName << " = " << varValue << std::endl;

                if (initialiser != nullptr){
                //check if we have initialiser than check which cast worked and get its value and store in varValue
                    if (intval != nullptr){
                        varValue = intval->getintval();
                        intval->compile(os, dstReg, context);
                    }   
                }
                else{
                    varValue = 0;
                }
                context.addVariableValue(varName, varValue);
            }

            //Add varValue to context
            

            else{
               std::cout<<"error: function name is null, expected identifier"<<std::endl;
               }
            if(initialiser == nullptr){
                std::cout<<"Just a declaration"<<std::endl;
                std::string varName = identifier->getID(); //messy but works
            }
        
           
        }
        std::string GetName() const{
            return name;
        }

        int test() const{return 5;}

        private:
            mutable std::string name;
            mutable int varValue = 0;
            ASTNodePtr declarator;
            ASTNodePtr initialiser;  //_initialiser is = nullptr so that we can have no initialiser
};


class varDeclarator: public ASTNode{
    public:
        varDeclarator(Type* _returnType, initDeclarator* _init_decl): returnType(_returnType), init_decl(_init_decl){
            std::cout << "varDeclarator constructed" << std::endl;
            
        }
        void compile(std::ostream& os, int dstReg, Context& context) const override{
  
            std::cout << "VarDeclarator compile called" << std::endl;

            init_decl->compile(os, dstReg, context);
            std::string varName = init_decl->GetName();

            //add decl types to context
            Type::TypeSpecifier varType = returnType->getType();
            if (varType == Type::INT){
            context.addVarType(varName, 1);}
            else if (varType == Type::CHAR){
                context.addVarType(varName, 2);
            }
            else if (varType == Type::FLOAT){
                context.addVarType(varName, 3);
            }
            else if (varType == Type::VOID){
                context.addVarType(varName, 4);
            }
            else if (varType == Type::DOUBLE){
                context.addVarType(varName, 5);
            }
            else if (varType == Type::UNSIGNED_INT){
                context.addVarType(varName, 6);
            }
        }

        std::string getName()const{
            return init_decl->GetName();
        }
    private:
        Type* returnType;
        initDeclarator* init_decl;
};

typedef std::vector<varDeclarator*> DeclList;

extern DeclList* makeArgList(varDeclarator* decl);
extern DeclList* appendArgList(DeclList* list1, DeclList* list2);

class FuncWithArgs : public ASTNode{
    public:
        FuncWithArgs(ASTNodePtr _declarator, DeclList* _paramList):declarator(_declarator), paramList(_paramList){
            std::cout<<"FuncWithArgs constructed"<<std::endl;
        }
        
        void compile(std::ostream& os, int dstReg, Context& context) const override{
            std::cout<<"FuncWithArgs Compile called"<<std::endl;
            
            const Identifier* funcName = dynamic_cast<const Identifier*>(declarator);
            if (funcName == nullptr){
                std::cout<<"Error: Could not cast 'declarator' to 'Identifier' class in'FuncWithArgs' ";
            }
            
            os << ".globl "<< funcName->getID() << std::endl;
            os << funcName->getID() <<":"<< std::endl;
            os<<"addi sp, sp, -256"<<std::endl;
            os<<"sw s0, 28(sp)"<<std::endl;
            os<<"addi s0, sp, 256"<<std::endl;

            std::cout << "param list size: " << paramList->size()<<std::endl;
            
            for (int i = 0; i < paramList->size(); i++){
                std::cout << "Compiling arg: " << i << std::endl;
                const varDeclarator* argdecl = dynamic_cast<const varDeclarator*>((*paramList)[i]);
                
                argdecl->compile(os, dstReg, context);
                std::string varname = argdecl->getName();
                //os << "sw a" << i << ", " << context.getVariableOffset(varname) << "(s0)" << std::endl;
                std::cout << "Compiled arg: " << i << std::endl;
            }
        }
    private:
        ASTNodePtr declarator;
        DeclList* paramList;
};

class FunctionDeclaration: public ASTNode{
    public:
        FunctionDeclaration(Type* _returnType, ASTNodePtr _declarator):funcName(_declarator), returnType(_returnType){
            std::cout << "FuncDecl constructed" << std::endl;
        }
        void compile(std::ostream& os, int dstReg, Context& context) const override{
            std::cout<<"FuncDecl Compile called"<<std::endl;
            const Identifier* identifier = dynamic_cast<const Identifier*>(funcName);
            const FuncWithArgs* funcwithargs = dynamic_cast<const FuncWithArgs*>(funcName);

            if (identifier != nullptr){ //check if f(), else its probably f(int x, int y)
               
                std::string funcID = identifier->getID();
                os << ".globl "<< funcID << std::endl;
                os << funcID <<":"<< std::endl;
                 //Function prologue:
                os<<"addi sp, sp, -256"<<std::endl;
                os<<"sw s0, 28(sp)"<<std::endl;
                os<<"addi s0, sp, 256"<<std::endl;
                
                returnType->compile(os, dstReg, context);
                }
            else if (funcwithargs != nullptr){//check if its int f(intx, int y)

                // std::string funcID = identifier->getID();
                // os << ".globl "<< funcID << std::endl;
                // os << funcID <<":"<< std::endl;
                 //Function prologue:
                funcwithargs->compile(os, dstReg, context);
                
                returnType->compile(os, dstReg, context);

            }
            else{
               std::cout << "error: function name is null, expected identifier" << std::endl;
               }
            //declarator->compile(os, dstReg);
            
        }
    private:
        Type* returnType;
        ASTNodePtr funcName;
};

class FunctionDefinition: public ASTNode{
    public:
        FunctionDefinition(FunctionDeclaration _functdecl, ASTNodePtr _statements):functdecl(_functdecl), statements(_statements){
            std::cout << "FunctionDefinition constructed" << std::endl;
        }
        void compile(std::ostream& os, int dstReg, Context& context) const override{
            std::cout<<"FuncDef compile called"<<std::endl;
            
            functdecl.compile(os, dstReg, context);
            std::cout<< "compiled funcdecl"<<std::endl;



            const makeScope* noscoper = dynamic_cast<const makeScope*>(statements);
            std::cout << "makescope cast"<<std::endl;
            if (noscoper != nullptr){
                std::vector<NodeList*> listOfLists = noscoper->getScope();
                std::cout<< "getScope called;"<<std::endl;
                NodeList* listOfStatz =  listOfLists[1];
                std::cout<< "statement list retrieved in funcdef, size: "<< (*listOfStatz).size() << std::endl;
                NodeList* listOfDeclz = listOfLists[0];
                std::cout<< "decl list retrieved in funcdef, size: "<< (*listOfDeclz).size() << std::endl;
                for(int i = 0;i < (*listOfDeclz).size();i++){
                    std::cout<<"compiling decl: "<<i<<std::endl;
                    (*listOfDeclz)[i]->compile(os, dstReg, context);
                    std::cout<< "compiled decl: " << i<<std::endl;
                }
                for(int i = 0;i < (*listOfStatz).size();i++){
                    std::cout<<"compiling smnt: "<<i<<std::endl;
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

class Assign: public ASTNode{
    public:
        Assign(ASTNodePtr _left, char _op, ASTNodePtr _right):left(_left), right(_right), op(_op){
            std::cout << "Assign Called" << std::endl;
        }

        void compile(std::ostream& os, int dstReg, Context& context) const override{

            const Identifier* leftIdent = dynamic_cast<const Identifier*>(left); //x = 3, try cast x (ASTNodePtr 'left') to an Identifier
            if(leftIdent != nullptr){//left should always be identifier
                leftIdent->compile(os, dstReg, context); 
                std::string reg;
                if (context.checkUsedReg("a4")){reg = "a5";context.addUsedReg("a5");}
                else{reg = "a4"; context.addUsedReg("a4");}
                os << "lw "<< reg << ", "<< leftIdent->getOffset(context) << "(s0)" << std::endl; //messing up for logica_or test
            }
            const IntLiteral* rightVal = dynamic_cast<const IntLiteral*>(right);
            const BinaryOperator* rightValBinary = dynamic_cast<const BinaryOperator*>(right);
            if(rightVal != nullptr){
                rightVal->compile(os, dstReg, context);
            }
            else if(rightValBinary != nullptr){
                rightValBinary->compile(os, dstReg, context);
            }
            else{
                //if the RHS is an expression, compile it
                //TODO: not sure if this is correct implmenetation
                right->compile(os, dstReg, context);
            }
            
            //TODO: need to add a type check here because right will not always be an INT
            switch (op){
                case '=':
                    os << "sw a5, "<< leftIdent->getOffset(context) << "(s0)" <<std::endl;
                    break;
                case '*':
                    //TODO: assembly output changes based on the value of RHS
                    os << "mv a4, a5 "<< std::endl;
                    os << "slii a5, a5, 2" << std::endl;
                    break;
                case '/':
                    os << "li a5, " << rightVal->getintval() << std::endl;
                    os << "div a5, a4, a5" << std::endl;
                    break;
                case '%': //expect lw into a4 again
                    //TODO: this for anything that is not a power of 2, for that its different assembly
                    os << "li a5, " << rightVal->getintval() << std::endl; 
                    os << "rem a5, a4, a5 "<< std::endl; 
                    os << "sw a5, "<< leftIdent->getOffset(context) << "(s0)" <<std::endl;
                    break;
                case '+':
                    os << "addi a5, a5, " << rightVal->getintval() << std::endl;
                    os << "sw a5, "<< leftIdent->getOffset(context) << "(s0)" <<std::endl;
                    break;
                case '-':
                    os << "addi a5, a5, " << -(rightVal->getintval()) << std::endl;
                    os << "sw a5, "<< leftIdent->getOffset(context) << "(s0)" <<std::endl;
                    break;
                case '<':
                    os << "slli a5, a5 " << rightVal->getintval() <<  std::endl;
                    break;
                case '>': // '>>='
                    os << "srai a5, a5 " << rightVal->getintval() <<  std::endl;
                    break;
                case '&':
                    os << "andi a5, a5, " << rightVal->getintval() << std::endl;
                    os << "sw a5, "<< leftIdent->getOffset(context) << "(s0)" <<std::endl;
                    break;
                case 'x':
                    os << "xori a5, a5 " << rightVal->getintval() << std::endl;
                    break;
                case '|':
                    os << "ori a5, a5, " << rightVal->getintval() << std::endl;
                    os << "sw a5, "<< leftIdent->getOffset(context) << "(s0)" <<std::endl;
                    break;
                case 'l':
                    os<< "sgt a5, a4, a5" <<std::endl;
                    os<< "xori a5, a5, 1" <<std::endl;
                    os<< "andi a5, a5, 0xff" <<std::endl;
                    //os<< "sw a5, -20(s0)" <<std::endl;
                    break;
                }
        }
    private:
        ASTNodePtr right;
        ASTNodePtr left;
        char op;
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



//PRIMITIVES:






#endif





