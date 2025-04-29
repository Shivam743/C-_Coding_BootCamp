#include <iostream>

using namespace std;

int main()
{
    cout << "array : " << endl;
    int array[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "enter element : " << endl;
        cin >> array[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "value : " << array[i] * 2 << endl;
    }
    return 0;
}