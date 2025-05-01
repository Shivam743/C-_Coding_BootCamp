#include <iostream>

using namespace std;

int main()
{
    cout << "enter the lenght of the program" << endl;
    int len;
    cin >> len;
    int orgArray[len];
    int evCount = 0, odCount = 0;
    int evArray[len];
    int odArray[len];
    int temp[len];
    cout << "enter the element of the array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> temp[i];
    }

    for (int i = 0; i < len; i++)
    {
        if (temp[i] % 2 == 0)
        {
            evArray[evCount] = temp[i];
            evCount++;
        }
        else

        {
            odArray[odCount] = temp[i];
            odCount = odCount + 1;
        }
    }

    for (int i = 0; i < evCount; i++)
    {
        orgArray[i] = evArray[i];
    }
    for (int i = 0; i < odCount; i++)
    {
        orgArray[i + evCount] = odArray[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << "array is : " << orgArray[i] << endl;
    }

    return 0;
}