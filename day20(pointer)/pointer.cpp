#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "pointer ..............." << endl;
    int n = 8;
    int *x = &n;   // pointer to n
    int **x2 = &x; // pointer to pointer
    int ***x3 = &x2;
    cout << x << endl;
    cout << x2 << endl;
    cout << x3 << endl;
    cout << n << " \n address of a : " << &n << endl;
    return 0;
}
// 0x62ff04