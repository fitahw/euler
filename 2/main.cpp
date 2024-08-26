#include <iostream>

int main()
{
    int num1 {1};
    int num2 {1};
    int buf {};
    int sum {};
    int limit {4000000};
    while (num1 < limit && num2 < limit)
    {
        buf = num1 + num2;
        if (buf % 2 == 0)
        {
            sum += buf;
        }
        num1 = num2;
        num2 = buf;
    }
    std::cout << sum;
    return 0; 
}