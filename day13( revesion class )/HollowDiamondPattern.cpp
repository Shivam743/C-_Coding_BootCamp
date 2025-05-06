#include <iostream>

using namespace std;

int main()
{
    cout << "Hollow Diamond Pattern ........" << endl;

    int num = 7;
    int mid = (num / 2) + 1;
    int nsp = 1;
    // cout << "mid : " << mid << endl;

    for (int i = 1; i <= num; i++)
    {
        if (i == 1 || i == num)
        {
            for (int x = 0; x < num; x++)
            {
                cout << " * ";
            }
        }
        else
        {
            if (i <= mid)
            {
                for (int k = 0; k <= mid - i; k++)
                {
                    cout << " * ";
                }
                for (int k = 0; k < nsp; k++)
                {
                    cout << "   ";
                }
                nsp += 2;
                for (int k = 0; k <= mid - i; k++)
                {
                    cout << " * ";
                }
            }
            else
            {
                for (int k = mid; k <= i; k++)
                {
                    cout << " * ";
                }
                if (i == mid + 1)
                {
                    nsp -= 4;
                }

                for (int k = 0; k < nsp; k++)
                {
                    cout << "   ";
                }
                nsp -= 2;

                for (int k = mid; k <= i; k++)
                {
                    cout << " * ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}