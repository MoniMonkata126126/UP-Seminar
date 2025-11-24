#include <stdio.h>

void solution(void)
{
    char buffer[1024];
    char character;

    printf("Enter string: ");
    scanf("%s", buffer); // notice - it's not &buffer

    printf("Enter character: ");
    scanf(" %c", &character);

    int occurances = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == character)
        {
            occurances++;
            buffer[i] = '*';
        }
    }
    
    printf("Occurances: %d\n", occurances);
    printf("%s", buffer);
}

int main(void)
{
    solution();
}