#include "Example.hpp"
#include "JohnTheCat/JohnTheCat.h"
#include <iostream>

int MAC(int x, int y, int& sum) {
    sum += x * y;
    return sum;
}

int main()
{
    std::cout << "Test!\n";

    JohnTheCat j{4};

    return 0;
}