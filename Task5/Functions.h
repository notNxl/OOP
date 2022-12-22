#pragma once
#include <atomic>
#include <thread>

void summarize(int n, int* inputArray, const int size, const int numberOfThreads, std::atomic<int>& sumResult);

int* inputArr();

int result(int numberOfThreads, int* inputArray);