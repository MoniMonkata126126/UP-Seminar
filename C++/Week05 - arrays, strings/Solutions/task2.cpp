#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter array size [1-500]: ";
    cin >> n;

    if (n < 1 || n > 500)
        return -1;

    int arr[500];

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << "/" << n-1 << ": ";
        cin >> arr[i];
    }

    bool hasTwoConsecutiveZeroes = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && arr[i + 1] == 0)
        {
            hasTwoConsecutiveZeroes = true;
        }
    }

    cout << (hasTwoConsecutiveZeroes 
        ? "The array has 2 consecutive zeroes" 
        : "The array doesn't have 2 consecutive zeores");

    return 0;
}