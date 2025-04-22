#include <iostream>
using namespace std;

bool isLeapYear(int year)
{

    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    double num1, num2, result;
    char op;

    // 1. Simple Calculator

    cout << "1. Simple Calculator  " << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator." << endl;
    }

    // 4. Check Leap Year

    //     Concepts : Logical Operators,
    //                If - Else
    //                            Task : Input a year and check whether it is a leap year or
    //                    not.A year is a leap year if : (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)

    std::cout << "4. Check Leap Year" << std::endl;
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    //     6. Table of a Number

    // Concepts: Loops
    // Task: Ask the user for a number and print its multiplication table up to 10.
    std::cout << " 6. Table of a Number" << std::endl;
    {
        int number;

        // Get input from user
        cout << "Enter a number: ";
        cin >> number;

        // Print multiplication table up to 10
        cout << "\nMultiplication Table of " << number << ":\n";
        cout << "------------------------\n";

        for (int i = 1; i <= 10; ++i)
        {
            cout << number << " x " << i << " = " << (number * i) << endl;
        }

        return 0;
    }

    return 0;
}