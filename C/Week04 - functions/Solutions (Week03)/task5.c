#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(unsigned n)
{
    if (n == 1 || n == 0)
        return 0;

    for (unsigned i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void printIsPrime(unsigned n)
{
    if (isPrime(n))
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    printIsPrime(1);
    printIsPrime(2);
    printIsPrime(3);
    printIsPrime(4);
    printIsPrime(5);
    printIsPrime(6);
    printIsPrime(7);
}