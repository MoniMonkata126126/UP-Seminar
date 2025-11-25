#include <stdio.h>

void printBinary(int number)
{
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        int mask = 1 << i;
        int temp = number & mask;

        printf("%d", temp >> i);
        // printf("%d", (number & (1 << i)) >> i);

        if (i % 8 == 0)
            printf(" ");
    }
}

/*
n: 00000000 00001100  &
m: 00100000 00000000 -----> 1 << i
r: 00X00000 00000000 -----> r >> i
R: 00000000 0000000X
*/

int main(void)
{ 
    for (unsigned i = 0; i <= 20; i++)
    {
        printf("%u:\t", i);
        printBinary(i);
        printf("\n");
    }
    return 0;
}