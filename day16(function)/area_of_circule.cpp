#include <iostream>

using namespace std;
float area_of_circule(float x)
{
    return 3.141 * x * x;
}

int main()
{
    cout << "enter the radius of the circule :" << endl;
    float radius;
    cin >> radius;
    cout << area_of_circule(radius) << endl;
    return 0;
}