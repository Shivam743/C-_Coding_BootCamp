#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the length of the program : ";
    int len;
    cin >> len;
    int array[len];

    for (int i = 0; i < len; i++)
    {
        cout << "enter the element array[" << i << "] : ";
        cin >> array[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << "element of array[" << i << "] : " << "0" << endl;
        }
        else
        {
            cout << "element of array[" << i << "] : " << array[i] << endl;
        }
    }

    return 0;
}