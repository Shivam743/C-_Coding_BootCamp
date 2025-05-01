#include <iostream>

using namespace std;

int main()
{

    cout << ".........: Product of N natural number :................ " << endl;
    int len;
    int Product = 1;
    cout << "enter the length of array : ";
    cin >> len;
    int array[len];
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < len; i++)
    {
        Product *= array[i];
    }
    cout << "Product of All Element = " << Product << endl;

    return 0;
}