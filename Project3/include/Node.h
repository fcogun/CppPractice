#pragma once

struct Node
{
	Node(int key) :data(key), left(nullptr), right(nullptr) {}

	int data;
	Node* left;
	Node* right;
};