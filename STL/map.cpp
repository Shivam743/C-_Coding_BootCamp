#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "map ...." << endl;

    // Declare a map from int to vector<int>
    map<int, vector<int>> mp;

    // Insert some values
    mp[1] = {10, 20, 30};
    mp[2] = {40, 50};
    mp[3].push_back(60);

    // Iterate and print the map
    for (const auto &pair : mp)
    {
        cout << "Key: " << pair.first << " -> Values: ";
        for (int val : pair.second)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    // Check if a key exists
    int key = 2;
    if (mp.find(key) != mp.end())
    {
        cout << "Key " << key << " found in map." << endl;
    }
    else
    {
        cout << "Key " << key << " not found in map." << endl;
    }

    // Erase a key
    mp.erase(1);

    // Print map after erasing
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

    return 0;
}