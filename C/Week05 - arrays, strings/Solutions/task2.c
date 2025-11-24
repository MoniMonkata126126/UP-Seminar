#include <stdio.h>

int solution(void)
{
    int n;

    int array[500];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }


    // int ctr = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] == 0)
    //     {
    //         ctr++;
    //         if (ctr == 2)
    //         {
    //             return 1;
    //         }
    //     }
    //     else
    //     {
    //         ctr = 0;
    //     }     
    // }

    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == 0 && array[i + 1] == 0)
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    printf("%d", solution());
}