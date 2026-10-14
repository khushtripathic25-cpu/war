#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int id;
    float balance;
    static int count;

public:
    BankAccount(string n, int i, float b)
    {
        name = n;
        id = i;
        balance = b;
        count++;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Balance: " << balance << endl;
    }

    static void displayCount()
    {
        cout << "Total Accounts: " << count << endl;
    }

    ~BankAccount()
    {
        cout << "Account destroyed" << endl;
    }
};

int BankAccount::count = 0;

int main()
{
    BankAccount a1("Achal", 101, 5000);
    BankAccount a2("Rahul", 102, 7000);

    a1.display();
    a2.display();
    BankAccount::displayCount();

    return 0;
}