#include <iostream>

using namespace std;

int main()
{
    cout << "enter the lenght of array : " << endl;
    int len;
    cin >> len;

    cout << " enter the key elment : " << endl;
    int key;
    cin >> key;
    bool is = false;
    int keyindex = 0;
    int *array = new int[len];

    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < len; i++)
    {
        if (key == array[i])
        {
            keyindex = i;
            is = true;
        }
    }
    if (is)
    {
        cout << "index of the key : " << keyindex << endl;
    }
    else
    {
        cout << "element is not in array : " << endl;
    }

    return 0;
}