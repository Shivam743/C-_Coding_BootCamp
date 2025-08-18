#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    vector<int> arr = {1, 4, 3, 5, 9, 8, 1, 6};
    int n = arr.size();
    vector<int> ans(n, -1);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                ans[i] = arr[j];
                break;
            }
        }
    }

    for (auto var : ans)
    {
        cout << var << "    ";
    }

    return 0;
}
