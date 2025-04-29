#include <iostream>

using namespace std;

int main()
{

    cout << "sum of N natural number : " << endl;
    int len;
    int sum = 0;
    cout << "enter the length of array : ";
    cin >> len;
    int array[len];
    for (int i = 1; i <= len; i++)
    {
        array[i - 1] = i;
    }
    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    cout << "sum = " << sum << endl;

    return 0;
}