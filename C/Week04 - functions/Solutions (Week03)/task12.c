#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int firstDigit(int number)
{
    while (number >= 10)
    {
        number /= 10;
    }

    return number;
}

int main()
{
    printf("%d\n", firstDigit(59321));
    printf("%d\n", firstDigit(68123));
    printf("%d\n", firstDigit(123));
    printf("%d\n", firstDigit(9283));
}