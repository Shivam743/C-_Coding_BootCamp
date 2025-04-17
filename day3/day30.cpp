#include <iostream>
using namespace std;
// operators
// conditional statment

int main()
{
    // cout << "Hello, World!" << endl;
    // int a = 15, b = 3;

    // a += b;
    // cout << a << endl;
    // a /= b;
    // cout << a << endl;
    // a -= b;
    // cout << a << endl;
    // a *= b;
    // cout << a << endl;

    // if else statement

    // if (a > 10)
    // {
    //     std::cout << "value of a is greater than 10 and a is = " << a << std::endl;
    // }
    // else
    // {
    //     std::cout << "value of a is less than 10 and a is =" << a << std::endl;
    // }

    // program to check the even no

    int input = 10;
    std::cout << "enter the value" << std::endl;
    cin >> input;
    if (input % 2 == 0)
    {
        std::cout << "even no" << std::endl;
    }
    else
    {
        std::cout << "odd" << std::endl;
    }

    return 0;
}