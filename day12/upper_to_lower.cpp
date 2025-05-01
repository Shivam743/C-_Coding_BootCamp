#include <iostream>

using namespace std;

int main()
{
    cout << "upper to lower " << endl;
    char array[5] = {'A', 'B', 'H', 'A', 'Y'};
    for (int i = 0; i < 5; i++)
    {
        int temp = array[i] + 32;
        cout << (char)temp;
    }

    return 0;
}