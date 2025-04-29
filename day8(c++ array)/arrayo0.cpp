#include <iostream>

using namespace std;

int main()
{
    cout << "starting of the array : " << endl;
    int array[5];
    cout << "array memory address: " << array << endl;

    cout << "assigning the values  \n"
         << endl;
    array[0] = 10;
    array[1] = 11;
    array[2] = 12;
    array[3] = 12;
    array[4] = 14;

    cout << "accesing the values  \n"
         << endl;

    cout << "array[0] " << array[0] << endl;
    cout << "array[1] " << array[1] << endl;
    cout << "array[2] " << array[2] << endl;
    cout << "array[3] " << array[3] << endl;
    cout << "array[4] " << array[4] << endl;

    return 0;
}