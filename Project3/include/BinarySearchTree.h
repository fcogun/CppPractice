#pragma once

#include <memory>
#include "Node.h"

class BinarySearchTree
{
public:
	BinarySearchTree();

	void insert(int key);
	void inOrder();
private:
	Node* root;

	Node* insert(Node* root, int key);
};

