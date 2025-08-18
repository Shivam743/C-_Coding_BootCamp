#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "marge two sorted array : " << endl;

    vector<int> arr = {3, 9, 11, 14};
    vector<int> arr2 = {8};
    vector<int> ans;
    int count = 0;

    int pt1 = 0, pt2 = 0;
    while (pt1 < arr.size() && pt2 < arr2.size())
    { // cout << "count : " << count << endl;
        count++;

        {
            if (arr[pt1] < arr2[pt2])
            {
                ans.push_back(arr[pt1]);
                // cout << "pt1 :: " << arr[pt1] << endl;
                pt1++;
            }
            else
            {
                ans.push_back(arr2[pt2]);
                // cout << "pt2 :: " << arr[pt2] << endl;

                pt2++;
            }
        }
    }
    if (pt1 == arr.size())
    {
        for (int i = pt2; i < arr2.size(); i++)
        {
            ans.push_back(arr2[i]);
            pt2++;
        }
    }
    if (pt2 == arr2.size())
    {
        for (int i = pt1; i < arr.size(); i++)
        {
            ans.push_back(arr[i]);
            pt1++;
        }
    }

    for (auto var : ans)
    {
        cout << var << endl;
    }

    return 0;
}