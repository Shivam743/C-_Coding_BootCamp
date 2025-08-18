#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "heap memory allocation => using 'new' key word" << endl;

    int *ptr = NULL;
    ptr = new int(10);
    cout << "ptr := " << *ptr << endl;
    delete ptr;

    return 0;
}