#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;

    int originalNumber, remainder, result = 0;

    cout << "Enter a 3-digit number: " << endl;
    cin >> number;
    int numberOfDigits = 0;

    originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        numberOfDigits++;
    }
    originalNumber = number;
    cout << "numberOfDigits : " << numberOfDigits << endl;
    while (originalNumber != 0)
    {
        int sum = 1;
        remainder = originalNumber % 10;

        for (int i = 0; i < numberOfDigits; i++)
        {
            sum *= remainder;
        }
        result += sum;

        originalNumber /= 10;
    }
    if (result == number)
    {
        cout << number << "\n is an Armstrong number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}