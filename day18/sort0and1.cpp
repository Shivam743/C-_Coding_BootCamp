#include <iostream>

using namespace std;

int main()
{
    cout << "sort 0 and 1" << endl;
    int len = 6;
    int array[len] = {1, 1, 1, 1, 0, 0};

    int right = 0, left = len - 1;

    while (right < left)
    {
        if (array[right] != 0)
        {
            swap(array[right], array[left]);
            left--;
        }
        else
        {
            right++;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}