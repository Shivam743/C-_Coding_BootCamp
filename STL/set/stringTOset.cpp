#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "set to string" << endl;

    string s = "cbacdcbc";
    unordered_set<char> st(s.begin(), s.end());
    for (auto var : st)
    {
        cout << "var : " << var << endl;
    }
    return 0;
}