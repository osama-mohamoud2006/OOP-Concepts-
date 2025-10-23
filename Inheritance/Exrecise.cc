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

public:
    // parameterozed constructor
    clsPerson(int id, string FirstName, string LastName)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
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

    // default constructor
    clsPerson()
    {
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
        cout << "ID: " << GetId() << endl;
        cout << "First name: " << GetFirstName() << endl;
        cout << "Last Name: " << GetLastName() << endl;
        cout << "Full Name: " << PrintFullName() << endl;
        // cout << "Email: " << GetEmail() << endl;
        // cout << "Phone: " << GetPhone() << endl;
        // // cout << "_______________________________\n";
    }
};

// All members here are static
class clsConnection
{
private:
    string _Email;
    string _Phone;

public:
    void SetEmail(string email)
    {

        _Email = email;
    }
    void SetPhone(string Phone)
    {

        _Phone = Phone;
    }

    // get
    string GetEmail()
    {

        return _Email;
    }

    string GetPhone()
    {

        return _Phone;
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

// Derived class , Sub class(from clsPerson)
class clsEmployee : public clsPerson
{
public:
    clsEmployee(int id, string FirstName, string LastName,                 // clsPerson
                string Email, string Phone,                                // clsConnection
                string department = "", int salary = 0, string title = "") // clsEmployee
        : clsPerson(id, FirstName, LastName)
    {
        _Department = department;
        _Salary = salary;
        _Title = title;
        c.SetEmail(Email);
        c.SetPhone(Phone);
    }

private:
    clsConnection c;
    string _Title;
    int _Salary;
    string _Department;

public:
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

    // override the print function
    void PrintAllInfo() // redfine the print function to use it propely in subclass
    {
        clsPerson::PrintAllInfo();
        cout<<"The Email is: "<<c.GetEmail()<<endl;
        cout<<"The phone is: "<<c.GetPhone()<<endl;
        cout << "The Department is: " << _Department << endl;
        cout << "The Title is: " << _Title << endl;
        cout << "The Salary is: " << _Salary << endl;
    }
};


// sub class of cls Employees (multi level Inheritance)
class clsPro : public clsEmployee
{
    // title , salary , department , main programming language

private:
    string _mainProgrammingLan;

public:
    // prametrized construtor to intialize the super class and the sub class
    clsPro(int id, string FirstName, string LastName, string Email, string Phone,
           string department = "", int salary = 0,
           string title = "",
           string mainProgrammingLan="") // for the dev-class

        : clsEmployee(id, FirstName, LastName, Email, Phone, department, salary, title)
    {
        _mainProgrammingLan = mainProgrammingLan;
    }

    // set
    void SetProLan(string PL)
    {
        _mainProgrammingLan = PL;
    }

    // get
    string GetMainProgrammingLan()
    {
        return _mainProgrammingLan;
    }

    // override
    void PrintAllInfo()
    {
        clsEmployee::PrintAllInfo(); // call the print function in super class(clsEmployee )
        cout << "The Main programming lang is: " << GetMainProgrammingLan() << endl;
    }
};

int main()
{

    
    clsPro P1(1,"Arya","lua","ara@u.com","+12322134","SW",10000,"Seniro-Mobile Dev","Kotlin , C++ , Java , React");
    
    P1.PrintAllInfo();

}