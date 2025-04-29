#include <iostream>
using namespace std;
int main()
{
    int N = 4;
    // cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int num = i;
        for (int j = 1; j <= N - i; j++)
        {
            cout << "	";
        }

        // for first right part
        for (int k = 0; k < i; k++)
        {
            cout << num << "	";
            num++;
        }
        num = num - 1;
        // for left part
        for (int k = 1; k < i; k++)
        {

            num = num - 1;

            cout << num << "	";
        }
        cout << endl;
    }
    return 0;
}