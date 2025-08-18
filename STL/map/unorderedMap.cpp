#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "unodered map" << endl;

    unordered_map<int, string> umap;

    umap[119] = "shiavm";
    umap[200] = "arjun";
    umap[99] = "mayank";
    umap[43] = "harsh";
    umap[43] = "neha";

    umap.emplace(9, "priya");
    auto s = umap.bucket(99);
    auto f = umap.find(200);
    cout << "s = " << s << endl;

    int index = distance(umap.begin(), f);

    cout << "index of 9 is : " << index << endl;

    for (auto &pair : umap)
    {
        cout << pair.first << " : " << pair.second << endl;
    }
    cout << "empty : " << umap[1].empty() << endl;
    return 0;
}