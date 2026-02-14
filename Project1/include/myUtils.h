#pragma once
#include <list>
#include <string>


template <typename T>
void displayContainer(const T& aList)
{
	std::string str{};
	for (int i : aList)
	{
		str.append(std::to_string(i)).append(" ");
	}
	std::cout << str << std::endl;
}

auto isEven = [](int n) { return n % 2 == 0; };


void example5();