#include <stdio.h>

void solution(void)
{
    int n;

    int array[250];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", array[i]);
    }
}

int main(void)
{
    solution();
}