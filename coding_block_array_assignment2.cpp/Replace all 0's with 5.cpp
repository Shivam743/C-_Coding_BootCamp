#include <iostream>
using namespace std;

int reverse(int N)
{
    int reverse = 0;
    while (N != 0)
    {

        reverse = reverse * 10 + N % 10;
        N /= 10;
    }

    return reverse;
}

int main()
{
    int N, rev = 0, reminder;
    cin >> N;

    while (N != 0)
    {
        reminder = N % 10;
        if (reminder == 0)
            rev = rev * 10 + 5;
        else
            rev = rev * 10 + reminder;
        N /= 10;
    }

    cout << reverse(rev) << endl;
    return 0;
}