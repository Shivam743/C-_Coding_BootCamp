#include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int N_smallest(int arr[], int len, int n)
{
    sort(arr, arr + len);
    return arr[n - 1];
}

int main()
{

    cout << "enter the lenght of array : " << endl;
    int len;
    cin >> len;
    int *array = new int[len];

    cout << "enter the element of array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }

    cout << "enter the nth minimum you want to find " << endl;
    int N;
    cin >> N;
    cout << N_smallest(array, len, N) << endl;
    return 0;
}