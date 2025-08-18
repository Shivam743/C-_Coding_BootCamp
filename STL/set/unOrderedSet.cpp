#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "un Ordered set ::" << endl;
    unordered_set<int> uset = {5, 2, 2, 2, 2, 2, 8, 1, 1, 1, 3};

    for (const auto &elem : uset)
    {
        cout << elem << " ";
    }
    cout << endl;

    uset.insert(10);
    // uset.erase(2);
    uset.insert(12);
    uset.emplace(99);
    uset.emplace(100);

    cout << "After insert and erase: ";
    for (const auto &elem : uset)
    {
        cout << elem << " ";
    }
    cout << endl;

    if (uset.find(8) != uset.end())
    {
        cout << "8 is present in the unordered set." << endl;
    }
    else
    {
        cout << "8 is not present in the unordered set." << endl;
    }
    return 0;
}