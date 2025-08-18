#include <bits/stdc++.h>

using namespace std;
class Node
{

public:
    int roll;
    string name;
    Node *next = nullptr;
    Node *prev = nullptr;
    Node(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

void insertEnd(Node *head, string name, int roll)
{

    Node *newNode = new Node(name, roll);
    if (!head)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << "name = " << temp->name << "  and roll no is : " << temp->roll << endl;
        temp = temp->next;
    }
}

int main()
{
    cout << "doubly Linked List :: " << endl;
    // Node shivam("shivam", 54);
    // Node mayank("mayank", 46);
    // Node harsh("harsh", 96);

    Node *shivam = new Node("shivam", 54);
    Node *harsh = new Node("harsh", 94);
    shivam->next = harsh;
    harsh->prev = shivam;
    Node *aju = new Node("aju", 31);
    harsh->next = aju;
    aju->prev = harsh;

    Node *head = shivam;

    insertEnd(head, "end", 999);
    display(head);

    delete shivam;
    delete harsh;
    delete aju;
    return 0;
}