#include <bits/stdc++.h>

using namespace std;

class Demo
{

public:
    int x = 10;
    Demo()
    {
        cout << "constuctor is called :" << endl;
    }
    ~Demo()
    {
        cout << "destructor is called :" << this->x << endl;
    }
};

int main()
{
    cout << "=========================" << endl;
    Demo obj;
    cout << obj.x << endl;
    Demo *d = new Demo();
    d->x = 20;
    cout << d->x << endl;
    delete d;
    return 0;
}