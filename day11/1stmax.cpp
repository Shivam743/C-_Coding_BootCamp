#include <iostream>
#include <limits.h>

using namespace std;

// void maxFinder(int array[], int len)
// {
//     int max = array[0];
//     int index = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (max < array[i])
//         {
//             swap(max, array[i]);
//             index = i;
//         }
//     }
//     cout << max << "    ";
//     // cout << max << " index " << index << endl;
//     array[index] = INT_MIN;
// }

int main()
{
    cout << "enter the lenght of the array : " << endl;
    int len;
    cin >> len;
    int *array = new int[len];
    // int x = INT_MIN;

    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    cout << "1st max elemnent" << endl;
    int max = array[0];
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            index = i;
        }
    }
    cout << max << endl;
    // cout << max << " index " << index << endl;
    array[index] = INT_MIN;

    cout << "2st max elemnent" << endl;

    max = array[0];
    index = 0;
    for (int i = 0; i < len; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            index = i;
        }
    }
    cout << max << endl;
    // cout << max << " index " << index << endl;
    array[index] = INT_MIN;

    cout << "3st max elemnent" << endl;

    max = array[0];
    index = 0;
    for (int i = 0; i < len; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            index = i;
        }
    }
    cout << max << endl;
    // cout << max << " index " << index << endl;
    array[index] = INT_MIN;

    // maxFinder(array, len);
    // maxFinder(array, len);
    // maxFinder(array, len);

    return 0;
}