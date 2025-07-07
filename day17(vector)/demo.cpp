#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    vector<int> vect = {10, 20, 3, 4, 10};
    // vect.push_back(10);
    // cout << vect.size() << endl;
    // vect.pop_back();
    cout << vect.back() << endl;
    vector<int>::iterator p = vect.begin();
    cout << ++(*p) << endl;
    cout << ++(*p) << endl;

    // for (auto var : vect)
    // {
    //     cout << var << endl;
    // }
    return 0;
}