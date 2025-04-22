#include <iostream>
using namespace std;

int main()
{
    int number;
    int originalNumber, remainder, result = 0;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    if (number < 100 || number > 999)
    {
        cout << "Please enter a valid 3-digit number." << endl;
        return 1;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == number)
    {
        cout << number << " is an Armstrong number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}