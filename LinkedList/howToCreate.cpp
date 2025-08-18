#include <iostream>

using namespace std;

struct Student
{
    int roll;
    string name;
    string address = "UK";
};
int main()
{

    Student mayank;
    // mayank.name = "Mayank Pandey";
    // mayank.roll = 95;
    // cout<<mayank.roll;
    // cout<<mayank.address;

    Student isha;
    Student *ptr;
    Student *mptr;
    ptr = &isha;
    mptr = &mayank;

    cout << &isha << endl
         << ptr << endl;
    cout << &mayank << endl
         << mptr << endl;

    return 0;
}
