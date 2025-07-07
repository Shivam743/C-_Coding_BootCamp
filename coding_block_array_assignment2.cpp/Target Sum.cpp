#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the number of zeni :  " << endl;
    int N, target;
    cin >> N;

    cout << "enter the target amount  : " << endl;
    cin >> target;

    vector<int> array(N);

    cout << "enter the zenis : " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    sort(array.begin(), array.end());
    int sum = 0;
    int count = 0;

    for (auto var : array)
    {
        sum += var;
    }
    int sum2 = sum;
    int left = 0, right = N - 1;

    while (left < right)
    {
        if (sum2 == target)
        {
            count++;
            left++;
        }
        else if (sum2 > target)
        {
            sum = sum - array[right];
            right--;
        }
        else
        {
            /* code */
        }
    }

    return 0;
}