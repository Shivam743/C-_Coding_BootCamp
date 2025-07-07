#include <bits/stdc++.h>

using namespace std;
int digitSum(int n)
{

    if (n == 0)
        return 0;

    // digitPrint(n / 10);
    // cout << n % 10 << endl;

    return digitSum(n / 10) + (n % 10);
}

int main()
{
    cout << "digit sum  ... " << endl;
    int n = 546;
    cout << "sum : " << digitSum(n) << endl;
    return 0;
}