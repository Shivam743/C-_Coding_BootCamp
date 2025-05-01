#include <iostream>

using namespace std;

int main()
{
    cout << "covert to upper :" << endl;

    char array[5] = {'V', 'i', 'K', 'a', 's'};

    for (int i = 0; i < 5; i++)
    {
        if (array[i] >= 97)
        {
            cout << (char)(array[i] - 32);
        }
        else
        {
            cout << array[i];
        }
    }

    return 0;
}