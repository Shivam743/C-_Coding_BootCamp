#include <iostream>
#include <algorithm>

using namespace std;

int findGreatest(int a, int b, int c)
{
    return max({a, b, c}); // Note the initializer list syntax
}

int main()
{

    int a = 5, b = 10, c = 1;
    // std::cin >> a >> b >> c;
    // int max = a;
    // if (max < b)
    // {
    //     max = b;
    // }
    // if (max < c)
    // {
    //     max = c;
    // }
    // std::cout << "max = " << max << std::endl;

    //  # 1 alternative Approaches  (Learning basics)

    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         std::cout << "a is greatest" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "c is greatest" << std::endl;
    //     }
    // }
    // else
    // {
    //     if (b > c)
    //     {
    //         std::cout << "b is grestest" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "c is grestest" << std::endl;
    //     }
    // }

    //  # 2 alternative Approaches (Best Use Case == Best for production code)

    int num1 = 10, num2 = 20, num3 = 15;
    cout << "The greatest number is: " << findGreatest(num1, num2, num3);

    return 0;
}