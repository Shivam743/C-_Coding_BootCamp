#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "priority queue : " << endl;
    priority_queue<int> pq;
    int arr[] = {1, 35, 6, 7, 8, 9, 9};
    int k = 2;
    // cout << "size : = " << pq.size() << endl;

    for (int i = 0; i < 7; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = 0; i < k - 1; i++)
    {
        pq.pop();
    }

    cout << "top k is : " << pq.top() << endl;

    return 0;
}
