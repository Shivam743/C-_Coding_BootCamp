#include <iostream>

using namespace std;

int main()
{
    cout << "Pattern Mountain :" << endl;
    int N = 9;

    int ns = (2 * N) - 3;
    for (int i = 1; i <= N; i++)
    {

        if (i != N)
        {
            //  left part
            for (int l = 1; l <= i; l++)
            {
                cout << l << "  ";
            }
            // printing the spaces
            for (int m = 0; m < ns; m++)
            {
                cout << "   ";
            }
            ns -= 2;
            // right part
            for (int l = i; l >= 1; l--)
            {
                cout << l << "  ";
            }
        }

        // for bottom part
        if (i == N)
        {
            for (int j = 1; j <= N; j++)
            {
                cout << j << "  ";
            }
            for (int k = N - 1; k > 0; k--)
            {
                cout << k << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}