#include <iostream>
#include <vector>

#include "myUtils.h"


// Time:   O(n^2) average - best: O(n) optimization, worst O(n^2)
// Space:  O(1)
// Stable: Yes
// -> swaps until greatest at the end of each iteration
void bubbleSort(std::vector<int>& a)
{
	int N = a.size();

	for (int i = 0; i < N - 1; ++i)
	{
		bool swapped = false;
		for (int j = 0; j < N - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				std::swap(a[j], a[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
		std::cout << "iter " << i+1 << ": \n";
		displayContainer(a);
	}

}


// Time:   O(n^2) average - best & worst O(n^2)
// Space:  O(1)
// Stable: NO!
// -> selects smallest elem & puts it at front
void selectionSort(std::vector<int>& a)
{
	int N = a.size();

	for (int i = 0; i < N-1; ++i)
	{
		int minIndex = i;
		for (int j = i + 1; j < N; ++j)
		{
			if (a[j] < a[minIndex])
			{
				minIndex = j;
			}
		}
		std::swap(a[i], a[minIndex]);
		std::cout << "iter " << i + 1 << ": \n";
		displayContainer(a);
	}
}


// Time:   O(n^2) average - best O(n), worst O(n^2)
// Space:  O(1)
// Stable: Yes
// -> picks the key on right, finding the right spot on left to insert
void insertionSort(std::vector<int>& a)
{
	int N = a.size();

	for (int i = 1; i < N; ++i)
	{
		int key = a[i];
		int j = i - 1;

		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
		std::cout << "iter " << i << ": \n";
		displayContainer(a);
	}
}

void merge(std::vector<int>& arr, int left, int mid, int right)
{
	int N1 = mid - left + 1;
	int N2 = right - mid;

	std::vector<int> L(N1);
	std::vector<int> R(N2);

	for (int i = 0; i < N1; ++i)
		L[i] = arr[left + i];
	for (int i = 0; i < N2; ++i)
		R[i] = arr[mid + 1 + i];

	int i = 0, j = 0, k = left;

	while (i < N1 && j < N2)
	{
		if (L[i] <= R[j])
			arr[k++] = L[i++];
		else
			arr[k++] = R[j++];
	}

	while (i < N1)
		arr[k++] = L[i++];
	while (j < N2)
		arr[k++] = R[j++];
}

// Time:   O(nlogn)
// Space:  O(n)
// Stable: Yes
// -> Divide-and-conquer by recursion + merging sorted lists
void mergeSort(std::vector<int>& a, int left, int right) 
{
	static int i = 1;
	if (left >= right) 
		return;

	int mid = left + (right - left) / 2;

	mergeSort(a, left, mid);
	mergeSort(a, mid + 1, right);

	merge(a, left, mid, right);
	std::cout << "iter " << i++ << ": \n";
	displayContainer(a);
}

int partition(std::vector<int>& a, int left, int right)
{
	int pivot = a[right];

	int i = left - 1;
	for (int j = left; j < right; ++j)
	{
		if (a[j] < pivot)
		{
			++i;
			std::swap(a[i], a[j]);
		}
	}
	std::swap(a[i + 1], a[right]);

	return i+1; 
}

void quickSort(std::vector<int>& a, int left, int right)
{
	static int i = 1;
	if (left >= right)
		return;

	int pi = partition(a, left, right);
	quickSort(a, left, pi - 1);
	quickSort(a, pi + 1, right);
	std::cout << "iter " << i++ << ": \n";
	displayContainer(a);
}