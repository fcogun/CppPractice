#include "MaxHeap.h"
#include <stdexcept>

void MaxHeap::heapifyUp(int index)
{
	while (index != 0)
	{
		int parentInd = (index - 1) / 2;

		if (heap[parentInd] < heap[index])
		{
			std::swap(heap[parentInd], heap[index]);
			index = parentInd;
		}
		else
		{
			break;
		}
	}
}


void MaxHeap::heapifyDown(int index)
{
	int heapSize = heap.size();

	while (true)
	{
		int left = 2 * index + 1;
		int right = 2 * index + 2;
		int largest = index;

		if (left < heapSize && heap[left] > heap[largest])
			largest = left;
		if (right < heapSize && heap[right] > heap[largest])
			largest = right;
		if (largest == index)
			break;

		std::swap(heap[index], heap[largest]);
		index = largest;
	}
}


void MaxHeap::push(int value)
{
	heap.push_back(value);
	heapifyUp(heap.size() - 1);
}


void MaxHeap::pop()
{
	//assuming heap is not empty
	heap[0] = heap.back();
	heap.pop_back();
	if (!heap.empty())
		heapifyDown(0);
}


bool MaxHeap::empty() const {
	return heap.empty();
}


int MaxHeap::top() const {
	if (heap.empty())
		throw std::out_of_range("Heap is empty");

	return heap[0];
}