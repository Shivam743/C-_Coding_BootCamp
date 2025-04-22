#include <iostream>
using namespace std;
void printFibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm;
        if (i != n)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else
    {
        printFibonacci(n);
    }

    return 0;
}