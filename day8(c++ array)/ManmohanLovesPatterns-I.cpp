#include <iostream>
using namespace std;
int main()
{
    int N = 6;
    // cin >> N;
    for (int j = 1; j <= N; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            if (j % 2 == 0)
            {
                if (i == 1 || i == j)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}