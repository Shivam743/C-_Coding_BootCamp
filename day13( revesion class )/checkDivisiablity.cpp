#include <iostream>

using namespace std;

int main()
{
    cout << "check divisablity by 5 :" << endl;
    int num;
    cin >> num;
    if (num % 5 == 0)
    {
        cout << "number is divisable by 5 . " << endl;
    }
    else
    {
        cout << "number is not divisable by 5 . " << endl;
    }

    return 0;
}