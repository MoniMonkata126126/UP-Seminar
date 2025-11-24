#include <stdio.h>

void inputArray(int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }   
}

void printArray(const int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int hasTwoConsecutiveZeroes(const int arr[], unsigned size)
{
    for (unsigned i = 0; i < size - 1; i++)
    {
        if (arr[i] == 0 && arr[i + 1] == 0)
            return 1;
    }
    return 0;
}

int main(void)
{
    unsigned n;
    scanf("%u", &n);

    if (n > 500)
        return 1;

    int arr[500];

    inputArray(arr, n);
    printf("%d", hasTwoConsecutiveZeroes(arr, n));
}