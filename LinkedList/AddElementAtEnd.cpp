#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll = 0;
    string name = "ramjane";
    Student *next = NULL;
};
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

    Student *head;
    Student *temp;
    head = &mayank;
    temp = head;

    while (head->next != NULL)
    {
        cout << head->name << " " << head->roll << endl;
        head = head->next;
    }
    Student lastnode;
    lastnode.name = "last";
    lastnode.roll = 999;

    head->next = &lastnode;
    head = temp;

    cout << "2nd run >>" << endl;
    while (head != NULL)
    {
        cout << head->name << " " << head->roll << endl;
        head = head->next;
    }
}