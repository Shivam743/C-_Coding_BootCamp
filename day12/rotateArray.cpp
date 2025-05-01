#include <iostream>

using namespace std;

int main()
{
    cout << "<<<<<<<<....  rotate an array..... >>>>>> " << endl;
    cout << "\nenter the length of array" << endl;
    int len;
    cin >> len;
    int *array = new int[len];
    int rotateArray[len];
    int index = 0;
    int k;

    cout << "\nenter the number of step you want to rotate" << endl;
    cin >> k;
    cout << "enter the element of the array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }

    if (k > len)
    {
        k = k % len;
    }

    for (int i = 0; i < len; i++)
    {
        if (i + k < len)
        {
            rotateArray[i + k] = array[i];
        }
        else
        {
            rotateArray[index] = array[i];
            index++;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << rotateArray[i] << "   ";
    }

    return 0;
}