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


Node* findMin(Node* root)
{
	if (!root)
		return nullptr;

	while (root->left)
	{
		root = root->left;
	}
	return root;
}


Node* findMax(Node* root)
{
	if (!root)
		return nullptr;

	while (root->right)
	{
		root = root->right;
	}
	return root;
}


bool isValidBST(Node* root, int min, int max)
{
	if (!root)
		return true;

	if (root->data < min || root->data > max)
		return false;

	return isValidBST(root->left, min, root->data) && isValidBST(root->right, root->data, max);
}


int kthSmallestR(Node* root, int& k)
{
	if (!root)
		return -1;

	int left = kthSmallestR(root->left, k);

	if (left != -1)
		return left;

	if (--k == 0)
		return root->data;

	return kthSmallestR(root->right, k);
}

int kthSmallest(Node* root, int k)
{
	return kthSmallestR(root, k);
}

Node* findBstLCA(Node* root, int key1, int key2)
{
	if (!root)
		return nullptr;

	if (root->data > key1 && root->data > key2)
		return findBstLCA(root->left, key1, key2);
	else if (root->data < key1 && root->data < key2)
		return findBstLCA(root->right, key1, key2);

	return root;
}
