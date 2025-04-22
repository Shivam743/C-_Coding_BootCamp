#include <iostream>

using namespace std;

int main()
{
    std::cout << "program to check weather a given number is Palindrome number or not" << std::endl;
    int number, reminder, reverse = 0;
    std::cout << "enter the number : " << std::endl;
    cin >> number;

    int temp = number;

    while (number != 0)
    {

        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    if (temp == reverse)
    {
        std::cout << "given number is palindrome number : " << temp << std::endl;
    }
    else
    {
        std::cout << "give number is not a prime number : " << temp << std::endl;
    }

    return 0;
}