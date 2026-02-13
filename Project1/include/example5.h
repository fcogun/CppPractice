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

void example5();