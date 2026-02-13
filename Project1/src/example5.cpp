#include <iostream>
#include <list>
#include <string>
#include "example5.h"

void displayList(const std::list<int>& aList)
{
	std::string str{};
	for (int i : aList)
	{
		str.append(std::to_string(i)).append(" ");
	}
	std::cout << str << std::endl;
}

void example5()
{
	std::list<int> myList = { 1, 2, 3, 4, 5 };

	std::cout << myList.front() << std::endl;


	int a = 7;
	std::cout << a << std::endl;

	displayList(myList);

	myList.push_front(a);
	std::cout << myList.front() << std::endl;

	displayList(myList);
	
	myList.push_front(std::move(a));
	std::cout << myList.front() << std::endl;

	std::cout << a << std::endl;
	
	myList.pop_back();

	displayList(myList);

	auto it = myList.erase(std::next(myList.begin()));

	displayList(myList);
	std::cout << *it << '\n';
	
	auto out = myList.remove(2);

	displayList(myList);
	std::cout << out << '\n';

	myList.resize(4);
	displayList(myList);

	myList.splice(myList.cend(), std::list<int>({1, 2, 3, 4}));
	displayList(myList);

	myList.remove_if([](int a) { return a % 2 == 0; });
	displayList(myList);
	
	myList.sort([](int a, int b) { return a > b; });
	displayList(myList);
	
	myList.reverse();
	displayList(myList);

	myList.unique();
	displayList(myList);
}
