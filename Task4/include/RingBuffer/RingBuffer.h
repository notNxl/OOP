#pragma once
#include <ostream>

class List final 
{
public:
	List();

	void init(int length);

	void print(std::ostream& os);

	void add(char x);
};

