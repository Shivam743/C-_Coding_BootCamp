#include <iostream>
using namespace std;

int main()
{
    int N = 4;
    // cin >> N;
    int nsp = (N * 2) - 3;
    for (int i = 1; i <= N; i++)
    {

        if (i == N)
        {
            for (int x = 1; x <= N; x++)
            {
                cout << x << "	";
            }
            for (int x = N - 1; x > 0; x--)
            {
                cout << x << "	";
            }
        }
        else
        {

            // loop for right part
            for (int j = 1; j <= i; j++)
            {
                cout << j << "	";
            }
            // loop for spaces
            for (int i = 0; i < nsp; i++)
            {
                cout << "	";
            }
            nsp -= 2;
            // for left part
            for (int x = i; x >= 1; x--)
            {
                cout << x << "	";
            }
        }

        cout << endl;
    }

    return 0;
}