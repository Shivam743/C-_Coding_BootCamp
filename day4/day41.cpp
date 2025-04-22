
#include <iostream>

using namespace std;
int main()
{
    std::cout << "program to print the sum of first 100 natural number" << std::endl;
    std::cout << "method 1 using loop " << std::endl;
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << "sum is = " << sum << std::endl;

    std::cout << "method 2 using the AP formula " << std::endl;

    int sum = (100 / 2) * (100 + 1);
    std::cout << "sum is = " << sum << std::endl;

    return 0;
}