#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array : " << endl;
    int len, sum = 0;
    cin >> len;
    int array[len];
    int sum_after_index[len];
    cout << "enter the element of the array : ";
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    for (int i = 0; i < len; i++)
    {
        sum = sum - array[i];
        sum_after_index[i] = sum;
    }

    for (int i = 0; i < len; i++)
    {
        cout << " sum_after_index[" << i << "] : " << sum_after_index[i] << endl;
    }

    return 0;
}