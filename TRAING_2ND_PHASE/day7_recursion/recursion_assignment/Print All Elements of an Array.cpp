#include <bits/stdc++.h>

using namespace std;

void printValues(vector<int> nums, int ind = 0)
{
    if (nums.size() == ind)
        return;

    cout << nums[ind] << " ";
    printValues(nums, ind + 1);
}

int main()
{
    cout << "7.	Print All Elements of an Array using Recursion" << endl;
    vector<int> nums = {1, 2, 3, 5, 64, 8};

    printValues(nums);

    return 0;
}