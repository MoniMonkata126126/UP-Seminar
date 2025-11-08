#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned factorial(unsigned n)
{
    if (n == 0) 
        return 1;

    unsigned prod = 1;

    while (n != 1)
    {
        prod *= n;
        n--;
    }

    return prod;
}

int main()
{
    unsigned number;
    scanf("%u", &number);

    unsigned result = factorial(number);

    printf("%u! = %u", number, result);
}