#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> p;
    p = {1, 2};
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    for (auto var : arr)
    {
        cout << var.first << " and " << var.second << endl;
    }
    cout << p.first << " and " << p.second << endl;
    return 0;
}