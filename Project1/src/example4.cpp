#include <iostream>
#include <string>


void example4()
{
	std::string myStr{ "fuat" };

	std::cout << myStr[2] << std::endl;

	myStr.at(0) = 's';

	std::cout << myStr << std::endl;

	char* cStr = myStr.data();

	cStr[1] = 'a';

	std::cout << myStr << std::endl;
	std::cout << myStr.length() << std::endl;

	std::cout << myStr.capacity()  << std::endl;
	
	myStr.insert(myStr.begin() + 1, { 'f', 'u' , 'c', 'i'});

	std::cout << myStr << std::endl;

	myStr.append(5, *(new char('u')));
	std::cout << myStr << std::endl;

	myStr.replace(0, 3, "abc");
	std::cout << myStr << std::endl;

	myStr.replace(myStr.begin(), myStr.begin()+4, "def");
	std::cout << myStr << std::endl;

	myStr.replace(0, 3, "defaidoihf", 3,2);
	std::cout << myStr << std::endl;

	auto pos = myStr.find("aat");
	std::cout << "found at position: " << pos << std::endl;
	
	pos = myStr.find('a',0);
	std::cout << "found at position: " << pos << std::endl;
	
	pos = myStr.rfind('a', 3);
	std::cout << "rfind found at position: " << pos << std::endl;

	pos = myStr.find_first_of("fuat");
	std::cout << "find first of f,u,a,t found at position: " << pos << std::endl;

	std::string subs = myStr.substr(7);
	std::cout << subs << std::endl;
	std::cout << subs << std::endl;

	

	subs.append(std::to_string(5));
}