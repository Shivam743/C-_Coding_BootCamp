#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "priority queue : " << endl;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(6);
    pq.push(2);
    pq.push(5);
    pq.push(6);
    pq.push(9);
    cout << "size : = " << pq.size() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     // Creating priority queue
//     priority_queue<int, vector<int>, greater<int>>
//         pq;
//     pq.push(9);
//     pq.push(8);
//     pq.push(6);

//     auto temp = pq;
//     while (!temp.empty())
//     {
//         cout << temp.top() << " ";
//         temp.pop();
//     }
//     return 0;
// }