#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>


#include "myUtils.h"


void algorithm4()
{
	std::vector<int> v{ 1, 3, 4,5,6 ,7,8,4 };

	std::vector<int> cp;

	std::copy_if(v.begin(), v.end(), std::back_inserter(cp), std::not_fn(isEven));
	displayContainer(v);
	displayContainer(cp);


	std::vector<std::string> v2{ "leyla", "fuat", "tugce" };
	std::list<std::string> cp2;

	displayContainer(v2);
	displayContainer(cp2);
	std::move(v2.begin(), v2.end(), std::back_inserter(cp2));
	displayContainer(v2);
	displayContainer(cp2);

	std::transform(v.begin(), v.end(), v.begin(), [](int n) { return 2 * n; });
	displayContainer(v);

	std::vector<int> v3(4, 10);
	std::list<int> res;
	std::transform(v.begin(), std::next(v.begin(), std::min(v3.size(), v.size())), v3.begin(), std::back_inserter(res), [](int a, int b) {return a + b; });

	displayContainer(res);

	std::replace(res.begin(), res.end(), 16, 66);
	displayContainer(res);

	std::replace_if(res.begin(), res.end(), [](int a) { return a < 16; }, 1);
	displayContainer(res);

	std::fill_n(std::back_inserter(res), 5, 3);
	displayContainer(res);

	res.erase(std::remove(res.begin(), res.end(), 66), res.end());
	displayContainer(res);

	res.push_back(4);
	res.push_back(3);

	displayContainer(res);

	res.sort();
	res.unique();
	displayContainer(res);

	std::vector<char> charVector{ 'b', 'v', 'a', 'c', 'z' };

	std::sort(charVector.begin(), charVector.end());
	displayContainer(charVector);

	std::sort(charVector.begin(), charVector.end(), std::greater<>());
	displayContainer(charVector);

	std::stable_sort(charVector.begin(), charVector.end());
	displayContainer(charVector);

	std::stable_sort(charVector.begin(), charVector.end(), std::greater<char>{});
	displayContainer(charVector);

	v = { 1, 3, 4,5,6 ,7,8,4 };

	std::partial_sort(v.begin(), v.begin() + 4, v.end());
	displayContainer(v);

	std::partial_sort(v.begin(), v.begin() + 4, v.end(), std::greater<>());
	displayContainer(v);

	bool fullySorted = std::is_sorted(v.begin(), v.end());
	bool partiallySorted = std::is_sorted(v.begin(), v.begin() + 4, std::greater<>());

	std::cout << "v is fully sorted: " << fullySorted
		<< " v is partially sorted : " << partiallySorted << '\n';

	v = { 1, 3, 45, 11, 34, 54, 7, 8,2, 2, 23, 2,4 ,5 , 6, 55, 232 , 5 , 10 , 3 , 5 , 6, 4, 12, 445, 12, 45,234, 1,4 ,5, 6, 3, 6, 3, 6, 7,3, 5,2 };
	displayContainer(v);

	auto pivot = v.begin() + 2;
	std::nth_element(v.begin(), pivot, v.end(), std::greater());

	displayContainer(v);

#pragma region BinarySearchOperations

	std::sort(v.begin(), v.end());
	displayContainer(v);

	auto lowIt = std::lower_bound(v.begin(), v.end(), 9);
	auto upperIt = std::upper_bound(v.begin(), v.end(), 9);

	std::cout << std::distance(v.begin(), lowIt) << ' ' << std::distance(v.begin(), upperIt) << std::endl;

	std::cout << "binary search that 20 exists: " << std::binary_search(v.begin(), v.end(), 20) << '\n';

	auto [stIt, endIt] = std::equal_range(v.begin(), v.end(), 5);

	std::cout << std::distance(v.begin(), stIt) << ' ' << std::distance(v.begin(), endIt) << std::endl;

#pragma endregion

}