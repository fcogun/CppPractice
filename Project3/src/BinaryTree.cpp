#include <iostream>
#include <queue>

#include "BinaryTree.h"


Node* buildTree()
{
	Node* root = new Node(5);
	root->left = new Node(1);
	root->right = new Node(2);
	root->left->left = new Node(4);
	root->left->right = new Node(8);
	root->right->left = new Node(83);

	return root;
}

void printPreorder(const Node* root)
{
	if (!root)
		return;

	std::cout << root->data << ' ';
	printPreorder(root->left);
	printPreorder(root->right);
}

void printInorder(const Node* root)
{
	if (!root)
		return;

	printInorder(root->left);
	std::cout << root->data << " ";
	printInorder(root->right);
}

void printPostorder(const Node* root)
{
	if (!root)
		return;

	printPostorder(root->left);
	printPostorder(root->right);
	std::cout << root->data << ' ';
}

void printBFS(const Node* root)
{
	if (!root)
		return;

	std::queue<const Node*> q;
	q.push(root);

	while (!q.empty())
	{
		const Node* currentNode = q.front();
		q.pop();
		std::cout << currentNode->data << ' ';

		if (currentNode->left)
			q.push(currentNode->left);
		if (currentNode->right)
			q.push(currentNode->right);
	}
}