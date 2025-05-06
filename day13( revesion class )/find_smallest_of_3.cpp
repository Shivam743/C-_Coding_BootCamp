#include <iostream>

using namespace std;

int main()
{
    cout << "enter the 3 number : " << endl;
    int *array = new int[3];
    int smallest = array[0];
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }

    for (int i = 1; i < 3; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    return 0;
}