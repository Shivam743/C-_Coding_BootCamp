#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "pair with age and name :: " << endl;
    vector<pair<int, string>> v;

    // v.push_back({2, "sh"});
    for (int i = 0; i < 3; i++)
    {
        int n;
        string s;
        cin >> n >> s;
        v.push_back({n, s});
    }

    for (auto var : v)
    {
        cout << var.first << " : " << var.second << endl;
    }

    return 0;
}