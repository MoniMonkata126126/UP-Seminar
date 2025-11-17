#include <iostream>

void inputArray(int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void printReverse(const int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        std::cout << arr[size - 1 - i] << ' ';
    }
}

int main()
{
    int arr[250];
    int n;
    std::cin >> n;

    inputArray(arr, n);
    printReverse(arr, n);
}