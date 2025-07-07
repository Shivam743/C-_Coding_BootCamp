#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the length of array : " << endl;
    int N;
    cin >> N;
    vector<long long> array(N);

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++)
    {
        array[i] = pow(array[i], 2);
    }
    sort(array.begin(), array.end());

    for (auto var : array)
    {
        cout << var << " ";
    }

    return 0;
}