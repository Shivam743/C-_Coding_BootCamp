#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the array :" << endl;
    int len;
    cin >> len;
    int sum = 0;
    int searchElement;
    int array[len];
    cout << "enter the element you want to search :" << endl;
    cout << "enter the element in array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    cout << "average of the elements  in array : " << sum / len << endl;

    return 0;
}