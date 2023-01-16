#include <iostream>
#include "RingBuffer/RingBuffer.h"

using namespace std;



int main()
{
    List testing;
    int n = 5;
    testing.init(n);
    for (int i = 1; i < 8; i++) 
    {
        testing.add((char)i);
        testing.print(std::cout);
    }
    return 0;
}
