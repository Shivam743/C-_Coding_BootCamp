#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "sort 0 and 1" << endl;
    int N;
    cin >> N;
    vector<int> array(N);

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int right = 0, left = N - 1;

    while (right < left)
    {
        if (array[right] != 0)
        {
            swap(array[right], array[left]);
            left--;
        }
        else
        {
            right++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}