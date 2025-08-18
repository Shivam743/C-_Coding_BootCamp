#include <iostream>
using namespace std;

class Animal
{

public:
    int price = 1000;
    int a = 0;
    string color = "black";
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }
};

class kuta : public Animal
{

public:
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
    void detail()
    {
        cout << "price = " << this->price << endl;
    }
};

int main()
{
    kuta kuta;

    kuta.eat();
    kuta.sleep();
    kuta.color = "red";
    cout << "kuta.color = " << kuta.color << endl;
    // cout << "price " << kuta.price << endl; this raise an error
    kuta.bark();
    kuta.detail();

    return 0;
}