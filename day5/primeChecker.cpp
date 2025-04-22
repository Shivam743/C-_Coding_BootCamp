#include <iostream>
using namespace std;

int main()
{
    int number;
    std::cout << "enter the number : " << std::endl;
    cin >> number;
    bool prime = true;

    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            std::cout << number << " is not a prime number" << std::endl;
            prime = false;
            break;
        }
    }
    if (prime)
    {
        std::cout << number << " is a prime number" << std::endl;
    }

    return 0;
}
