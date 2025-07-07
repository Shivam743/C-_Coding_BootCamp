#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    cout << "enter the lenght of the array : " << endl;
    int N, count = 1, majority = -1;

    bool found = false;
    cin >> N;

    int half = N / 2;
    int *array = new int[N];

    cout << "enter the element of the array : " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    sort(array, array + N);

    if (N == 1)
    {
        found = true;
        majority = array[0];
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (array[i] == array[i + 1])
        {
            count += 1;

            if (count > half)
            {
                majority = array[i];
                found = true;
                break;
            }
        }
        else
        {
            count = 1;
        }
    }

    if (found)
    {
        cout << "majority is element is : " << majority << endl;
    }
    else
    {
        cout << "no majority element is found : " << endl;
    }

    delete[] array;

    return 0;
}