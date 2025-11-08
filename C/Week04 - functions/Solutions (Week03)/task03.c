#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumOfDigits(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main()
{
    int number = 1234;
    printf("Sum of digits: %d", sumOfDigits(number));

    // number === 1234
}