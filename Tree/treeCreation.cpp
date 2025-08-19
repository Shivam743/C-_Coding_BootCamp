#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(int val)
    {
        this->data = val;
    }
};

void preOrder(Node *root)
{
    if (root == nullptr || root == nullptr)
        return;
    cout << "data = " << root->data << endl;
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    cout << "creating tree :......" << endl;
    Node *root = new Node(10);
    Node *shivam = new Node(18);
    Node *arjun = new Node(9);

    root->left = shivam;
    root->right = arjun;
    // cout << "data  " << root->data << endl;
    preOrder(root);
    delete root;
    delete arjun;
    delete shivam;
    return 0;
}