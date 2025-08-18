#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int roll = 0;
    string name = "ramjane";
    Node *next = NULL;
};
int main()
{
    Node one, two, three, four;
    one.name = "one panday";
    one.roll = 95;
    two.name = "two yadav";
    two.roll = 76;
    three.name = "three dev";
    three.roll = 46;
    four.name = "four khattar";
    four.roll = 41;

    one.next = &two;
    two.next = &three;
    three.next = &four;

    Node *head;
    head = &one;
    int targetroll = 46;
    int count = 0;
    while (head != NULL)
    {
        if (targetroll == head->roll)
        {
            cout << head->name << " " << head->roll << endl;
        }
        else
        {
            count++;
        }
        head = head->next;
    }
    cout << "Node number is " << count << endl;
}
