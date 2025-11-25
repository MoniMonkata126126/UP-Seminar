#include <stdio.h>

// 123 456 -> 123456
// 123 * 1000 + 456

int myPow(int base, unsigned power)
{
    int result = 1;
    for (unsigned i = 0; i < power; i++)
    {
        result *= base;
    }
    return result;
}

int length(int number)
{
    int count = 0;
    do
    {
        count++;
        number /= 10;
    } while (number != 0);

    return count;
}

int concat(int first, int second)
{
    return first * myPow(10, length(second)) + second;
}

int main(void)
{
    printf("%d", concat(123, 456));
    return 0;
}