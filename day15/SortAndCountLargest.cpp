#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array:" << endl;
    int len;
    cin >> len;
    int count = 0;
    int *array = new int[len];

    cout << "enter the element of the array :" << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (array[j + 1] < array[j])
            {
                swap(array[j + 1], array[j]);
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << "   ";
    }

    for (int i = len - 1; i >= 0; i--)
    {
        if (array[i] != array[i - 1])
        {
            count++;
        }
    }

    cout << " count : " << count << endl;

    return 0;
}