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

int main()
{
    printf("%d\n", digitCount(123));
    printf("%d\n", digitCount(1243));
    printf("%d\n", digitCount(1));
    printf("%d\n", digitCount(122223));
}