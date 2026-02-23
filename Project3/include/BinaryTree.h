#pragma once

#include "Node.h"

Node* buildTree();

void printPreorder(const Node* root);

void printInorder(const Node* root);

void printPostorder(const Node* root);

void printBFS(const Node* root);

Node* findLCA(Node* root, int key1, int key2); // Least Common Ancestor