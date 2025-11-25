#include <stdio.h>

/*
[1,2,8,13,14,15]
 a

[5,7,10,16,17,18]
 b

[1, 2, 5, 7, 8, 10, 13, 14, 15, 16, 17, 18]
*/

int main(void)
{   
    int arr1[100];
    int arr2[100];
    int sorted[200];
    
    int size1;
    int size2;

    printf("Enter size of array 1 [1-100]: ");
    scanf("%d", &size1);

    printf("Enter array 1: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array 2 [1-100]: ");
    scanf("%d", &size2);

    printf("Enter array 2: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int counter = 0;

    int firstPtr = 0, secondPtr = 0;
    
    while (firstPtr < size1 && secondPtr < size2)
    {
        if (arr1[firstPtr] < arr2[secondPtr])
        {
            sorted[counter++] = arr1[firstPtr++];
        }
        else
        {
            sorted[counter++] = arr2[secondPtr++];
        }
    }
    if (firstPtr == size1) // arr1 is exhausted
    {
        while (secondPtr < size2)
        {
            sorted[counter++] = arr2[secondPtr++];
        }
    }
    else // arr2 is exhausted
    {
        while (firstPtr < size1)
        {
            sorted[counter++] = arr1[firstPtr++];
        }
    }

    printf("Sorted: ");
    for (int i = 0; i < counter; i++) // size1 + size2
    {
        printf("%d ", sorted[i]);
    }

    return 0;
}