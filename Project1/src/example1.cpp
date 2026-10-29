#include "example1.h"

#include <iostream>


int sum(int arr[], int size)
{
    int total = 0;

    std::cout << "sum function:\n";
    std::cout << "Print wrong size: " << sizeof(arr) / sizeof(arr[0]) << std::endl; // i know this is wrong, just checking
    std::cout << size << std::endl;

    for (int i = 0; i < size; ++i)
    {
        total += arr[i];
    }

    return total;
}


void example1()
{
    
    int arr[5] = { 1,2,3,4 };

    std::cout << "Regular for iteration: ";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array size found by sizeof(arr) / sizeof(arr[0]) = " << arrSize << '\n';

    std::cout << "Pointer-based iteration: ";
    for (int* p = arr; p < arr + 5; ++p)
    {
        std::cout << *p << ' ';
    }
    std::cout << std::endl;

    std::cout << "For-each iteration: ";
    for (int i : arr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;


    std::cout << sum(arr, arrSize) << std::endl; 
}


