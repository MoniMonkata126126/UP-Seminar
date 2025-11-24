#include <stdio.h>
#include <limits.h>

int solution(void)
{
    int n;

    int array[250];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++) // We only need to check the numbers from index 0 to n-1, because we can't sum after the last element
    {
        if (array[i] > 0) // if we hit a positive number
        {
            int sum = 0;

            for (int j = i + 1; j < n; j++) // we sum all of the elements that come after it
            {
                sum += array[j];    
            }

            return sum;
        }
    }

    return INT_MIN; // otherwise, return some sort of obviously wrong result (INT_MIN comes from <limits.h>)
}

int main(void)
{
    int result = solution();

    if (result == INT_MIN)
    {
        printf("Every number is negative or only the last one is positive!");
        return -1;
    }

    printf("%d", result);
    return 0;
}