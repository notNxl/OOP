#include <cstdio>
#include <string>
#include "functions/Functions.h"

int main()
{
	std::string a;
	std::string s = input(a);
	s = toUpper(s);
	std::string temp;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
			temp += s[i];
	}
	output(temp);
}
