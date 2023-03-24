#include "ast.hpp"

NodeList* makeList(ASTNode* node) {

    NodeList* list = new NodeList();
    list->push_back(node);
    return list;
}

NodeList* appendList(NodeList* list, ASTNode* node) {
  list->push_back(node);
  return list;
};

DeclList* makeArgList(varDeclarator* decl){
  DeclList* arglist = new DeclList();
  arglist->push_back(decl);
  return arglist;
};

DeclList* appendArgList(DeclList* list1, DeclList* list2){
  list1->insert(list1->end(), list2->begin(), list2->end());
  return list1;
};

