#include <iostream>
#include <algorithm>

using namespace std;

int findGreatest(int a, int b, int c)
{
    return max({a, b, c}); // Note the initializer list syntax
}

int main()
{
    std::cout << "optimized approach" << std::endl;
    int a, b, c;
    std::cout << "Enter 3 numbers : " << std::endl;
    std::cin >> a >> b >> c;
    int max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    std::cout << "greatest number is : " << max << std::endl;

    //  # 1 alternative Approaches  (Learning basics)
    std::cout << "# 1 alternative Approaches  (Learning basics)" << std::endl;

    if (a > b)
    {
        if (a > c)
        {
            std::cout << "a is greatest" << std::endl;
        }
        else
        {
            std::cout << "c is greatest" << std::endl;
        }
    }
    else
    {
        if (b > c)
        {
            std::cout << "b is greatest" << std::endl;
        }
        else
        {
            std::cout << "c is greatest" << std::endl;
        }
    }

    //  # 2 alternative Approaches (Best Use Case == Best for production code)

    std::cout << " # 2 alternative Approaches (Best Use Case == Best for production code) " << std::endl;
    cout << "The greatest number is: "
         << findGreatest(a, b, c);

    return 0;
}