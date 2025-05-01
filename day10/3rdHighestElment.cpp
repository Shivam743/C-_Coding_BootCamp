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
    int thrd = array[2];

    if (fst < scnd)
        swap(fst, scnd);
    if (fst < thrd)
        swap(fst, thrd);
    if (scnd < thrd)
        swap(scnd, thrd);

    for (int i = 3; i < len; i++)
    {
        if (thrd < array[i])
        {
            thrd = array[i];
        }
        if (scnd < thrd)
            swap(scnd, thrd);

        if (scnd > fst)
            swap(fst, scnd);
    }

    cout << "1st max element : " << fst << endl;
    cout << "2nd max element : " << scnd << endl;
    cout << "3nd max element : " << thrd << endl;

    return 0;
}