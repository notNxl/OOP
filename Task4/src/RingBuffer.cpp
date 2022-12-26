#include <iostream>
#include "RingBuffer/RingBuffer.h"

    void List::init(int length)
    {
        head = new Element;
        tmp = head;
        Element* current = head;
        for (int i = 0; i < length - 1; i++)
        {
            current->next = new Element;
            current = current->next;
        }
        current->next = head;
    };

    void List::print1(std::ostream& os) {
        Element* current = head;
        do
        {
            if (current->data == -842150451)
            {
                os << "empty" << std::endl;
            }
            else
            {
                os << current->data << std::endl;
            }
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }

    void List::add(char x)
    {
        tmp->data = x;
        tmp = tmp->next;
    };
