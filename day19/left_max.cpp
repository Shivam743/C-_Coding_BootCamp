#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the lenth of the array : " << endl;
    int len = 5;
    int array[len] = {3, 1, 9, 8, 7};

    vector<int> l_max(len, 0);
    int max = 0;

    for (int i = 1; i < len; i++)
    {
        if (max > array[i - 1])
        {
            l_max[i] = max;
        }
        else
        {
            l_max[i] = array[i - 1];
            max = array[i - 1];
        }
    }

    for (auto var : array)
    {
        cout << var << " ";
    }
    cout << endl;
    for (auto var : l_max)
    {
        cout << var << " ";
    }
    return 0;
}