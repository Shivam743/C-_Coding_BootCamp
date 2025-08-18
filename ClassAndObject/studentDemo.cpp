#include <bits/stdc++.h>

using namespace std;
class Student
{
protected:
    int value = 1000;

private:
    int account_no = 1234567890;

public:
    string name;
    int roll, age;

    // Student()
    // {
    //     cin >> name;
    //     cin >> roll >> age;
    // }
    // ~Student();

    void add()
    {
        cin >> name;
        cin >> roll >> age;
    }

    void print()
    {
        this->value = 10000;
        cout << "value : " << this->value << endl;
        cout << "name is : " << name << endl;
        cout << "age is : " << age << endl;
        cout << "roll num : " << roll << endl;
        cout << "acc. no . : " << account_no << endl;
    }
};

int main()
{
    cout << "class and object" << endl;
    Student sy;
    sy.add();
    sy.print();
    // Student sy2;
    // sy2.print();

    return 0;
}