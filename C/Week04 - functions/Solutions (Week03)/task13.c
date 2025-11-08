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

int isSumOfDigitsEqualTo(int number, int expectedSum)
{
    return sumOfDigits(number) == expectedSum;
}

int main()
{
    printf("%d\n", isSumOfDigitsEqualTo(123, 6));
    printf("%d\n", isSumOfDigitsEqualTo(123, 10));
}