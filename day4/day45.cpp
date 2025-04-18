
#include <iostream>

using namespace std;
int main()
{

    std::cout << "first pattren" << std::endl;
    for (int i = 1; i < 6; i++)
    {
        std::cout << std::endl;

        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
    }
    std::cout << std::endl;

    std::cout << "first 2nd" << std::endl;

    for (int i = 1; i < 6; i++)
    {
        std::cout << std::endl;

        for (int j = 0; j < 10; j++)
        {
            std::cout << "*";
        }
    }

    return 0;
}