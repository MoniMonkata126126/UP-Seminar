#include <iostream>

void inputArray(int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int getFirstPositive(int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            return i;
    }

    return -1;
}

int sumAfterIndex(int arr[], unsigned size, unsigned start)
{
    int sum = 0;
    for (unsigned i = start; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;
    std::cin >> n;
    
    int arr[250];
    inputArray(arr, n);
    int indexFirstPositive = getFirstPositive(arr, n);

    if (indexFirstPositive == -1)
    {
        std::cout << "No positive number!!!!";
    }
    else
    {
        std::cout << "At index " << indexFirstPositive
        << " found positive number " << arr[indexFirstPositive] << "\n";

        std::cout << "The sum of elements after that index is " <<
        sumAfterIndex(arr, n, indexFirstPositive + 1);
    }
}