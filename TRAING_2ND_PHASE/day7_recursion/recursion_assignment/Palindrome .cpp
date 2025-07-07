#include <bits/stdc++.h>

using namespace std;

bool Palindrome(string x, int right, int left = 0)
{
    if (right == 0)
    {
        return true;
    }
    if (x[left] == x[right])
    {
        return Palindrome(x, right - 1, left + 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "12.	Check if a String is Palindrome using Recursion" << endl;

    string word;
    cin >> word;
    cout << Palindrome(word, word.length() - 1) << endl;

    return 0;
}