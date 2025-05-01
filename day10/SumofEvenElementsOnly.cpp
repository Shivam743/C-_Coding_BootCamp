#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array :" << endl;
    int len;
    cin >> len;
    int sumOfEvenElm = 0;
    int array[len];
    cout << "enter the element in array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
        if (array[i] % 2 == 0)
        {
            sumOfEvenElm += array[i];
        }
    }

    cout << "sum of even elements  in array : " << sumOfEvenElm << endl;

    return 0;
}