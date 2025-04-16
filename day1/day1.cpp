#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int min_val = arr[0];
    int max_val = arr[0];
    for (int num : arr)
    {
        if (num < min_val)
        {
            min_val = num;
        }
        if (num > max_val)
        {
            max_val = num;
        }
    }
    cout << "Minimum value in the list: " << min_val << endl;
    cout << "Maximum value in the list: " << max_val << endl;

    return 0;
}