#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int n1, int n2, string s, vector<string> &path)
{
    if (n1 == 0 && n2 == 0)
    {
        path.push_back(s);
        return;
    }

    if (n1 > 0 && n2 > 0)
        solve(n1 - 1, n2 - 1, s + "D", path);

    if (n1 > 0)
        solve(n1 - 1, n2, s + "H", path);

    if (n2 > 0)
        solve(n1, n2 - 1, s + "V", path);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    vector<string> path;
    solve(n1 - 1, n2 - 1, "", path);

    for (auto &p : path)
        cout << p << " ";

    cout << "Total paths: " << path.size() << endl;

    return 0;
}
// DD DHV DVH HDV HHVV HVD HVHV HVVH VDH VHD VHHV VHVH VVHH
// VVHH VHVH VHHV VHD VDH HVVH HVHV HVD HHVV HDV DVH DHV DD
