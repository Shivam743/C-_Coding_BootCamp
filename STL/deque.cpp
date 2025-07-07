#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "deque .... " << endl;
    deque<int> d(2, 0);
    d.push_back(10);
    d.push_front(5);
    int size_t = d.size();
    cout << "size_t : " << size_t << endl;
    d.push_back(20);
    d.emplace_front(999);

    d.insert(d.begin() + 1, 2, 12);
    cout << "size_t : " << d.size() << endl;
    cout << "Front: " << d.front() << "\n";
    cout << "Back: " << d.back() << "\n";
    vector<int> d2(2, 15);
    d.insert(d.begin(), d2.begin(), d2.end());

    for (auto it = d.begin(); it != d.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n3  " << d[3] << endl;
    return 0;
}