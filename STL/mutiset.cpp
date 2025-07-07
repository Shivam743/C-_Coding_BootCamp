#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "muti set ..." << endl;
    multiset<int> mst;
    mst.insert(1);
    mst.insert(1);
    mst.insert(1);
    mst.emplace(2);
    mst.emplace(2);
    mst.emplace(2);
    mst.emplace(2);
    mst.erase(mst.find(1), next(mst.find(1), 4));

    for (auto var : mst)
    {
        cout << var << endl;
    }
    return 0;
}