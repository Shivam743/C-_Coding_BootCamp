#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the length of array : " << endl;
    int N, sum = 0;
    cin >> N;
    vector<int> array(N);

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++)
    {
        sum += array[i];
        cout << sum << " ";
    }

    return 0;
}