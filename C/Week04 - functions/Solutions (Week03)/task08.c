#include <stdio.h>

void printCoolThing(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                printf("0");
            else if (i > j)
                printf("-");
            else
                printf("+");
        }
        printf("\n");
    }
}

int main()
{
    printCoolThing(4);
}