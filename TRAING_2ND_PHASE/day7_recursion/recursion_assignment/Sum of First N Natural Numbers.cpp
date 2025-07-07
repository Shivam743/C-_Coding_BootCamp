#include <bits/stdc++.h>

using namespace std;

int N_sum(int n)
{
    if (n == 0)
        return 0;

    return N_sum(n - 1) + n;
}

int main()
{
    cout << "4.	Sum of First N Natural Numbers" << endl;
    int n;
    cin >> n;
    cout << "Sum of First " << n << " Natural Numbers is : " << N_sum(n) << endl;
    return 0;
}