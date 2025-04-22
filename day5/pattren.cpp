#include <iostream>
using namespace std;

int main()
{

    int n;
    std::cout << "enter the number : " << std::endl;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}