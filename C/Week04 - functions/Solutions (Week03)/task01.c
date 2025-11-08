#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int scanAndFindMaxNegative(int count)
{
    int maxNumber = 0;

    for (int i = 0; i < count; i++)
    {
        int input;
        scanf("%d", &input);

        if (input < 0 && (input > maxNumber || maxNumber == 0))
        {
            maxNumber = input;
        }
    }

    return maxNumber;
}

int main()
{
    int count;
    scanf("%d", &count);

    int max = scanAndFindMaxNegative(count);
    if (max < 0)
        printf("Max negative: %d", max);
    else
        printf("No negative numbers were inputted");
}