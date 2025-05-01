#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the length of the array: ";
    int len;
    cin >> len;

    if (len < 3)
    {
        cout << "Please enter at least 3 elements." << endl;
        return 1;
    }

    int *array = new int[len];

    for (int i = 0; i < len; i++)
    {
        cout << "Enter element array[" << i << "]: ";
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
            thrd = array[i];

        if (scnd < thrd)
            swap(scnd, thrd);

        if (fst < scnd)
            swap(fst, scnd);
    }

    cout << "1st max element: " << fst << endl;
    cout << "2nd max element: " << scnd << endl;
    cout << "3rd max element: " << thrd << endl;

    delete[] array;
    return 0;
}
