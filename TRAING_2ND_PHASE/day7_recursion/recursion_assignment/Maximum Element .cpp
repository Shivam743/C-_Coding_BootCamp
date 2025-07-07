#include <bits/stdc++.h>

using namespace std;

int findMax(vector<int> n, int ind = 0, int max = INT64_MIN)
{
    if (ind == n.size() - 1)
        return max;

    if (n[ind] > n[ind + 1])
    {
        max = n[ind];
        return findMax(n, ind + 1, max);
    }
    else
    {
        max = n[ind + 1];
        return findMax(n, ind + 1, max);
    }
}

int main()
{
    cout << "8.	Find Maximum Element in an Array using Recursion" << endl;

    vector<int> nums = {1, 2, 3, 4, 5};

    cout << findMax(nums) << endl;
    return 0;
}