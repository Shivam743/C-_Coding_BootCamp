#include <iostream>

using namespace std;

int main()
{
    cout << "enter the lenght of the array :" << endl;
    int len;
    cin >> len;
    int array[len], SquareArray[len];
    cout << "enter the element of the array : ";

    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < len; i++)
    {
        SquareArray[i] = array[i] * array[i];

        if (SquareArray[i] % 2 == 0)
            cout << " SquareArray[" << i << "] : " << SquareArray[i] << endl;

        else
            cout << " SquareArray[" << i << "] : " << "0" << endl;
    }

    return 0;
}