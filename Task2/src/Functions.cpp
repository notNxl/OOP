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
	int z = 0;
	for (int i = 0; i < x.length(); i++)
	{
		if ((x[i + 1] != ' ') && (x[i] == ' ') && (x[i+1] >= 97))
		{
			x[i + 1] -= 32;
		}
		if ((i == 0) && (x[i] >= 97))
		{
			x[i] -= 32;
		}
	}
	return x;
}
std::string spaceDel(std::string s)
{
	std::string temp = "";
	for (int i = 0; i < s.size(); i++)
        {
                if (s[i] != ' ')
                        temp += s[i];
        }
	return temp;
}

std::string hashtagGenerator(std::string s)
{
	s = toUpper(s);
	s = spaceDel(s);
	s = '#' + s;
	return s;
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
