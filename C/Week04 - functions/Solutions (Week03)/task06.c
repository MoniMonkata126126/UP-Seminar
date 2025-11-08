#include <stdio.h>

void printUpperConsonants()
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        switch (i)
        {
            case 'A':
            case 'E':
            case 'O':
            case 'U':
            case 'I':
            break;

            default:
            printf("%c ", i);
        }
    }
}

int main()
{
    printUpperConsonants();
}