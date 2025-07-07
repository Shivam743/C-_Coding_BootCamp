#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    int a = 10, b = 20;
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a" << a << endl;
    cout << "b" << b << endl;

    return 0;
}