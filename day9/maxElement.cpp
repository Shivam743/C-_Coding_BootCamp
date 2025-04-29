#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array : " << endl;
    int len;
    cin >> len;
    int array[len];

    for (int i = 0; i < len; i++)
    {
        cout << "enter the " << i << " element of the array : ";
        cin >> array[i];
    }
    int max = array[0];

    for (int i = 0; i < len; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "maximum element in array is : " << max << endl;

    return 0;
}