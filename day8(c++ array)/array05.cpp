#include <iostream>

using namespace std;

int main()
{
    cout << "array : " << endl;
    int n;
    cout << "enter the length of the array :" << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "enter the element of array : " << endl;
        cin >> num;
        if (num <= 0)
        {
            cout << "invalid value only possitive value are allowed " << endl;
            cout << endl;
            cout << "enter the positive number" << endl;
            cin >> num;
            array[i] = num;
        }
        else
        {
            array[i] = num;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << "array[" << i << "] : " << array[i] * 2 << endl;
        }
        else
        {
            cout << "array[" << i << "] : " << array[i] << endl;
        }
    }

    return 0;
}