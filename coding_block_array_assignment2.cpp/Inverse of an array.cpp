#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the lenght of the array : " << endl;
    int N;
    cin >> N;

    vector<int> array(N);
    vector<int> array2(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++)
    {
        array2[array[i]] = i;
    }

    for (int i = 0; i < N; i++)
    {
        cout << array2[i] << " ";
    }

    return 0;
}