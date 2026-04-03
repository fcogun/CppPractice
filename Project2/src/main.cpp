// main to call examples one by one
#include <chrono>
#include <iostream>

#include "myUtils.h"

void bubbleSort(std::vector<int>& a);
void selectionSort(std::vector<int>& a);
void insertionSort(std::vector<int>& a);
void mergeSort(std::vector<int>& arr, int left, int right);
void quickSort(std::vector<int>& a, int left, int right);


int main()
{
	
	{
		std::vector<int> v{ 1, 3, 4, 2, 5, 0, 6, 8, 7 };
		std::cout << '\n' << "=== Bubble Sort ===" << '\n';
		displayContainer(v);
		auto start = std::chrono::system_clock::now();
		bubbleSort(v);
		auto end = std::chrono::system_clock::now();
		auto duration = end - start;
		std::cout << "time elapsed in us: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() << std::endl;
	}

	{
		std::vector<int> v{ 1, 3, 4, 2, 5, 0, 6, 8, 7 };
		std::cout << '\n' << "=== Selection Sort ===" << '\n';
		displayContainer(v);
		auto start = std::chrono::system_clock::now();
		selectionSort(v);
		auto end = std::chrono::system_clock::now();
		auto duration = end - start;
		std::cout << "time elapsed in us: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() << std::endl;
	}

	{
		std::vector<int> v{ 1, 3, 4, 2, 5, 0, 6, 8, 7 };
		std::cout << '\n' << "=== Insertion Sort ===" << '\n';
		displayContainer(v);
		auto start = std::chrono::system_clock::now();
		insertionSort(v);
		auto end = std::chrono::system_clock::now();
		auto duration = end - start;
		std::cout << "time elapsed in us: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() << std::endl;
	}

	{
		std::vector<int> v{ 1, 3, 4, 2, 5, 0, 6, 8, 7 };
		std::cout << '\n' << "=== Merge Sort ===" << '\n';
		displayContainer(v);
		auto start = std::chrono::system_clock::now();
		mergeSort(v, 0, v.size()-1);
		auto end = std::chrono::system_clock::now();
		auto duration = end - start;
		std::cout << "time elapsed in us: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() << std::endl;
	}

	{
		std::vector<int> v{ 1, 3, 4, 2, 5, 0, 6, 8, 7};
		std::cout << '\n' << "=== Quick Sort ===" << '\n';
		displayContainer(v);
		auto start = std::chrono::system_clock::now();
		quickSort(v, 0, v.size() - 1);
		auto end = std::chrono::system_clock::now();
		auto duration = end - start;
		std::cout << "time elapsed in us: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() << std::endl;
	}

	return 0;
}