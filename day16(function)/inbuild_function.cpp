#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    cout << "max fn      : " << max(3, 6) << endl;
    cout << "sqrt fn     : " << sqrt(16) << endl;
    cout << "min fn      : " << min(3, 6) << endl;
    cout << "sort fn     : " << endl;

    int arr[6] = {1, 2, 3, 4, 10, 6};
    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}