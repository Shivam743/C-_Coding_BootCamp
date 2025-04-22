#include <iostream>
using namespace std;
int main()
{
    cout << "program to print the digonal element " << endl;
    int num;
    cout << "enter the number : " << endl;
    cin >> num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 1; j < num + 1; j++)
        {
            if (i == j || i > j)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << "$";
            }
        }
        cout << endl;
    }

    return 0;
}