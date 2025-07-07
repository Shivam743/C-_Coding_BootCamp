#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter the number of test cases : " << endl;
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        int rose1 = 0;
        int rose2 = 0;
        int min = 1000002;
        cout << "enter the lenth of the array : " << endl;
        int N;
        cin >> N;

        int *array = new int[N];
        cout << "enter the element of array :" << endl;
        for (int i = 0; i < N; i++)
        {
            cin >> array[i];
        }

        sort(array, array + N);

        cout << "enter the amount of money : " << endl;
        int amount;
        cin >> amount;

        int left_pointer = 0, right_pointer = N - 1;

        while (left_pointer < right_pointer)
        {

            if (amount == array[left_pointer] + array[right_pointer])
            {
                int diff = array[right_pointer] - array[left_pointer];
                if (diff < min)
                {
                    min = diff;
                    rose1 = array[left_pointer];
                    rose2 = array[right_pointer];
                }
                left_pointer++;
            }
            else if (amount < array[left_pointer] + array[right_pointer])
            {
                right_pointer--;
            }
            else
            {
                left_pointer++;
            }
        }

        cout << "Deepak should buy roses whose prices are " << rose1 << " and " << rose2 << "." << endl;
    }

    return 0;
}