#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Login
{
public:
    Login(string name)
    {
        cout << "Enter Name: ";
       cin.sync();
       cin.clear();
       getline(cin, name);
    }

    void setLogin(string x)
    {
        name = x;
    }

    string getLogin(string name)
    {
        return name;
    }

private:
    string name;

};

void greeting()
{
    cout << "\nWelcome To The Banking System!";
}

void password()
{
    int range;
    cout << "\nEnter Your Password Range From 0 To X: ";
    cin >> range;

    cout << "\nYour 4 Digit Password Is: ";
    for (int i = 0; i < 4; i++)
    {
        cout << 1 + (rand() % range);
    }
}

void balance()
{
    float b = 0;
    cout << "\nEnter Your Balance: ";
    cin >> b;
    cout << "\nYour Current Balance Is: $" << b;
    cout << "\nWould You Like To Withdraw Or Deposit Money?";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
         << "\n 1. Deposit                     2. Withdraw" << endl;
    int choice;
    cin >> choice;

    switch (choice)
{

    case 1:
        cout << "\nHow much would you like to deposit: ";
        float dep1;
        cin >> dep1;
        b += dep1;
        cout << "\nCurrent Balance: $" << b;
        break;


     case 2:

        cout << "\nHow much would you like to withdraw: ";
        float dep2;
        cin >> dep2;
        b -= dep2;
        cout << "\nCurrent Balance: $" << b;
        break;


     default:

            cout << "Invalid Option!";
            break;

    }
}

void update()
{
    int opt1 = 0;
    string name;
    string address;
    string email;
    string phoneNum;
    int id;
    int passW;

    while (opt1 != 7) {
    cout << "\n**************************************";
    cout << "\n*  What Would You Like To Update     *";
    cout << "\n*  1. Name          2. Address       *";
    cout << "\n*  3. Email         4. Phone Number  *";
    cout << "\n*  5. User ID       6. Password      *";
    cout << "\n*  7. Return To Menu                 *";
    cout << "\n**************************************";
    cout << "\nOption: ";
    cin >> opt1;

    switch (opt1)
    {


    case 1:
        cout << "\nEnter New Name: ";
        cin.clear();
        cin.sync();
        getline(cin, name);
        cout << "Updated Name: " << name;
        break;

    case 2:
        cout << "\nEnter New Address: ";
        cin.clear();
        cin.sync();
        getline(cin, address);
        cout << "Updated Address: " << address;
        break;

    case 3:
        cout << "\nEnter New Email: ";
        cin >> email;
        cout << "Updated Email: " << email;
        break;

    case 4:
       cout << "\nEnter New Phone Number: ";
         cin.clear();
        cin.sync();
        getline(cin, phoneNum);
        cout << "Updated Phone Number: " << phoneNum;
        break;

    case 5:
       cout << "\nEnter New ID: ";
        cin >> id;
        cout << "Updated ID: " << id;
        break;

    case 6:
       cout << "\nEnter New Numeric Password: ";
        cin >> passW;
        cout << "Updated Password: " << passW;
        break;

    case 7:
     break;
    }
    }

}

void menu()
{
     int choice;

     while (choice != 4)
     {
    cout << "\n**************************************";
    cout << "\n* 1. Make Bank Balance Modification  *";
    cout << "\n* 2. Make Password Modification      *";
    cout << "\n* 3. Update User Information         *";
    cout << "\n* 4. Exit System                     *";
    cout << "\n**************************************";
    cout << "\nChoice: ";
    cin >> choice;


    if (choice == 1)
    {
        balance();
    }

     if (choice == 2)
    {
        password();
    }

    if (choice == 3)
    {
        update();
    }

    if (choice == 4)
    {
        exit(1);
    }

     }

}

int main()
{
    string name;
    Login first(name);
    greeting();
    menu();

    return 0;
}
