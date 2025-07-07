#include <bits/stdc++.h>

using namespace std;
int incr(int *x)
{
    return *x++;
}

int main()
{
    cout << "call by value" << endl;
    int n = 10;
    // cout << incr(n) << endl;
    cout << n << endl;
    cout << "call by refrence " << endl;
    cout << incr(&n) << endl;
    cout << n << endl;

    return 0;
}