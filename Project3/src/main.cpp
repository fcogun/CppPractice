#include <iostream>

#include "BinaryTree.h"
#include "BinarySearchTree.h"

int main()
{
#pragma region Binary Tree

	Node* root = buildTree();

	std::cout << "\n In order traversal: \n";
	printInorder(root);

	std::cout << "\n Pre order traversal: \n";
	printPreorder(root);

	std::cout << "\n Post order traversal: \n";
	printPostorder(root);

	std::cout << "\n BFS traversal: \n";
	printBFS(root);

#pragma endregion 

#pragma region Binary Search Tree

	BinarySearchTree bst{};

	bst.insert(7);
	bst.insert(2);
	bst.insert(8);
	bst.insert(10);

	bst.inOrder();

#pragma endregion
}