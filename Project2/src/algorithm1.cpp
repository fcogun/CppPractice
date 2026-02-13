#include <iostream>
#include <algorithm>

#include "algorithm1.h"
#include <vector>

struct Sum
{
	Sum() : total(0) {};
	Sum(int init) : total(init) {};

	void operator()(int i)
	{
		total += i;
	}

	int total;
};

void algorithm1() 
{
	std::vector<int> intVector{ 1,2,3,4,5,6 };
	std::for_each(intVector.begin(), intVector.end(), [](int i) { std::cout << i << ' '; });
	
	std::for_each(intVector.begin(), intVector.end(), [](int& i) { i *= i; });
	std::for_each(intVector.begin(), intVector.end(), [](int i) { std::cout << i << ' '; });

	int sum = 0;
	auto f = std::for_each(intVector.begin(), intVector.end(), [&sum](int& i) { sum += i ; });
	std::cout << "sum = " << sum << std::endl;

	Sum s1;
	Sum s2(5);

	auto res = std::for_each(intVector.begin(), intVector.end(), s1);
	std::cout << "sum = " << s1.total << std::endl;
	
}
