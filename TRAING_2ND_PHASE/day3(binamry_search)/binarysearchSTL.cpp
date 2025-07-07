#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "binary search STL" << endl;
    int arr[5] = {5, 5, 58, 8, 8};
    int k = 8;
    sort(arr, arr + 5);
    bool flag = binary_search(arr, arr + 5, k);
    cout << flag << endl;

    return 0;
}