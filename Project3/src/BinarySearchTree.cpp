#include "Node.h"
#include "BinarySearchTree.h"
#include "BinaryTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree()
{
	root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(13);
	root->left->left = new Node(2);
	root->left->right = new Node(7);
	root->right->left = new Node(11);
}

void BinarySearchTree::insert(int key)
{
	root = insert(root, key);
}

Node* BinarySearchTree::insert(Node* root, int key)
{
	if (!root)
		return new Node(key);

	if (key < root->data)
		root->left = insert(root->left, key);

	if (key > root->data)
		root->right = insert(root->right, key);

	return root;
}

void BinarySearchTree::inOrder()
{
	if (!root)
		return;

	printInorder(root->left);
	std::cout << root->data << " ";
	printInorder(root->right);
}