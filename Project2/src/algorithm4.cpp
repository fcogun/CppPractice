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

	std::list<int> cp2;

	std::move(v.begin(), v.end(), std::back_inserter(cp2));
	displayContainer(cp2);
	displayContainer(v);

}