#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array : " << endl;
    int len, sum;
    cin >> len;
    int array[len];
    int suffixSums[len];
    cout << "enter the element of the array : ";
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < len; i++)
    {
        sum = 0;
        for (int j = i; j < len; j++)
        {
            sum += array[j];
        }
        suffixSums[i] = sum;
    }
    for (int i = 0; i < len; i++)
    {
        cout << " suffixSums[" << i << "] : " << suffixSums[i] << endl;
    }

    return 0;
}