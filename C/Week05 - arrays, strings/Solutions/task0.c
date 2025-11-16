#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0 || n > 100)
        return 67;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    printf("Max: %d at index %d\n", arr[maxIndex], maxIndex);
    printf("Min: %d at index %d\n", arr[minIndex], minIndex);

    return 0;
}