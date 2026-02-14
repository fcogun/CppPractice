#include <iostream>
#include <algorithm>
#include <vector>

#include "myUtils.h"


void algorithm3()
{
	std::vector<int> intVector{ 7, 4, 6,4,4,3,1,7,2 };
	displayContainer(intVector);

	int numToCount{ 4 };
	auto cnt = std::count(intVector.begin(), intVector.end(), numToCount);
	std::cout << "Number of " << numToCount << " in the vector is :" << cnt << std::endl;

	auto evenNumCnt = std::count_if(intVector.begin(), intVector.end(), isEven);
	std::cout << "Number of even nums is: " << evenNumCnt << std::endl;

	std::vector<int> searchVector = { 4, 3, 1 };
	displayContainer(searchVector);

	auto it = std::search(intVector.begin(), intVector.end(), searchVector.begin(), searchVector.end());
	if (it != intVector.end())
	{
		std::cout << "Found at index: " << std::distance(intVector.begin(), it) << std::endl;
	}
}