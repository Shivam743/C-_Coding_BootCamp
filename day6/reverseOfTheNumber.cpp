#include <iostream>
using namespace std;
int main()
{
    int num, reminder, reverse = 0, armstrong = 0;
    cout << "enter the number" << endl;
    cin >> num;
    cout << "orginal number is : " << num << endl;
    int temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        armstrong += reminder * reminder * reminder;
        reverse = reverse * 10 + reminder;
        temp /= 10;
    }
    cout << "number after the reversing it : " << reverse << endl;
    if (num == armstrong)
    {
        cout << "give number is: " << num << " an armstrong number :" << endl;
    }
    else
    {
        cout << "give number is: " << num << " not an armstrong number :" << endl;
    }

    return 0;
}