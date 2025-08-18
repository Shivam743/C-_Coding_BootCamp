#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "find frquency" << endl;
    string s = "helloooll";

    map<char, int> mp;

    for (auto i : s)
    {
        mp[i] = mp[i] + 1;
    }
    for (auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
    }
    int max = 0;
    char key;
    for (auto var : mp)
    {
        if (var.second > max)
        {
            max = var.second;
            key = var.first;
        }
    }
    cout << "max frequency :=> " << key << " : " << max << endl;

    return 0;
}