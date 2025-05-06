#include <iostream>

using namespace std;

int main()
{
    cout << "Hollow Rhombus Pattern" << endl;
    cout << "\nenter number : " << endl;
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << "   ";
        }
        for (int k = 1; k <= num; k++)
        {
            if (k == 1 || i == 1 || i == num || k == num)
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