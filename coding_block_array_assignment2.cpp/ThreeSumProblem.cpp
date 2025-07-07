#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the lenght of the array :";
    int N, target;
    cin >> N;
    int array[N];

    cout << "\n enter the element of the array : " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    sort(array, array + N);

    cout << "enter the target value : ";
    cin >> target;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (target == array[i] + array[j] + array[k])
                {
                    cout << array[i] << ", " << array[j] << " and " << array[k] << endl;
                }
            }
        }
    }

    return 0;
}