#include "functions/Functions.h"

const int arraySize = 10;

void summarize(int n, int* inputArray, const int size, const int numberOfThreads, std::atomic<int>& sumResult)
{
	for (int i = n; i < size; i += numberOfThreads)
	{
		sumResult += inputArray[i];
	}
}

int* inputArr()
{
	int* inputArray = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		inputArray[i] = i * 3;
	}
	return inputArray;
}
