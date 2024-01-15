
#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    void eat() const
    {
        cout << "Animal is eating." << endl;
    }
};

class Human : virtual public Animal
{
public:
    void breathe() const
    {
        cout << "Human is breathing." << endl;
    }
};

class Bird : virtual public Animal
{
public:
    void fly() const
    {
        cout << "Bird is flying." << endl;
    }
};

class Water : public Human, public Bird
{
public:
    void displayInfo() const
    {
        cout << "Water is White." << endl;
    }
};

int main()
{
    Water water;

    water.eat();
    water.breathe();
    water.fly();

    water.displayInfo();

    return 0;
}
