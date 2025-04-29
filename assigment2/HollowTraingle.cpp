#include <iostream>

using namespace std;

int main()
{
    int num = 5;
    int x = 1;
    cout << "Hollow traingle .........." << endl;
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (i * 2 - 1); ++k)
        {
            if (i == num || k == (i * 2 - 2) || k == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}