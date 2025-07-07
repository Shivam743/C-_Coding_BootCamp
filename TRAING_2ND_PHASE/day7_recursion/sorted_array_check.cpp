#include <bits/stdc++.h>

using namespace std;

bool sortcheck(int arr[], int len)
{
    if (len == 0)
        return true;

    if (arr[len] > arr[len - 1])
    {
        return sortcheck(arr, len - 1);
    }
    else
    {
        return false;
    }
}

int main()
{

    int arr[4] = {1, 23, 50, 400};
    cout << sortcheck(arr, 3) << endl;
    return 0;
}