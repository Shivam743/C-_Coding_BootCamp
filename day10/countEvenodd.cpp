#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array :" << endl;
    int len;
    cin >> len;
    int evenCount = 0;
    int array[len];
    cout << "enter the element in array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    cout << "number of even elements : " << evenCount << endl;
    cout << "number of odd  elements : " << len - evenCount << endl;

    return 0;
}