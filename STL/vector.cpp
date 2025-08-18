#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "vector ..." << endl;
    vector<pair<int, int>> pair_vect(1, {1, 1});
    pair_vect.push_back({9, 9});
    pair_vect.emplace_back(8, 8);
    // for (auto var : pair_vect)
    // {
    //     cout << var.first << " and " << var.second << endl;
    // }

    // vector<pair<int, int>>::iterator it = pair_vect.begin();

    // cout << "it before copy : " << (*it).first << " and " << (*it).second << endl;
    //
    //
    //
    //
    // cout << "copying the vector " << endl;
    // vector<pair<int, int>> pair_vect2 = pair_vect;
    // for (auto var : pair_vect2)
    // {
    //     cout << var.first << " and " << var.second << endl;
    // }
    // vector<pair<int, int>>::iterator it2 = pair_vect2.begin();

    // cout << "it before copy : " << &(*it2) << endl;
    pair_vect.insert(pair_vect.begin() + 2, 2, {0, 0});

    cout << "travering using iterator " << endl;

    for (auto i = pair_vect.begin(); i != pair_vect.end(); i++)
    {
        cout << (*i).first << " and " << (*i).second << endl;
    }

    // cout << "travering using iterator in reverse order " << endl;

    // for (auto i = pair_vect.rend() - 1; i != pair_vect.rbegin(); i--)
    // {
    //     cout << (*i).first << " and " << (*i).second << endl;
    // }
    pair_vect.return 0;
}