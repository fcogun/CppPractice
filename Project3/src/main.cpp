#include <iostream>

#include "BinaryTree.h"

int main()
{
	Node* root = buildTree();

	printInorder(root);
}