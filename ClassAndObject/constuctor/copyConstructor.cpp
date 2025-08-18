#include <bits/stdc++.h>

using namespace std;
class student
{
    string name = "shivam";
    int roll = 10;

public:
    // student(string name, int roll)
    // {
    //     cout << "this before   " << this->name << "---" << name << endl;
    //     this->name = name;
    //     cout << "this before   " << this->name << "---" << name << endl;
    //     this->roll = roll;
    // }
    student(string name, int roll) : name(name), roll(roll)
    {
        // cout << "this before   " << this->name << "---" << name << endl;
        // this->name = name;
        // cout << "this before   " << this->name << "---" << name << endl;
        // this->roll = roll;
    }

    void display()
    {
        cout << "name : " << this->name << endl;
        cout << "roll no : " << this->roll << endl;
    }
};

main()
{
    cout << "obj 1" << endl;
    student obj1("harsh", 99);
    obj1.display();

    return 0;
}