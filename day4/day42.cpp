

#include <iostream>

using namespace std;
int main()
{
    std::cout << "program to print odd no. b/t 1 to 100" << std::endl;
    int sum = 0;
    for (int i = 1; i <= 100; i = i + 2)
    {
        sum += i;
    }
    std::cout << "sum of odd number is = " << sum << std::endl;

    return 0;
}