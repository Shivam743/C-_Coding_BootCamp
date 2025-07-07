#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "upper and lower bound" << endl;
    int trees[6] = {1, 2, 2, 4, 4, 4};
    sort(trees, trees + 6);

    int capacity = 4;

    auto idx = lower_bound(trees, trees + 6, capacity);
    cout << "index of lower bound : " << idx - &trees[0] << endl;

    cout << "number of tree to be cut is : " << &trees[6] - idx << endl;
    return 0;
}