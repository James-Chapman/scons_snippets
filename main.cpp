#include <iostream>

#include "mathLib/lib.h"

int main()
{
    std::cout << "Hello world!" << std::endl;
    std::cout << MathLib::add(1, 1) << std::endl;
    std::cout << MathLib::subtract(10, 1) << std::endl;
    return 0;
}
