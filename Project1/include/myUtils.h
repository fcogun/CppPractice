#pragma once
#include <list>
#include <string>


template <typename T>
void displayContainer(const T& aList)
{
	for (const auto& i : aList)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

inline auto isEven = [](int n) { return n % 2 == 0; };


void example5();