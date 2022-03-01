#include <iostream>
using namespace std;
// demo of class

// everything is private by default (i.e access modifiers)
class Employee
{
    // if were private or public we cannot access the members.
    public:
    // this is generally a blueprint
    // objects are basically elements of a class
    string Name;
    string Company;
    int Age;

    // functions in a class
    void introduction()
    {
        cout<<" Name: "<<Name<<" Company: "<<Company<<" Age: "<<Age<<"\n";
    }

    // default constructor
    Employee(string name, string  comp, int age)
    {
        Name = name;
        Company = comp;
        Age = age;
    }
};


int main()
{
    Employee employee1 = Employee("Giga Chad","Sigma rules",25);
    employee1.introduction();

    Employee employee2 = Employee("Peta Chad", "paxtan", 30);
    employee2.introduction();
    return 0;
}
