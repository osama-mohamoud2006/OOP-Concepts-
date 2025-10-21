#include <iostream>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;
// Super class,Base class
class clsPerson
{
private:
    int _Id = 0;
    string _FirstName = "";
    string _LastName = "";
    string _Email = "";
    string _Phone = "";

public:
    // parameterozed constructor
    clsPerson(int id, string FirstName, string LastName, string Email, string Phone)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // property set
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }
    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    // property get
    string GetFirstName()
    {
        return _FirstName;
    }
    string GetLastName()
    {
        return _LastName;
    }
    string GetPhone()
    {
        return _Phone;
    }
    string GetEmail()
    {
        return _Email;
    }
    int GetId() // read only
    {
        return _Id;
    }

    string PrintFullName()
    {
        return _FirstName + " " + _LastName;
    }

public:
    void PrintAllInfo()
    {
        cout << "_______________________________\n";
        cout << GetId() << endl;
        cout << GetFirstName() << endl;
        cout << GetLastName() << endl;
        cout << PrintFullName() << endl;
        cout << GetEmail() << endl;
        cout << GetPhone() << endl;
        cout << "_______________________________\n";
    }

    void SendEmail(string subject, string body)
    {
        cout << "\nthe following message to email: " << GetEmail() << endl;
        cout << "subject: " << subject << endl;
        cout << "body: " << body << endl;
    }

    void SendSms(string TextSms)
    {
        cout << "\nthe following message to number: " << GetPhone() << endl;
        cout << "the subject is: " << TextSms << endl;
    }
};

// Derived class , Sub class
class clsEmployee : public clsPerson
{
private:
    string _Title;
    int _Salary;
    string _Department;

public:
    // sub-class(all arguments that assigned as parametrs in super class ):super-class(the name of that parameters )

    clsEmployee(int id, string Fname, string lname,
         string email, string phone, // all of them are inherited from super class (clsPerson)

        string Department , string title , int salary) 

        : clsPerson(id, Fname, lname, email, phone) // sent the parameters to the paramertized constructor (in super class)
    {
        //intilize the clsEmployee data members
        _Department=Department;
        _Title = title;
        _Salary = salary;

    }

    // property get
    string GetTitle()
    {
        return _Title;
    }
    int GetSalary()
    {
        return _Salary;
    }
    string GetDepartment()
    {
        return _Department;
    }

    // property set
    void SetTitle(string title)
    {
        _Title = title;
    }

    void SetSalary(int salary)
    {
        _Salary = salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }
};

class clsManagers : public clsEmployee
{ // class inherited clsEmployee
  // it will inherit the clsPerson(From clsEmployee (sub class of clsPeron)) and clsEmployee
};

int main()
{
    // Note : values that assigned to data members in super class won't be inherited to the sub class

    clsPerson p1(10, "osama", "moahmoud", "weui@ol.com", "+2129023109"); // parametrized constructor in super class
    p1.PrintFullName();
    p1.PrintAllInfo();

    // clsEmployee emp1;//
    //  i didn't make parametrized constructor in derived class(the default constructor of "clsEmployee" cannot be referenced -- it is a deleted function)

    // initilzed the super class successfully(cuz i inherited it , and i used parametrized constructor in super class,so i should initialize the super class first )
    clsEmployee emp1(10, "E/jack", "olo", "wyhyu@pop.com", "+2982394","Sofware","Software Enginnering",1293);

    cout << "\nFull name of employee is: " << emp1.PrintFullName() << endl;
    cout<<"the deparment is: "<<emp1.GetDepartment()<<endl;
}