#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "map ...." << endl;

    map<int, vector<int>> mp;

    mp[1] = {10, 20, 30};
    mp[2] = {40, 50};
    mp[3].push_back(60);

    for (const auto &pair : mp)
    {
        cout << "Key: " << pair.first << " -> Values: ";
        for (int val : pair.second)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    int key = 2;
    if (mp.find(key) != mp.end())
    {
        cout << "Key " << key << " found in map." << endl;
    }
    else
    {
        cout << "Key " << key << " not found in map." << endl;
    }

    mp.erase(1);

    cout << "After erasing key 1:" << endl;
    for (const auto &pair : mp)
    {
        cout << "Key: " << pair.first << " -> Values: ";
        for (int val : pair.second)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    // cout << "empty : "<<mp[] << endl;

    return 0;
}