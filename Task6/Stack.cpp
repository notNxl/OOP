#include "stack.h"

Stack* stackCreate()
{
    return new Stack;
}

void stackPush(Stack* stack, char value)
{
    Node* node = new Node;
    node->value = value;

    if (nullptr == stack->head) {
        stack->head = node;
    }
    else {
        node->next = stack->head;
        stack->head = node;
    }

    stack->size++;
}

char stackTop(Stack* stack)
{
    if (nullptr == stack->head) {
        return -1;
    }
    return stack->head->value;
}

void stackPop(Stack* stack)
{
    if (nullptr == stack->head) {
        return;
    }

    Node* current = stack->head;
    stack->head = stack->head->next;
    delete current;
    stack->size--;
}

void stackPrint(Stack* stack, std::ostream& os)
{
    Node* current = stack->head;

    while (nullptr != current) {
        os << current->value << " ";
        current = current->next;
    }

    if (nullptr == stack->head) {
        os << "Stack is empty";
    }

    os << std::endl;
}

int stackSize(Stack* stack)
{
    return stack->size;
}

bool stackEmpty(Stack* stack)
{
    return stack->size == 0;
}