#include <stdio.h>

void printReverseOrderLineByLine(int number)
{
    while (number)
    {
        printf("%d\n", number % 10);
        number /= 10;
    }
}

int main()
{
    printReverseOrderLineByLine(472);
}