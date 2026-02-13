#include <iostream>
#include <set>


void example7()
{
	std::set<int> mySet{ 7, 1,5,3,4,2 };

	for (int i : mySet)
	{
		std::cout << i << " ";
	}
	std::cout << '\n';

	auto it = mySet.begin();

	auto nh = mySet.extract(it);

	std::cout << nh.empty() << ' ' << nh.value() << '\n';

	nh = mySet.extract(12);

	std::cout << nh.empty() << ' ' << (!nh.empty() ? nh.value() : -1) << '\n';

	auto insertResult = mySet.insert(6);
	std::cout << " " << insertResult.second << '\n';
	
	insertResult = mySet.insert(2);
	std::cout << " " << insertResult.second << '\n';

	auto numOfErased = mySet.erase(2);
	std::cout << numOfErased << '\n';
	
	numOfErased = mySet.erase(20);
	std::cout << numOfErased << '\n';

}