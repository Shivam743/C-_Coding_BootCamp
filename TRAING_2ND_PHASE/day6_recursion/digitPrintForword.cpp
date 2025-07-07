#include <bits/stdc++.h>

using namespace std;

void digitPrint(int n)
{
    if (n == 0)
        return;

    digitPrint(n / 10);
    cout << n % 10 << endl;
}

int main()
{
    cout << "print digit ...." << endl;

    int n = 546;
    digitPrint(n);
    return 0;
}