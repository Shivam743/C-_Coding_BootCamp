#include <iostream>
using namespace std;

int main()
{
    int ar[3] = {1, 2, 3};
    int f = ar[0]; // 1
    int s = ar[1]; // 2
    int t = ar[2]; // 3 (fixed out-of-bounds access)

    // Sort f, s, t in descending order
    if (f < s)
        swap(f, s);
    if (f < t)
        swap(f, t);
    if (s < t)
        swap(s, t);

    cout << "f" << f << endl; // 3
    cout << "s" << s << endl; // 2
    cout << "t" << t << endl; // 1

    return 0;
}