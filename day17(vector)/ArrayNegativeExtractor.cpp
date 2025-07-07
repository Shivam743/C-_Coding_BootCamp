#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vect;
    vector<int> vect2;
    vect2.size();
    cout << "enter the element of the array :" << endl;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }

    for (auto var : vect)
    {
        if (var < 0)
        {
            vect2.push_back(var);
        }
    }

    for (auto var : vect2)
    {
        cout << "value : " << var << endl;
    }

    return 0;
}