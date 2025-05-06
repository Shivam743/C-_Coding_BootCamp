#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Pascal Triangle : ......" << endl;
    int num = 5, temp;
    vector<int> vect1;
    vector<int> vect2;

    for (int i = 1; i <= num; i++)
    {
        vect1 = {};
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                vect1.push_back(1);
                cout << "1 ";
            }
            else
            {
                temp = vect2[j] + vect2[j - 1];
                vect1.push_back(temp);
                cout << temp << " ";
            }
        }
        vect2 = vect1;

        cout << endl;
    }

    return 0;
}