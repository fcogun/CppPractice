#include <iostream>

#include "BinaryTree.h"
#include "BinarySearchTree.h"

int main()
{
#pragma region Binary Tree

	std::cout << '\n' << "=== Binary Tree Operations ===" << '\n';

	Node* root = buildTree();

	std::cout << '\n' << "In order traversal: \n";
	printInorder(root);

	std::cout << '\n' << "Pre order traversal: \n";
	printPreorder(root);

	std::cout << '\n' << "Post order traversal: \n";
	printPostorder(root);

	std::cout << '\n' << "BFS traversal: \n";
	printBFS(root);

#pragma endregion 

#pragma region Binary Search Tree

	std::cout << '\n' << "=== Binary Search Tree Operations ===" << '\n';

	root = buildBinaryTree();
	root = insert(root, 5);
	root = insert(root, 8);
	root = insert(root, 12);


	std::cout << '\n' << "BFS traversal: " << '\n';
	printBFS(root);

	std::cout << '\n' << "In order traversal:" << '\n';
	printInorder(root);

	Node* foundNode = search(root, 6);
	std::cout << '\n' << (foundNode ? "Found! " : "Not found :(") << '\n';

	Node* minNode = findMin(root);
	std::cout << "\n" << "Minimum node value = " << minNode->data << '\n';
	
	Node* maxNode = findMax(root);
	std::cout << "\n" << "Maximum node value = " << maxNode->data << '\n';

	bool isValid = isValidBST(root, INT_MIN, INT_MAX);
	std::cout << '\n' << "Is this a valid Binary Search Tree: " << isValid << '\n';
#pragma endregion
}