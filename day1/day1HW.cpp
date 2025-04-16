// Mathematical property check(using the formula : 5n² ± 4 must be a perfect square)

#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int num)
{
    return isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4);
}

int main()
{
    int number;
    cout << "Enter a number to check: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Negative numbers can't be Fibonacci numbers." << endl;
    }
    else if (isFibonacci(number))
    {
        cout << number << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << number << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}