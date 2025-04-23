#include <iostream>
using namespace std;
int main()
{
    int num, reminder, evenSum = 0, oddSum = 0, temp;
    cout << "enter the number : " << endl;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        if (reminder % 2 == 0)
        {

            evenSum += reminder;
        }
        else
        {
            oddSum += reminder;
        }
        temp /= 10;
    }
    cout << "sum of even digits = " << evenSum << endl;
    cout << "sum of odd digits = " << oddSum << endl;

    return 0;
}