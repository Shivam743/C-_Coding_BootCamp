#include <iostream>

using namespace std;

int main()
{
    int number;
    int temp = number;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> number;

    if (number == 0)
    {
        count = 1;
    }
    else
    {

        while (number != 0)
        {
            number /= 10;
            count++;
        }
    }

    cout << "Number of digits in " << temp << " is: " << count << endl;

    return 0;
}