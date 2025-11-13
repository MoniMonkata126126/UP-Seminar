#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter array size [1-100]: ";
    cin >> n;

    if (n < 1 || n > 100)
        return -1;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << "/" << n-1 << ": ";
        cin >> arr[i];
    }
    
    int indexMax = 0;
    int indexMin = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[indexMin])
        {
            indexMin = i;
        }
        if (arr[i] > arr[indexMax])
        {
            indexMax = i;
        }
    }

    std::cout << "Max: " << arr[indexMin] << "\nMin: " << arr[indexMax] << "\n\n";
    std::cout << "Index Max: " << indexMax << "\nIndex Min: " << indexMin;

}