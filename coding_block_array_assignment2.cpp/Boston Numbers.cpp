#include <iostream>
#include "vector"

using namespace std;

int nextPrime(int x)
{
    int nextP = x + 1;
    int temp = nextP;
    bool isprime = true;
    for (int i = 2; i <= temp / 2; i++)
    {
        if (nextP % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime)
    {
        return nextP;
    }
    else
    {
        return nextPrime(nextP);
    }
}

int Digit_sum(int num)
{
    int temp = num;
    int sum = 0;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

int main()
{
    cout << "enter the number : ";
    int num, digit_sum = 0, primefactorial_sum = 0;
    cin >> num;

    digit_sum = Digit_sum(num);
    cout << "digit sum : " << digit_sum << endl;
    int temp2 = num;
    cout << "temp2 " << temp2 << endl;
    int prime = 2;

    while (temp2 != 1)
    {
        if (temp2 % prime == 0)
        {
            temp2 = temp2 / prime;
            if (prime > 9)
            {
                int sum = Digit_sum(prime);
                primefactorial_sum += sum;
            }
            else
            {
                primefactorial_sum += prime;
            }
        }
        else
        {
            prime = nextPrime(prime);
        }
    }

    if (digit_sum == primefactorial_sum)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}