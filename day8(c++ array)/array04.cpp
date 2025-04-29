#include <iostream>

using namespace std;

int main()
{
    cout << "array : " << endl;
    int n;
    cout << "enter the length of the array :" << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "array[" << array[i] * 2 << "] : " << endl;
    }

    return 0;
}