#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int a, unsigned n)
{
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= a;
    }

    return prod;
}

int main()
{
    printf("%d\n", power(5, 2));
    printf("%d\n", power(10, 3));
    printf("%d\n", power(25, 6));
}