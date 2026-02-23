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

	Node* lcaNode = findLCA(root, 8, 4);
	std::cout << '\n' << "LCA for 4 & 8 is: " << lcaNode->data << '\n';

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

	int k = 3;
	int kthSm = kthSmallest(root, k);
	std::cout << '\n' << "kth smallest element where k=" << k << " is " << kthSm;

	Node* lcaBSTNode = findBstLCA(root, 2, 8);
	std::cout << '\n' << "LCA for 2 & 8 is: " << lcaBSTNode->data << '\n';
#pragma endregion
}