#include <iostream>

using namespace std;

int main()
{
    cout << "enter the number : " << endl;
    int n = 4, temp;
    for (int i = 1; i <= n; i++)
    {
        temp = i;

        for (int j = 0; j < n - i; j++)
        {
            cout << "   ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << temp << "  ";
            temp++;
        }
        temp -= 2;
        for (int x = 1; x < i; x++)
        {
            cout << temp << "  ";
            temp--;
        }
        cout << endl;
    }

       return 0;
}