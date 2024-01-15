
#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

class Human
{
public:
    void breath() const
    {
        cout << "Human is breathing." << endl;
    }
};

class Bird
{
public:
    void flying() const
    {
        cout << "Bird is flying." << endl;
    }
};

class Water : public Bird, public Human, public Animal
{
public:
    void white() const
    {
        cout << "Water is White." << endl;
    }
};

int main()
{
    Water obj;

    obj.Animal::eat();
    obj.Human::breath();
    obj.Water::flying();

    obj.white();

    return 0;
}
