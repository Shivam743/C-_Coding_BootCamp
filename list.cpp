#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "list ...." << endl;
    list<int> ls(2, 10);
    ls.push_front(9);
    ls.push_back(9);
    cout << "insert : " << endl;
    ls.insert(next(ls.begin(), 2), 2, 0);
    auto it = next(ls.begin(), 2);
    cout << &it << endl;

    cout << "lenght : " << ls.size() << endl;
    // cout << "max_size : " << ls.remove(ls.begin()) << endl;
    ls.sort();
    ls.unique();

    for (auto var : ls)
    {
        cout << var << endl;
    }
    return 0;
}