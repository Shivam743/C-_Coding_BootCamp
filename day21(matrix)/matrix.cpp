#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Enter the no of rows and coloumns : " << endl;
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int arr2[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }


    cout << "Terversing the 2d array : " << endl;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
            arr2[j][i] = arr[i][j];
        }
        cout << endl;
    }


    cout << "transpose : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Maximum element of each row:" << endl;
    for (int i = 0; i < n; i++)
    {
        int max_val = arr2[i][0];
        for (int j = 0; j < m; j++)
        {
            cout << arr2[i][j] << " ";
            if (max_val < arr2[i][j])
            {
                max_val = arr2[i][j];
            }
        }
        cout << "Max = " << max_val << endl;
    }
    
    cout << "sum of dignol element :" << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
            if (i == j || n == (i + j))
            {
                sum += arr[i][j];
            }
        }
        cout << "sum = " << sum << endl;
        cout << endl;
    }
    return 0;
}