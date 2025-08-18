#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    string name;
    int roll;
    string state;
    string course;
    Node *next;

    Node(string name, int roll, string state, string course)
    {
        this->name = name;
        this->course = course;
        this->roll = roll;
        this->state = state;
        prev = NULL;
        next = NULL;
    }
};

void insertAtEnd(Node *&head, string name, int roll, string state, string course)
{
    Node *newNode = new Node(name, roll, state, course);
    if (head == NULL)
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

void displayForward(Node *head)
{
    Node *temp = head;
    cout << "Forward: ";
    while (temp)
    {
        cout << temp->name << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward(Node *head)
{
    if (!head)
        return;
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    cout << "Backward: ";
    while (temp)
    {
        cout << temp->name << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, "Mayank", 95, "HP", "Btech");
    insertAtEnd(head, "Shivam", 65, "Punjab", "BCA");
    insertAtEnd(head, "ajay", 45, "UP", "MCA");
    insertAtEnd(head, "ankita", 3, "Odisha", "BCA");

    displayForward(head);
    displayBackward(head);
}