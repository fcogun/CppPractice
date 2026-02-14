#include <iostream>
#include <list>
#include "myUtils.h"



void example5()
{
	std::list<int> myList = { 1, 2, 3, 4, 5 };

	std::cout << myList.front() << std::endl;


	int a = 7;
	std::cout << a << std::endl;

	displayContainer(myList);

	myList.push_front(a);
	std::cout << myList.front() << std::endl;

	displayContainer(myList);
	
	myList.push_front(std::move(a));
	std::cout << myList.front() << std::endl;

	std::cout << a << std::endl;
	
	myList.pop_back();

	displayContainer(myList);

	auto it = myList.erase(std::next(myList.begin()));

	displayContainer(myList);
	std::cout << *it << '\n';
	
	auto out = myList.remove(2);

	displayContainer(myList);
	std::cout << out << '\n';

	myList.resize(4);
	displayContainer(myList);

	myList.splice(myList.cend(), std::list<int>({1, 2, 3, 4}));
	displayContainer(myList);

	myList.remove_if([](int a) { return a % 2 == 0; });
	displayContainer(myList);
	
	myList.sort([](int a, int b) { return a > b; });
	displayContainer(myList);
	
	myList.reverse();
	displayContainer(myList);

	myList.unique();
	displayContainer(myList);
}
