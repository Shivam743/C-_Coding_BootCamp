#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "set ..." << endl;
    vector<int> v(2, 10);
    v.emplace_back(15);
    set<int> st;
    st.insert(v.begin(), v.end());
    st.insert(2);
    st.emplace(5);
    st.insert(6);
    st.emplace(1);

    st.erase(st.begin(), next(st.begin(), 3));
    cout << "element : " << endl;
    for (auto var : st)
    {
        cout << var << endl;
    }

    cout << st.size() << endl;
    // cout << *(st.rbegin() - 1) << endl;
    // auto f = st.find(5);
    int index = distance(st.begin(), st.find(10));
    cout << "index : " << index << endl;

    return 0;
}