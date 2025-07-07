#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "upper and lower bound" << endl;
    int arr[6] = {1, 2, 2, 4, 4, 4};
    sort(arr, arr + 6);

    int key = 4;

    auto idx = lower_bound(arr, arr + 6, key);
    auto idx1 = upper_bound(arr, arr + 6, key);
    cout << "index of lower bound : " << idx - &arr[0] << endl;
    cout << "index of upper bound : " << idx1 - &arr[0] << endl;

    cout << "frequency of the key : " << idx1 - idx << endl;
    return 0;
}