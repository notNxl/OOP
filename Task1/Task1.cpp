#include <iostream>
#include <random>
#include <math.h>
using namespace std;

bool podhodit(int a)
{
	int prev = a % 10;
	int current;
	while (a>10)
	{
		a = a / 10;
		current = a % 10;
		if (current <= prev)
		{
			return false;
		}
		prev = current;
	}
	return true;
}

void indexMinElem(int** arr, int n)
{
	int min = NULL;
	int indexI, indexJ;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (min != NULL)
			{
				if (arr[i][j] < min)
				{
					min = arr[i][j];
					indexI = i;
					indexJ = j;
				}
			}
			else
			{
				min = arr[i][j];
				indexI = i;
				indexJ = j;
			}
		}
	}
	cout << indexI << " " << indexJ << endl;
}

int avgOdd(int** arr, int n)
{
	int avg = 0;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] % 2 == 1)
			{
				counter += 1;
				avg += arr[i][j];
			}
		}
	}
	avg = avg / counter;
	return avg;
}

int countSpecElems(int** arr, int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (podhodit(arr[i][j]))
			{
				counter++;
			}
		}
	}
	return counter;
}
int main()
{
	int n;
	std::cin >> n;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = n*i + (j + 1);
		}
	}

	cout << endl;
	cout << "output matrix";
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	indexMinElem(arr, n);
	cout << avgOdd(arr, n) << endl;
	cout << countSpecElems(arr, n) << endl;
}
