#include <iostream>
#include <string>
#include "RPN/RPN.h"



int main() 
{
    std::string expression;
    std::cout << "Enter your expression" << std::endl;
    std::cin >> expression;
    std::string expressionInRpn = defaultToRPN(expression);
    std::cout << expressionInRpn << std::endl;
    return 0;
}
