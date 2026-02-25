#pragma once

#include <vector>

class MaxHeap
{
public:
	void push(int value);
	void pop();
	bool empty() const;
	int top() const;
private:
	std::vector<int> heap;

	void heapifyUp(int index);
	void heapifyDown(int index);
};