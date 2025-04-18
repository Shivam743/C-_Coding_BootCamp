//  # for loop in c++

#include <iostream>

using namespace std;
int main()
{
    // std::cout << "program to print the multiple of the four method 1st" << std::endl;
    // for (int i = 0; i < 100; i++)
    // {
    //     if (i % 4 == 0)
    //     {
    //         std::cout << i << std::endl;
    //     }
    // }

    std::cout << "program to print the multiple of the four method 2nd" << std::endl;
    int counter = 0;
    while (counter <= 100)
    {
        std::cout << counter << std::endl;
        counter = counter + 4;
    }

    return 0;
}