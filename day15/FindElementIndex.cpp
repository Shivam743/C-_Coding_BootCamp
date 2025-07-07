#include <iostream>

using namespace std;

int main()
{
    cout << "enter the lenght of the array :" << endl;
    int n;
    cin >> n;
    bool isFound = false;
    int array[n];
    cout << "enter the element of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "enter the element you want to search : " << endl;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            cout << "index of the " << key << " in array is : " << i << endl;
            isFound = true;
            break;
        }
    }
    if (isFound == false)
    {
        cout << key << " not found in array :" << endl;
    }

    return 0;
}