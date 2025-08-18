#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "find frquency" << endl;
    string s = "hello";

    map<char, int> mp;

    for (auto i : s)
    {
        mp[i] = mp[i] + 1;
    }
    for (auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
    }

    return 0;
}