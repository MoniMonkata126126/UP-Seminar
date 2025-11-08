#include <stdio.h>

int evenCount(int number)
{
    int counter = 0;
    while (number)
    {
        int digit = number % 10;
        
        if (digit % 2 == 0)
        {
            counter++;
        }

        number /= 10;
    }
    return counter;
}

int main()
{
    printf("%d\n", evenCount(4827));
    printf("%d\n", evenCount(47));
    printf("%d\n", evenCount(412827));
    printf("%d\n", evenCount(48252327));
}