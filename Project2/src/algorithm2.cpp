#include <iostream>
#include <algorithm>
#include <list>


void algorithm2()
{
	std::list<int> intList{ 1, 3, 6, 3, 5 };

	bool isAllEven = std::all_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });
	bool isAnyEven = std::any_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });
	bool isNoneEven = std::none_of(intList.begin(), intList.end(), [](int n) { return n % 2 == 0; });

	std::cout << "all even = " << isAllEven << " any even = " << isAnyEven << " none even = " << isNoneEven << '\n';


}