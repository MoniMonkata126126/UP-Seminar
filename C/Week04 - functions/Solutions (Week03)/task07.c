#include <stdio.h>

void printFloyd(int rows)
{
    int counter = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", counter++);
            // we could better align the numbers using '\t'
            // printf("%d\t", counter++);
        }
        printf("\n");
    }
    
}

int main()
{
    printFloyd(4);
}