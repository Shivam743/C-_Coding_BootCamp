#include <bits/stdc++.h>

using namespace std;
int fibo(int x)
{
    if (x == 0 || x == 1 || x == 2)
    {
        return x;
    }

    return fibo(x - 2) + fibo(x - 1) + fibo(x - 3);
}

int main()
{
    cout << "fibonace series .... " << endl;
    int n = 12;

    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << endl;
    }

    return 0;
}