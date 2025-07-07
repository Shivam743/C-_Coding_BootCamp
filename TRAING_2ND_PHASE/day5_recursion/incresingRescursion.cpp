#include <bits/stdc++.h>

using namespace std;
void inceasing(int x)
{

    if (x == 1)
    {
        return;
    }
    inceasing(x - 1);
    cout << x << endl;
}

int main()
{
    cout << "incresing using rescurion" << endl;

    inceasing(100);
    return 0;
}