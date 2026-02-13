// main to call examples one by one
#include <chrono>
#include <iostream>

void algorithm2();

int main()
{

	auto start = std::chrono::system_clock::now();
	algorithm2();
	auto end = std::chrono::system_clock::now();

	auto duration = end - start;

	std::cout << "time elapsed in us: " << std::chrono::duration_cast<std::chrono::microseconds>(duration).count() << std::endl;

	return 0;
}