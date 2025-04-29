#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array : " << endl;
    int len;
    cin >> len;

    int array[len];
    for (int i = 0; i < len; i++)
    {
        cout << "enter element array[" << i << "] : ";
        cin >> array[i];
    }
    int fst = array[0];
    int scnd = array[1];
    for (int i = 2; i < len; i++)
    {

        if (scnd < array[i])
        {
            scnd = array[i];
        }
        if (scnd > fst)
        {
            int temp = fst;
            fst = scnd;
            scnd = temp;
        }
    }

    cout << "1st max element : " << fst << endl;
    cout << "2nd max element : " << scnd << endl;

    return 0;
}