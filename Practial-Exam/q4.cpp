#include <iostream>
#include <string>

using namespace std;

class Building
{
public:
    void displayType()
    {
        cout << "This is a Apartment building." << endl;
    }
};

class House : public Building
{
public:
    void displayType()
    {
        cout << "This is a Living house." << endl;
    }
};

class Office : public Building
{
public:
    void displayType()
    {
        cout << "This is an office building." << endl;
    }
};

int main()
{
    Building b;
    House h;
    Office o;

    cout << "Building: ";
    b.displayType();

    cout << "My House: ";
    h.displayType();

    cout << "My Office: ";
    o.displayType();

    return 0;
}
