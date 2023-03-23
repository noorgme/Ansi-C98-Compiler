#include "ast.hpp"

NodeList* makeList(ASTNode* node) {
  NodeList* list = new NodeList();
  list->push_back(node);
  return list;
}

NodeList* appendList(NodeList* list, ASTNode* node) {
  list->push_back(node);
  return list;
}
