#include <bits/stdc++.h>

using namespace std;
int Digit_Count(int num)
{
    int temp = num;
    int sum = 0;
    while (temp != 0)
    {
        sum += 1;
        temp /= 10;
    }
    return sum;
}

bool Is_Armstrong_Number(int x)
{
    int no_of_digit = Digit_Count(x);
    int temp = x, rem;
    int sum = 0;

    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, no_of_digit);
        temp /= 10;
    }

    if (x == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "enter the number : " << endl;
    int N;
    cin >> N;

    cout << boolalpha << Is_Armstrong_Number(N) << endl;
    return 0;
}