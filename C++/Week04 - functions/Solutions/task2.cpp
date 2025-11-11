#include <iostream>

unsigned long long factorial(unsigned num)
{
    unsigned long long result = 1;
    while (num > 1)
    {
        result *= num;
        num--;
    }
    return result;
}

int main()
{
    std::cout << factorial(5);
}