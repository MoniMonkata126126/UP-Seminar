#include <iostream>

void changeCase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a' - 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }
    }
}

int main()
{
    char buffer[1024];
    std::cin >> buffer;

    changeCase(buffer);

    std::cout << buffer;
}