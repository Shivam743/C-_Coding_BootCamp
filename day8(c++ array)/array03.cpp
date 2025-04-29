#include <iostream>

using namespace std;

int main()
{
    cout << "array : " << endl;
    int array[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "enter element : " << endl;
        cin >> array[i];
    }

    cout << "value of array[0] * 2 + array[5] * 2  : " << array[0] * 2 + array[5] * 2 << endl
         << endl;

    cout << "square of each element of array" << endl
         << endl;

    for (int i = 0; i < 6; i++)
    {
        int c = array[i] * array[i];
        cout << "square of element array [" << i << "] : " << c << endl;
    }

    return 0;
}