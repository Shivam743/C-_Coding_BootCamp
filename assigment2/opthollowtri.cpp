#include <iostream>

using namespace std;

int main()
{
    int num = 5; // Height of the triangle

    cout << "Hollow inverted triangle .........." << endl;

    for (int i = num; i > 0; --i)
    {
        // Print leading spaces
        for (int space = 0; space < num - i; ++space)
        {
            cout << " ";
        }

        int totalStars = 2 * i - 1;

        for (int j = 0; j < totalStars; ++j)
        {
            // First row: print all stars
            // Other rows: only boundary stars
            if (i == num || j == 0 || j == totalStars - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
