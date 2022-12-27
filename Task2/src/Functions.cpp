#include <iostream>
#include <string>
#include "functions/Functions.h"

std::string input(std::string s)
{
	std::getline(std::cin, s);
	try
	{
		if (s.empty())
		{
			throw (s);
		}
	}
	catch (...)
	{
		std::cout << "String is empty" << std::endl;
	}
	return s;
}

std::string toUpper(std::string x)
{
	x = '#' + x;
	int z = 0;
	for (int i = 0; i < x.length(); i++)
	{
		if ((x[i + 1] != ' ') && (x[i] == ' '))
		{
			x[i + 1] -= 32;
		}
		if ((x[i] != ' ') && (x[i] >= 97) && (z == 0))
		{
			x[i] -= 32;
			z++;
		}
	}
	return x;
}

void output(std::string s)
{
	try
	{
		if (s.length() > 100)
		{

			throw (s);
		}
		else
		{
			std::cout << s;
		}
	}
	catch (...)
	{
		std::cout << "String have more than 100 symbols \n";
	}
}
