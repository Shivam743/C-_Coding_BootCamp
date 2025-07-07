#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "prime checker : " << endl;
    int num;
    cin >> num;
    bool prime = true;
    for (int i = 0; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            prime = false;
        }
    }

    if (prime)
    {
        cout << num << " is prime number" << endl;
    }
    else
    {
        cout << num << " is not a prime number" << endl;
    }

    return 0;
}