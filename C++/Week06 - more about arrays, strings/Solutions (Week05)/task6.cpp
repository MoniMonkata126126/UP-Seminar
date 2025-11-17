#include <iostream>

bool isArrayPalindrome(int arr[], unsigned size)
{
    for (unsigned i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }

    return true;
}

void inputArray(int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int main()
{
    int arr[50];
    int n;
    std::cin >> n;
    inputArray(arr, n);

    std::cout << isArrayPalindrome(arr, n);
}