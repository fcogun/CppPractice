#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

#include "myUtils.h"

void algorithm2()
{
	std::list<int> intList{ 1, 3, 6, 3, 5 };
	displayContainer(intList);

	bool isAllEven = std::all_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });
	bool isAnyEven = std::any_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });
	bool isNoneEven = std::none_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });

	std::cout << "all even = " << isAllEven << " any even = " << isAnyEven << " none even = " << isNoneEven << '\n';

	auto it = std::find(intList.begin(), intList.end(), 3);
	if (it != intList.end())
	{
		std::cout << "Found 3 in the list! Position = " << std::distance(intList.begin(), it) << '\n';
	}

	it = std::find_if(intList.begin(), intList.end(), isEven);
	if (it != intList.end())
	{
		std::cout << "Found even number in the list! Position = " << std::distance(intList.begin(), it) << '\n';
	}

	it = std::find_if_not(intList.begin(), intList.end(), isEven);
	if (it != intList.end())
	{
		std::cout << "Found a number not even! Position = " << std::distance(intList.begin(), it) << '\n';
	}

	std::vector<int> intVector{ 7, 4, 6 };
	displayContainer(intVector);

	it = std::find_first_of(intList.begin(), intList.end(), intVector.begin(), intVector.end());
	if (it != intList.end())
	{
		std::cout << "Found a number in List! Position = " << std::distance(intList.begin(), it) << '\n';
	}

	it = std::find_first_of(intList.begin(), intList.end(), intVector.begin(), intVector.end(), [](int a, int b) {return a + b == 10; });
	if (it != intList.end())
	{
		std::cout << "Found matching num in List! Position = " << std::distance(intList.begin(), it) << '\n';
	}

	it = std::adjacent_find(intList.begin(), intList.end(), [](int a, int b) { return a == 2 * b; });
	if (it != intList.end())
	{
		std::cout << "Found adjacent values s.t. a=2b at position = " << std::distance(intList.begin(), it) << '\n';
	}

}
