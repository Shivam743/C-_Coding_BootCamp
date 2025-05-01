#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array :" << endl;
    int len;
    cin >> len;
    int posCount = 0;
    int array[len];
    cout << "enter the element in array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
        if (array[i] > 0)
        {
            posCount++;
        }
    }

    cout << "number of postive elements : " << posCount << endl;
    cout << "number of negtive  elements : " << len - posCount << endl;

    return 0;
}