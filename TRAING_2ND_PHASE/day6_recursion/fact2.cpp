#include <bits/stdc++.h>

using namespace std;

int fact(int x)
{

    if (x == 0)
        return 1;

    return fact(x - 1) * x;
    cout << "hello" << endl; // this is a dummy line
}

int main()
{
    int n = 5;
    cout << fact(n) << endl;
    return 0;
}