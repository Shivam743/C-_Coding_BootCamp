#include <bits/stdc++.h>

using namespace std;
int incrsing(int n)
{
    if (n == 0)
    {
        // cout << "1" << endl;
        return 1;
    }

    cout << n << endl;

    incrsing(n - 1);
}

int main()
{
    cout << "increasing 1 to 100" << endl;
    incrsing(10);
    return 0;
}