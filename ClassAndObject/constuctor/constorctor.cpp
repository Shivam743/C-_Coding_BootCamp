#include <bits/stdc++.h>
using namespace std;

class con
{
private:
    int roll = 0;

public:
    con()
    {
        cout << "object is created defautl con called" << endl;
    }
    con(int x)
    {
        cout << "object is created parameterized con called" << endl;
        this->roll = x;
    }

    void display()
    {
        cout << "Roll number is : " << this->roll << endl;
    }
};

int main()
{

    cout << "constoctor " << endl;
    con obj;
    obj.display();
    return 0;
}