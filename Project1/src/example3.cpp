#include <iostream>
#include <vector>

void example3()
{

	std::vector<int> vecA = { 1, 2, 3 };

	std::cout << "Vector theoretical max size: " << vecA.max_size() << '\n';
	std::cout << "Vector capacity: " << vecA.capacity() << '\n';
	std::cout << "Vector size: " << vecA.size() << '\n';

	vecA.reserve(100);

	vecA.push_back(4);
	std::cout << vecA.capacity() << std::endl;

	vecA.push_back(5);
	std::cout << vecA.capacity() << std::endl;

	vecA.insert(vecA.begin(), { 6,7,8 });

	vecA.push_back(9);
	std::cout << vecA.capacity() << std::endl;

	vecA.push_back(10);
	vecA.shrink_to_fit();
	std::cout << vecA.capacity() << std::endl;

	std::cout << "Vector capacity: " << vecA.capacity() << '\n';
	std::cout << "Vector size: " << vecA.size() << '\n';

	vecA.resize(5);

	std::cout << "Vector capacity: " << vecA.capacity() << '\n';
	std::cout << "Vector size: " << vecA.size() << '\n';

	vecA.clear();
	std::cout << vecA.capacity() << std::endl;

	if (vecA.empty())
		std::cout << "vector container is empty!\n";

	
}