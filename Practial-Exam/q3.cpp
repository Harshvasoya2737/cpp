
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char zero[500]="Division by zero not allowed!!!";

    cout << "Enter the First Number:";
    cin >> a;
    cout << "enter the Second Number:";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw zero;
        }
        int c = a / b;
        cout << "Result After division: " << c << endl;
    }
    catch (char d)
    {
        cout << "Exception error";
    }
    catch (const char d[30])
    {
        cerr << d << endl;
    }
    catch (...)
    {
        cout << "general error";
    }

    return 0;
}



