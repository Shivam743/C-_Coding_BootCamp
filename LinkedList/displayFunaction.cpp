#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll = 0;
    string name = "ramjane";
    Student *next = NULL;
};

void display(Student *head)
{
    while (head != NULL)
    {
        cout << head->name << " " << head->roll << endl;
        head = head->next;
    }
}

int main()
{
    Student mayank, shivam, harsh, arjun;
    mayank.name = "mayank panday";
    mayank.roll = 95;
    shivam.name = "shivam yadav";
    shivam.roll = 54;
    harsh.name = "harsh dev";
    harsh.roll = 46;
    arjun.name = "arjun khattar";
    arjun.roll = 41;

    mayank.next = &shivam;
    shivam.next = &harsh;
    harsh.next = &arjun;

    Student *head = &mayank;
    display(head);
}