#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        // int start = 0, end = n - 1;
        // int left = 0, right = 0;
        int max = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {

                sum += array[(j + i) % n];
                if (max < sum)
                {
                    max = sum;
                }
            }
        }
        cout << "max : " << max << endl;
    }

    return 0;
}