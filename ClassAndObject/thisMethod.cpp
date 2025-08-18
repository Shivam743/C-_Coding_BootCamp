#include <bits/stdc++.h>

using namespace std;

class thisMethod
{
private:
    string ProgramerName = "Shivam Yadav";
    int roll = 24;

public:
    thisMethod(int num)
    {
        this->roll = num;
    }
    // ~thisMethod() {}
    void detail()
    {
        cout << "roll no : " << roll << endl;
    }
};

int main()
{
    cout << "this method" << endl;
    thisMethod obj(400);
    obj.detail();
    return 0;
}