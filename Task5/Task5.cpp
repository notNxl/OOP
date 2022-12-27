#include <iostream>
#include "functions/Functions.h"



int main()
{
	const int numberOfThreads = 9;
	int* inputArray = inputArr();
	for (int i = 0; i < 10; i++)
	{
		std::cout << inputArray[i] << " ";
	}
	std::cout << std::endl;

	std::atomic<int> sumResult(0);
	for (int i = 0; i < numberOfThreads; i++) {
		std::thread t(summarize, i, inputArray, 10, numberOfThreads, std::ref(sumResult));
		t.detach();
	}

	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << sumResult << std::endl;
}
