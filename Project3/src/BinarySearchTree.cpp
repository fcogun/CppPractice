#include "Node.h"
#include "BinarySearchTree.h"
#include "BinaryTree.h"
#include <iostream>

Node* buildBinaryTree() 
{
	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(13);
	root->left->left = new Node(2);
	root->left->right = new Node(7);
	root->right->left = new Node(11);

	return root;
}


Node* insert(Node* root, int key)
{
	if (!root)
		return new Node(key);

	if (key < root->data)
		root->left = insert(root->left, key);

	if (key > root->data)
		root->right = insert(root->right, key);

	return root;
}


Node* search(Node* root, int key)
{
	if (!root || root->data == key)
		return root;

	if (key < root->data)
		return search(root->left, key);
	else
		return search(root->right, key);
}