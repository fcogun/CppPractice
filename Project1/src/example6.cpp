
#include <iostream>
#include <stack>
#include <queue>
#include <cassert>


void displayQueue(std::priority_queue<int> aQueue)
{
	while (aQueue.size())
	{
		std::cout << aQueue.top() << " ";
		aQueue.pop();
	}
}

void example6()
{

	std::stack<int> myStack;

	myStack.push(5);
	myStack.push(3);

	std::cout << myStack.top() << '\n';

	myStack.pop();

	std::cout << myStack.top() << '\n';

	std::cout << "size of stack is : " << myStack.size() << std::endl;

	std::queue<int> myQueue;

	myQueue.push(3);
	myQueue.push(5);
	myQueue.push(7);

	std::cout << myQueue.front() << '\n';
	std::cout << myQueue.back() << '\n';
	
	myQueue.pop();

	std::cout << myQueue.front() << '\n';
	std::cout << myQueue.back() << '\n';

	assert(myQueue.size() == 2);

	std::vector<int> initVector({ 1,2,33, 15, 3,4,5,11,2,132,41,31, 63 });
	std::priority_queue<int> myPrioQueue(std::less<int>{}, initVector);

	displayQueue(myPrioQueue);
}