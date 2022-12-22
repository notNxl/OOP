#include <cstdio>
#include <string>
#include "Functions.h"

int main()
{
	std::string a;
	std::string s = input(a);
	s = toUpper(s);
	s.erase(std::remove_if(s.begin(), s.end(), isspace), s.end());
	output(s);
}