#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    int len;
    cin >> len;
    int array[len];
    bool isRepeat = false;
    cout << "enter the elemnent in array" << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] == array[j])
            {
                cout << "first repating element in array is : " << array[i] << endl;
                isRepeat = true;
                break;
            }
        }

        if (isRepeat)
        {
            break;
        }
    }

    return 0;
}