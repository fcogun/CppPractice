#pragma once

#include <vector>
#include "Node.h"


Node* buildBinaryTree();

Node* insert(Node* root, int key);

Node* search(Node* root, int key);

Node* findMin(Node* root);

Node* findMax(Node* root);

bool isValidBST(Node* root, int min, int max);

int kthSmallest(Node* root, int k);

Node* findBstLCA(Node* root, int key1, int key2); // Least Common Ancestor for BST

Node* sortedToBST(const std::vector<int>& arr);

std::vector<int> BSTtoSorted(Node* root);

