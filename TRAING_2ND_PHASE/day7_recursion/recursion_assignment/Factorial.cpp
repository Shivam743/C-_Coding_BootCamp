#include <bits/stdc++.h>

using namespace std;

int fact(int m)
{
    if (m == 0)
    {
        return 1;
    }
    return fact(m - 1) * m;
}

int main()
{
    cout << "3.	Factorial of a Number" << endl;

    int n;
    cin >> n;
    cout << "Factorial of a " << n << " is : " << fact(n) << endl;
    return 0;
}