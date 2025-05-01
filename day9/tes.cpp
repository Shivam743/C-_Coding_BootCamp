#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;

    int a[4] = {1, 2, 3, 4};
    int a2[4] = {1, 2, 3, 4};
    int a3[];

    for (int i = 0; i < 4; i++)
    {
        a3[i] = a[i] + a2[i];
        cout << a3[i] << endl;
    }
}