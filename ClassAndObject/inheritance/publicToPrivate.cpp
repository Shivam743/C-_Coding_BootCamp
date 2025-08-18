
#include <iostream>
using namespace std;

class Animal
{

public:
    int cost = 999;
    string programerName = "shivam";
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }
};

class Dog : private Animal
{

public:
    Dog(int x, string name)
    {
        this->programerName = name;
        this->cost = x;
    }
    void callEat()
    {
        this->eat();
    }
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main()
{
    Dog dog1(99999, "shivam yadav");

    dog1.callEat();

    dog1.bark();

    return 0;
}