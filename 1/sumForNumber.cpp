#include "sumForNumber.h"
#include <iostream>

int sumForNumber(int x, int y)
{
    int totalSum {};
    for (int i {1}; i < 1000; i++)
    {
        if (i % x == 0 || i % y == 0)
        {
            std::cout << i << " ";
            totalSum = totalSum + i;
        }
    }
    return totalSum;
}