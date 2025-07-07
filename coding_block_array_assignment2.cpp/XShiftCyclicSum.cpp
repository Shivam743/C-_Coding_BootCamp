#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the lenght of the array : " << endl;
    int N, Num_of_operations;
    cin >> N;
    vector<int> array(N);
    vector<int> array3(N);

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    cin >> Num_of_operations;

    vector<int> array2(Num_of_operations);

    for (int i = 0; i < Num_of_operations; i++)
    {
        cin >> array2[i];
    }

    int count = 0;
    while (count < Num_of_operations)
    {

        for (int i = 0; i < N; i++)
        {
            int index = (i - array2[count]);
            if (index < 0)
            {
                index = N + index;
                index = index % N;
            }
            else
            {
                index = index % N;
            }

            // cout << "index : " << index << endl;
            array3[i] = array[i] + array[index];
            // cout << "array[i] : " << array3[i] << endl;
        }

        for (int i = 0; i < N; i++)
        {
            array[i] = array3[i];
        }

        count++;
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    long long check = (pow(10, 9) + 7);
    cout << sum % check << endl;
    cout << sum << endl;

    return 0;
}