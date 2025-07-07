#include <iostream>
using namespace std;

float squar(float x)
{
    return x * x;
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}
int divd(int a, int b)
{
    return a / b;
}

void calculator(char s)
{
    switch (s)
    {
    case '^':
    {
        float num;
        cout << "Enter the number: ";
        cin >> num;
        float res = squar(num);
        cout << "Result: " << res << endl;
        break;
    }
    case '+':
    {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int res = sum(num1, num2);
        cout << "Result: " << res << endl;
        break;
    }
    case '-':
    {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int res = sub(num1, num2);
        cout << "Result: " << res << endl;
        break;
    }
    case '*':
    {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int res = mul(num1, num2);
        cout << "Result: " << res << endl;
        break;
    }
    case '/':
    {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int res = divd(num1, num2);
        cout << "Result: " << res << endl;
        break;
    }
    default:
    {
        cout << "Invalid operation!" << endl;
        break;
    }
    }
}

int main()
{
    cout << "Available operations:\n"
         << "+ : Addition\n"
         << "- : Subtraction\n"
         << "* : Multiplication\n"
         << "^ : Square (enter this for square operation)\n"
         << "/ : divide"
         << "Enter operation: ";

    char s;
    cin >> s;
    calculator(s);

    return 0;
}