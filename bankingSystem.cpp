#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Login
{
public:
    Login(string name)
    {
        cout << "Enter Email Address: ";
       cin.sync();
       cin.clear();
       getline(cin, name);
       if (name != "lukasbel711@gmail.com")
       {
           cout << "\nInvalid Email";
           exit(1);
       }

       cout << "Enter Password: ";
        cin.sync();
       cin.clear();
       getline(cin, password);

        if (password != "lukas123")     //lukasbel711@gmail.com
       {
           for (int i = 3; i > 0; i--)
           {
           cout << "Incorrect Password " << i << " Attempts Remaining: ";
           cin >> password;
           if (password == "lukas123")
           {
               break;
           }
           }

       }
    }


    void setLogin(string x)
    {
        name = x;
    }

    string getLogin(string name)
    {
        return name;
    }

    void setPass(string p)
    {
        password = p;
    }

    string getPass(string pass)
    {
        return pass;
    }

private:
    string name;
    string password;

};


void greeting()
{
    cout << "\nWelcome To The Banking System!";
}

void password()
{
    string passw;

    cout << "\nEnter Your New Password: ";
    cin >> passw;
    cout << "\nFor Safety Reasons Your Password Will Have 3 Numbers At The End: ";
    cout << passw;
    for (int i = 0; i < 3; i++)
    {
        cout << 1 + (rand() % 9);
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

    while (opt1 != 6) {
    cout << "\n**************************************";
    cout << "\n*  What Would You Like To Update     *";
    cout << "\n*  1. Name          2. Address       *";
    cout << "\n*  3. Email         4. Phone Number  *";
    cout << "\n*  5. User ID       6. Return To Menu*";
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

