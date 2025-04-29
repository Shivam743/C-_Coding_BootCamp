#include <iostream>

using namespace std;

int main()
{
    cout << "array dyanmic allocation : " << endl;
    int array[5];
    int value;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the " << i << " element of array : ";
        cin >> value;
        array[i] = value;
    }

    return 0;
}