#include <iostream>
#include <string>
using namespace std;
class Bank
{
public:
    int64_t number;
    string name;
    char Type[20];
    char Branch[20];
    int64_t balance;

    void Bankdata()
    {
        cout << "\nEnter A/C Number: ";
        cin >> number;
        cout << "Enter A/C Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter A/C Type: ";
        cin >> Type;
        cout << "Enter A/C Branch: ";
        cin >> Branch;
        cout << "Enter A/C Balance: ";
        cin >> balance;
    }
    void getBankData()
    {
        cout << "\n\t\tDetails of this A/C No: " << number << " is " << endl;
        cout << "A/C No: " << number << endl
             << "A/C Name: " << name << endl
             << "A/C Type: " << Type << endl
             << "A/C Branch: " << Branch << endl
             << "A/C Balance: " << balance << endl;
    }
};
int main()
{
    Bank t[3];
    int choice;
    int Banknumber;

    do
    {
        cout << "\n-: Welcome to search Record Of A/C Number :-\n";
        cout << "Enter 1 - A/C Number" << endl;
        cout << "Enter 2 - Search A/C Number" << endl;
        cout << "Enter 3 - Exit" << endl;
        cout << "Please Enter Your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            for (int i = 0; i < 2; i++)
            {
                t[i].Bankdata();
            }
        }
        else if (choice == 2)
        {
            cout << "Search A/C No: ";
            cin >> Banknumber;

            for (int i = 0; i < 2; i++)
            {
                if (Banknumber == t[i].number)
                {
                    t[i].getBankData();
                }
            }
        }
        else if (choice >= 3)
        {
            cout << "\nExit...." << endl;
        }

    } while (choice < 3 && choice > 0);
    return 0;
}