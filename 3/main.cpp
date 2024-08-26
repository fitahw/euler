/* DOES NOT WORK!
#include <vector>
#include <iostream>

void recursiveFindPrimes(int num, std::vector<int> primes)
{
    for (int i {1}; i < num; i++)
    {
        if (num % i == 0 && num != i)
        {
            recursiveFindPrimes(num / i, primes);
            primes.push_back(i);
            return;
        }
    }
}

int main()
{
    std::vector<int> primes {};
    recursiveFindPrimes(13195, primes);
    int temp {0};
    for (const int &i : primes)
    {
        if (i > temp)
        {
            temp = i;
        }
    }
    std::cout << temp;
}
*/