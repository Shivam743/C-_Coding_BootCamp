#include <iostream>
using namespace std;

int main()
{
    cout << "Character ASCII Value" << endl;
    for (char ch = 'A'; ch <= 'Z'; ++ch)
    {
        cout << ch << "      " << int(ch) << endl;
    }
    return 0;
}
