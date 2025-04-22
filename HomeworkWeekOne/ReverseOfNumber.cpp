#include <iostream>
using namespace std;

int main()
{
    int number, reverse = 0;
    std::cout << "enter the number :" << std::endl;
    cin >> number;

    while (number != 0)
    {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    std::cout << "reverse of the : " << number << std::endl;
    cout << " is : " << reverse << endl;
    return 0;
}