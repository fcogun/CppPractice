#include <iostream>
#include <map>
#include <unordered_map>

template<typename T>
void displayMap(T myMap)
{
	for (const auto& i : myMap)
	{
		std::cout << i.first << ' ' << i.second << '\n';
	}
	std::cout << std::endl;
}

void example8()
{

	std::unordered_map<int, std::string> myMap{ {1, "fuat"}, {2, "tugce"}, {3, "can"} };

	myMap.insert({ 4,"leyla" });

	myMap.emplace(5, "katia");


	displayMap(myMap);

	myMap.insert(std::pair<int, std::string>{5, "malako"});

	displayMap(myMap);

	auto [it1, success1] = myMap.insert_or_assign(5, "mokoko");
	std::cout << "created: " << success1 << ' ' << "it: " << it1->first << ',' << it1->second << std::endl;

	displayMap(myMap);

	auto [it2, success2] = myMap.try_emplace(4, "nina");
	std::cout << "success: " << success2 << ' ' << "it: " << it2->first << ',' << it2->second << std::endl;

	displayMap(myMap);

	std::cout << myMap.empty() << ' ' << myMap.size() << '\n';

	myMap.erase(std::next(myMap.begin(),2));
	displayMap(myMap);

	auto nh = myMap.extract(5);

	if (!nh.empty())
		nh.key() = 72;

	myMap.insert(std::move(nh));
	displayMap(myMap);

	auto bucketIndex = myMap.bucket(1);
	auto bucketSize = myMap.bucket_size(bucketIndex);

	std::cout << "bucket index : " << bucketIndex << "bucket size for it : " << bucketSize;
	std::cout << "bucket count : " << myMap.bucket_count() << "load factor : " << myMap.load_factor();
}