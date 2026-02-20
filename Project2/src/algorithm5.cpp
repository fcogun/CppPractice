#include <iostream>
#include <vector>
#include <numeric>

#include "myUtils.h"
#include <algorithm>

void algorithm5()
{

	std::vector<int> v(4);

	std::iota(v.begin(), v.end(), 3);
	displayContainer(v);

#pragma region accumulate
	
	auto sum = std::accumulate(v.begin(), v.end(), 0);
	std::cout << "The sum of all elements is : " << sum << "\n";

	auto prod = std::accumulate(v.begin(), v.end(), 1, std::multiplies<long>());
	std::cout << "The prod of all elements is : " << prod << "\n";

	auto custProd = std::accumulate(v.begin(), v.end(), std::string{}, [](auto a, auto b) {return a + std::to_string(b) + " "; });
	std::cout << "The custom append of all elements is : " << custProd << "\n";
	
	displayContainer(v); // make sure the vector container is not modified by any means

	std::vector<int> ov (v);
	displayContainer(ov);

	std::for_each(ov.begin(), ov.end(), [](int& n) { n += 1; });
	displayContainer(ov);
	
#pragma endregion
		
#pragma region innerproduct

	int innProd = std::inner_product(v.begin(), v.end(), ov.begin(), 0);
	std::cout << "Inner prod of v & ov is : " << innProd << "\n";

	int numOfSame = std::inner_product(v.begin(), v.end(), ov.begin(), 0, std::plus<>(), [](int a, int b) { return b == a+1; });
	std::cout << "Sum of custom comparison is : " << numOfSame << "\n";

#pragma endregion

#pragma region adjacentdifference

	std::vector<int> o;
	std::adjacent_difference(v.begin(), v.end(), std::back_inserter(o), std::not_equal_to<>());
	displayContainer(o);

#pragma endregion

#pragma region partialsum
	
	std::vector<int> out;
	std::partial_sum(o.begin(), o.end(), std::back_inserter(out));
	displayContainer(out);

#pragma endregion


}