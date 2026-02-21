#include <iostream>
#include <memory>

#include "BinaryTree.h"

struct Node
{
	Node(int key) :data(key),left(nullptr),right(nullptr) {}

	int data;
	Node* left;
	Node* right;
};


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

void printPreorder(Node* root)
{
	if (!root)
		return;

	std::cout << root->data << ' ';
	printPreorder(root->left);
	printPreorder(root->right);
}

void printInorder(Node* root)
{
	if (!root)
		return;

	printInorder(root->left);
	std::cout << root->data << " ";
	printInorder(root->right);
}

void printPostorder(Node* root)
{
	if (!root)
		return;

	printPostorder(root->left);
	printPostorder(root->right);
	std::cout << root->data << ' ';
}

