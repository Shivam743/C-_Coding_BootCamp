#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool check = true;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j && arr[i][j] != 0)
            {
                cout << "false";
                check = false;
            }
        }
    }
    if (check)
        cout << "true";
    return 0;
}