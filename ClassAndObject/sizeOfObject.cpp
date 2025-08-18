#include <bits/stdc++.h>

using namespace std;
class Student
{
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

    void add(string name, int age, int roll)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

    void print()
    {
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
    sy.add("shiv", 12, 400);
    sy.print();
    cout << "Size of Student object: " << sizeof(Student) << " bytes" << endl;

    return 0;
}