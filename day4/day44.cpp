

#include <iostream>

using namespace std;
int main()
{
    std::cout << "print the prime number between 1 to 100" << std::endl;

    for (int i = 1; i < 100; i++)
    {
        bool prime = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                // std::cout << "not a prime number" << std::endl;
                prime = false;
                break;
            }
        }
        if (prime)
        {
            std::cout << "number is prime : " << i << std::endl;
        }
    }

    return 0;
}