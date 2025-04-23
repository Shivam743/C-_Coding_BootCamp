#include <iostream>
using namespace std;

int main()
{
    int num = 6;

    // cout << "Enter a number: ";
    // cin >> num;
    int sum = 0;
    cout << "Divisors of " << num << " are: ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            if (i != num)
            {
                sum += i;
            }
        }
    }
    cout << endl;
    if (sum == num)
    {

        cout << "it is perfect number" << endl;
    }
    else
    {
        cout << "it is not a perfect number" << endl;
    }

    return 0;
}