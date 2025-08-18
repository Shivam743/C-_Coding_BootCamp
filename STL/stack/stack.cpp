#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "stack ... " << endl;

    stack<int> stk;
    stk.emplace(10);
    stk.emplace(15);
    stk.emplace(20);
    cout << stk.empty() << endl;
    cout << stk.size() << endl;
    stk.pop();
    cout << stk.top() << endl;

    // for (auto var : stk)
    // {
    //     cout << var << endl;
    // }
    return 0;
}