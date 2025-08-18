#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int roll = 0;
    string name = "ramjane";
    Node *next = NULL;
};

void display(Node *travarse)
{
    while (travarse != NULL)
    {
        cout << travarse->name << " " << travarse->roll << endl;
        travarse = travarse->next;
    }
}

void addlastnode(Node *head, string name1, int roll1)
{
    Node *lastnode = new Node;
    cout << "hii" << endl;
    lastnode->name = name1;
    lastnode->roll = roll1;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = lastnode;
}

int main()
{
    Node one, two, three, four;
    one.name = "one panday";
    one.roll = 95;
    two.name = "two yadav";
    two.roll = 54;
    three.name = "three dev";
    three.roll = 46;
    four.name = "four khattar";
    four.roll = 41;

    one.next = &two;
    two.next = &three;
    three.next = &four;

    display(&one);
    addlastnode(&one, "vikas patel", 56);
    cout << endl;
    display(&one);

    Node mid;
    mid.name = "rohan";
    mid.roll = 99;
}