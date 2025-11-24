#include <stdio.h>

int isArrayPalindrome(int array[], unsigned size)
{
    for (unsigned i = 0; i < (size/2); i++)
    {
        if (array[i] != array[(size - 1) - i])
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    unsigned n;
    int array[50];

    scanf("%u", &n);

    for (unsigned i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }


    printf("%d", isArrayPalindrome(array, n));
}