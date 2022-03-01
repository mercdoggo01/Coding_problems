#include <iostream>
using namespace std;
// demo of encapsulation
class Employee
{
    // encapsulated (i.e hidden)
    private:
    string Name;
    string Company;
    int Age;


    public: // everyone outside our class can access
    // setters anyone outside private can use them to assign values
    void setName(string name)
    {
        Name = name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    void setAge(int age)
    {
        Age = age;
    }





    // getters return private values
    string getName()
    {
        return Name;
    }


    string getCompany()
    {
        return Company;
    }

    int getAge()
    {
        return Age;
    }

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


    employee1.setAge(30);
    cout<< employee1.getName() <<" is: "<<employee1.getAge() <<" years old\n";
    return 0;
}

