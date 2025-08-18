// C++ implementation to find the next
// greater element using a stack
#include <iostream>
#include <map>
#include <vector>
#include <stack>
using namespace std;

map<int, int> nextLargerElement(vector<int> &arr)
{
    map<int, int> mp;
    stack<int> stk;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!stk.empty() && stk.top() < arr[i])
        {
            stk.pop();
        }
        if (!stk.empty())
            mp[arr[i]] = stk.top();
        // else
        //     mp[arr[i]] = -1;
        stk.emplace(arr[i]);
    }
    return mp;
}

int main()
{

    vector<int> arr = {6, 8, 0, 1, 3};
    map<int, int> res = nextLargerElement(arr);

    for (auto x : res)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}