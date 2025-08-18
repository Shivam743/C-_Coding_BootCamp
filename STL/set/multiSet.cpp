#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "multi set : " << endl;
    multiset<int> ms = {1, 2, 2, 3, 4, 4, 4, 5, 0};
    for (auto x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "count 4 : " << ms.count(11) << endl;
    cout << "size    : " << ms.size() << endl;
    cout << "find    : " << ms.max_size() << endl;

    return 0;
}