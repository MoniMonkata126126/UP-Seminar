#include <iostream>

unsigned long long printBinary(unsigned num)
{
    unsigned long long result = 0;
    unsigned long long accumulator = 1;
    while (num != 0)
    {
        result += accumulator * (num % 2);

        accumulator *= 10;
        
        num /= 2;
    }

    return result;
}

int main()
{
    std::cout << printBinary(13);
}