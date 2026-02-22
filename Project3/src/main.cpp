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

	root = buildBinaryTree();
	root = insert(root, 5);
	root = insert(root, 8);
	root = insert(root, 12);


	std::cout << "\n BFS traversal: \n";
	printBFS(root);

	std::cout << "\n In order traversal: \n";
	printInorder(root);

	Node* foundNode = search(root, 6);
	std::cout << '\n' << (foundNode ? "Found! " : "Not found :(") << std::endl;
#pragma endregion
}