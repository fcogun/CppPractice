#include <iostream>
#include <array>
#include "example2.h"

void example2()
{

    std::array<int, 5> arr = { 1,2,3,4 };
    
    try
    {
        int& a = arr.at(4);
        a = 30;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    int* pa = arr.data();

    std::cout << arr.at(1) << std::endl;
    
     
    std::cout << arr.at(1) << std::endl;
    
    std::cout << pa << std::endl;
    std::cout << *pa << std::endl;
    std::cout << *pa + 1 << std::endl;
    std::cout << *(pa + 1) << std::endl;

    for (auto it = arr.rbegin(); it < arr.rend(); ++it)
    {
        (*it)++;
        std::cout << *it << " ";
    }

    std::cout << std::endl;


    if (!arr.empty())
    {
        std::cout << "array not empty!\n";
        std::cout << "size = " << arr.size() << std::endl;
    }

    std::array<int, 10> fillArr;

    fillArr.fill(4);

    for (int i : fillArr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}
