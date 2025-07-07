#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the lenght of the array : " << endl;
    int N;
    cin >> N;

    vector<int> array(N);
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int left = 0, right = N - 1;
    int left_max = 0, right_max = 0;
    int ans = 0;

    while (left < right)
    {
        left_max = max(left_max, array[left]);
        right_max = max(right_max, array[right]);

        if (left_max < right_max)
        {
            ans += left_max - array[left];
            left++;
        }
        else
        {
            ans += right_max - array[right];
            right--;
        }
    }
    cout << ans << endl;

    return 0;
}