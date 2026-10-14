#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int id;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    virtual void display()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Permanent : public Employee
{
private:
    double basic, allowance;

public:
    Permanent(string n, int i) : Employee(n, i)
    {
        basic = 50000;
        allowance = 10000;
    }

    void display()
    {
        cout << "Permanent Employee\n";
        cout << "Name: " << name << ", ID: " << id << endl;
        cout << "Salary: " << basic + allowance << endl;
    }
};

class Contract : public Employee
{
private:
    double basic, allowance;

public:
    Contract(string n, int i) : Employee(n, i)
    {
        basic = 30000;
        allowance = 5000;
    }

    void display()
    {
        cout << "Contract Employee\n";
        cout << "Name: " << name << ", ID: " << id << endl;
        cout << "Salary: " << basic + allowance << endl;
    }
};

int main()
{
    Permanent p("Achal", 101);
    Contract c("Rahul", 102);

    p.display();
    c.display();

    return 0;
}