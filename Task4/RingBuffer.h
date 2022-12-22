#pragma once
#include <ostream>

class List final 
{
	struct Element
	{
		int data;
		Element* next;
	};

public:
	List()
	{
		head = NULL;
		tmp = head;
	}
	Element* head;
	Element* tmp;

	void init(int length);

	void print1(std::ostream& os);

	void add(char x);
};