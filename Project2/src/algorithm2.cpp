#include <iostream>
#include <algorithm>
#include <list>

#include "example5.h"

void algorithm2()
{
	std::list<int> intList{ 1, 3, 6, 3, 5 };
	displayList(intList);

	bool isAllEven = std::all_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });
	bool isAnyEven = std::any_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });
	bool isNoneEven = std::none_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });

	std::cout << "all even = " << isAllEven << " any even = " << isAnyEven << " none even = " << isNoneEven << '\n';

	auto it = std::find(intList.begin(), intList.end(), 3);

	if (it != intList.end())
	{
		std::cout << "Found 3 in the list! Position = " << std::distance(intList.begin(), it) << '\n';
	}

}