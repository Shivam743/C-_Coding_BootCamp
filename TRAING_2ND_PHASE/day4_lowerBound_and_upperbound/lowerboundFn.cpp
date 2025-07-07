#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "lower bound impementiom" << endl;
    int arr[6] = {1, 2, 2, 2, 3, 5};
    int low = 0, high = 6, result = -1;
    int key = 4;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // if (arr[mid] == key)
        // {
        //     result = mid;
        //     high = mid - 1;
        // }
        if (arr[mid] >= key)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

        // if (arr[mid] < key)
        // {
        //     low = mid + 1;
        // }
    }

    cout << "lower bound is : " << result << endl;

    return 0;
}