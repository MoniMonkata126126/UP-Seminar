#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned digitCount(int number)
{
    int counter = 0;
    while (number)
    {
        number /= 10;
        counter++;
    }

    return counter;
}

int getDigitAtIndex(int number, int index)
{
    int count = digitCount(number);
    for (int i = 0; i < count - index - 1; i++)
    {
        number /= 10;
    }
    return number % 10;
}

int main()
{
    // 842786, 3 -> 7

    int number = 842786;
    printf("%d, index 3 -> %d\n", number, getDigitAtIndex(number, 3));

    printf("Every index: \n");
    int count = digitCount(number);
    for (int i = 0; i < count; i++)
    {
        printf("Index #%d: %d\n", i, getDigitAtIndex(number, i));
    }
}