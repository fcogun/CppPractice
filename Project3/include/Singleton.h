#pragma once

#include <iostream>

class Singleton
{
public:

	static Singleton& getInstance()
	{
		static Singleton instance; // created once & thread safe!! 
		return instance;
	}

	void doSomething() 
	{
		std::cout << "Doing something\n";
	}

private:
	Singleton() { std::cout << "Singleton's private constructor is called!"; };
	~Singleton() { std::cout << "Singleton's private destructor is called!"; };

	Singleton(const Singleton& other) = delete;
	Singleton& operator=(const Singleton& other) = delete;
};