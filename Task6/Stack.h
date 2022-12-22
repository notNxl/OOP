#pragma once

#include <ostream>

struct Node
{
    Node* next = nullptr;
    char value;
};

struct Stack
{
    Node* head = nullptr;
    Node* last = nullptr;
    int size = 0;
};

Stack* stackCreate();

void stackPush(Stack* stack, char value);

char stackTop(Stack* stack);

void stackPop(Stack* stack);

void stackPrint(Stack* stack, std::ostream& os);

int stackSize(Stack* stack);

bool stackEmpty(Stack* stack);