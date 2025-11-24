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

void swapMinMax(int arr[], unsigned size)
{
    unsigned maxIndex = 0, minIndex = 0;
    for (unsigned i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main(void)
{
    unsigned n;
    scanf("%u", &n);

    if (n > 100)
        return 1;

    int arr[100];

    inputArray(arr, n);
    swapMinMax(arr, n);
    printArray(arr, n);

    return 0;
}