#include <iostream>
#include "example1.h"

int sum(int arr[], int size)
{
    int total = 0;

    std::cout << "sum function:\n";
    std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl; // i know this is wronbg, just checking
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


    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << arrSize;

    for (int* p = arr; p < arr + 5; ++p)
    {
        std::cout << *p << std::endl;
    }

    for (int i : arr)
    {
        std::cout << i << std::endl;
    }

    std::cout << sum(arr, arrSize) << std::endl; 
}

// requriments : 


