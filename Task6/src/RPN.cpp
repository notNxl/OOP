#include <iostream>
#include "stack/Stack.h"
#include "operations/Operations.h"

std::string defaultToRPN(std::string expression)
{
	Stack* stack = stackCreate();
	std::string expressionInRPN;
	std::cout << priority('*');
	for (int i = 0; i < expression.length(); i++) 
	{
		std::cout << expressionInRPN << std::endl;
		stackPrint(stack, std::cout);
		std::cout << std::endl;
		if (priority(expression[i]) == 0) // если число
		{
			expressionInRPN += expression[i];
		}
		if (priority(expression[i]) == 1) // если открывающая скобка
		{
			stackPush(stack, expression[i]);
		}
		if (priority(expression[i]) == 2) // если закрывающая скобка
		{
			if (!stackEmpty(stack))
			{
				while (stackTop(stack) != '(')
				{
					expressionInRPN += stackTop(stack);
					stackPop(stack);
				}
				stackPop(stack);
			}
		}
		if (priority(expression[i]) > 2) // если бинарная операция
		{
			if (!stackEmpty(stack))
			{
				while (priority(expression[i]) <= priority(stackTop(stack)))
				{
					expressionInRPN += stackTop(stack);
					stackPop(stack);
				}
			}
			stackPush(stack, expression[i]);
		}
	}
	while (!stackEmpty(stack))
	{
		expressionInRPN += stackTop(stack);
		stackPop(stack);
	}
	std::cout << std::endl;
	return expressionInRPN;
}
