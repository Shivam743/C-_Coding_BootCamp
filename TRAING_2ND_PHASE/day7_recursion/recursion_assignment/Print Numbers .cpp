#include <bits/stdc++.h>

using namespace std;
void printNum(int n)
{
    if (n == 0)
    {
        return;
    }
    printNum(n - 1);
    cout << n << endl;
}

int main()
{
    cout << "1.	Print Numbers from 1 to N using Recursion" << endl;
    int n;
    cin >> n;
    printNum(n);
    return 0;
}