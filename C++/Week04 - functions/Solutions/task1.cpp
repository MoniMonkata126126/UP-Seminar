#include <iostream>

bool isTriangle(double a, double b, double c)
{
    return a + b > c && a + c > b && c + b > a;
}

int main()
{
    std::cout << isTriangle(3,4,5) << '\n';
    std::cout << isTriangle(1,2,3);
}