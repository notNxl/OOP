#include "operations/Operations.h"

int priority(char oper)
{
    int p;
    switch (oper)
    {
    case '(':
        p = 1;
        break;

    case ')':
        p = 2;
        break;

    case '^':
        p = 5;
        break;

    case '*':
    case '/':
        p = 4;
        break;

    case '+':
    case '-':
        p = 3;
        break;

    default:
        p = 0;
        break;
    }
    return p;
}
