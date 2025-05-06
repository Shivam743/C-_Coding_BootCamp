#include <iostream>

using namespace std;

int main()
{
    cout << "....... Mirror Star Pattern ......" << endl;
    int num = 7;
    int nsp = 1;
    // cin>>num;

    int mid = (num / 2) + 1;
    for (int i = 0; i < num; i++)
    {
        if (i < mid)
        {
            for (int j = 1; j < mid - i; j++)
            {
                cout << " \t";
            }
            for (int j = 0; j < nsp; j++)
            {
                cout << "*\t";
            }
            nsp += 2;
        }
        else
        {
            if (i == mid)
                nsp -= 4;
            else
                nsp -= 2;

            for (int j = mid; j <= i; j++)
            {
                cout << " \t";
            }
            for (int j = 0; j < nsp; j++)
            {

                cout << "*\t";
            }
        }

        cout << endl;
    }

    return 0;
}