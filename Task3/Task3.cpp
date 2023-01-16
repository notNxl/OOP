#include <iostream>
#include "Functions/Functions.h"

int main()
{
    std::cout << encodeToBase64("A") << std::endl;
    std::cout << decodeFromBase64("QQ==") << std::endl;
    return 0;
}
