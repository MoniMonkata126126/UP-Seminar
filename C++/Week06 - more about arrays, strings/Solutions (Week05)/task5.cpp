#include <iostream>

unsigned censor(char str[], char symbol)
{
    unsigned count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == symbol)
        {
            count++;
            str[i] = '*';
        }
    }
    return count;
}

int main()
{

    char str[150];
    std::cin >> str;

    char symbol;
    std::cin >> symbol;

    int result = censor(str, symbol);

    std::cout << result << "\n" << str;
}