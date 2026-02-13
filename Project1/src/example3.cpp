#include <iostream>
#include <vector>

void example3()
{

	std::vector<int> vecA = { 1, 2, 3 };

	std::cout << vecA.max_size() << std::endl;

	std::cout << vecA.capacity() << std::endl;

	//vecA.reserve(10);

	vecA.push_back(4);
	std::cout << vecA.capacity() << std::endl;

	vecA.push_back(4);
	std::cout << vecA.capacity() << std::endl;

	vecA.insert(vecA.begin(), { 1,2,3 });

	vecA.push_back(4);
	std::cout << vecA.capacity() << std::endl;

	vecA.push_back(4);
	vecA.shrink_to_fit();
	std::cout << vecA.capacity() << std::endl;

	vecA.clear();
	std::cout << vecA.capacity() << std::endl;

	if (vecA.empty())
		std::cout << "vector container is empty!\n";

	
}