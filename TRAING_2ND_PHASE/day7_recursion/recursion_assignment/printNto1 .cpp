#include <bits/stdc++.h>

using namespace std;
void printNum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printNum(n - 1);
}

int main()
{
    cout << "2.	Print Numbers from N to 1 using Recursion" << endl;
    int n;
    cin >> n;
    printNum(n);
    return 0;
}