#include <iostream>
#include <climits> // For INT_MIN and INT_MAX

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the list: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Number of elements must be positive." << endl;
        return 1;
    }

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int min_val = arr[0];
    int max_val = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
        }
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }

    cout << "Minimum value in the list: " << min_val << endl;
    cout << "Maximum value in the list: " << max_val << endl;

    return 0;
}