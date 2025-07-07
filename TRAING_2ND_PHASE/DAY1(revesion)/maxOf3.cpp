#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "3 maximum" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    int max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    cout << "max " << max << endl;

    return 0;
}