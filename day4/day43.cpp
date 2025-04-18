

#include <iostream>

using namespace std;
int main()
{
    std::cout << "program to check weather a given number is prime or not" << std::endl;
    int num;
    bool prime = true;
    std::cout << "enter the the number between 5 to 100" << std::endl;
    cin >> num;

    if (num > 5 && num < 100)
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                std::cout << "not a prime number" << std::endl;
                prime = false;
                break;
            }
        }
        if (prime)
        {
            std::cout << "number is prime " << num << std::endl;
        }
    }
    else
    {
        std::cout << "invalid input" << std::endl;
        std::cout << "please enter number between 5 to 100" << std::endl;
    }

    return 0;
}