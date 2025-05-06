#include <iostream>

using namespace std;

int main()
{
    cout << "enter the number : " << endl;
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (j == num / 2 || i == num / 2 || (i == 1 && j >= num / 2) || (i == num && j <= num / 2) || (i <= num / 2 && j == 1) || (i > num / 2 && j == num))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}