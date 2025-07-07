#include <bits/stdc++.h>

using namespace std;

vector<string> Subsets(string str, int ind = 0, vector<string> res = {})
{
    if (ind == int(str.length()))
    {
        res.emplace_back(str.substr(ind));
        return res;
    }
    res.emplace_back(str.substr(ind));
    return Subsets(str, ind + 1, res);
}

int main()
{
    cout << "13.	Generate All Subsets of a String" << endl;
    string str;
    cin >> str;
    vector<string> res = Subsets(str);

    for (auto var : res)
    {
        cout << var << "    ";
    }
    return 0;
}