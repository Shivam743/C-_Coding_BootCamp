#include <bits/stdc++.h>

using namespace std;
long long npower(int x, int p)
{
    if (p == 0)
        return 1;
    return npower(x, p - 1) * x;
}

int main()
{
    cout << "11.	Power Function " << endl;
    int n, p;
    cin >> n >> p;
    cout << n << " raise to power " << p << " is " << npower(n, p) << endl;
    return 0;
}
