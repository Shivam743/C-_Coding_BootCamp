#include <bits/stdc++.h>

using namespace std;

int main()
{
    // right shifting the array( circurlar or normal ) k steps:
    //
    //
    //
    int len = 5, k = 2;
    int array[len] = {1, 2, 3, 4, 5};
    vector<int> array2(len);

    // for (int i = 0; i < len; i++)
    // {
    //     array2[(i + k) % len] = array[i];
    // }
    // for (auto var : array2)
    // {
    //     cout << var << " ";
    // }

    //
    //
    //
    //
    //
    //
    // left shift shifting the array( circurlar or normal ) k steps:

    for (int i = 0; i < len; i++)
    {
        array2[(i - k + len) % len] = array[i];
        cout << (i - k + len) % len << " ";
    }
    cout << endl;
    for (auto var : array2)
    {
        cout << var << " ";
    }

    return 0;
}
