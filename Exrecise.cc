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

// sub class of cls person
class clsPro : public clsPerson
{
    // title , salary , department , main programming language

private:
    string _title;
    int _salary;
    string _department;
    string _mainProgrammingLan;
    clsConnection c;

public:
    // prametrized construtor to intialize the super class and the sub class
    clsPro(int id, string FirstName, string LastName, string title,
           int salary, string deparment, string mainProgrammingLan, // for this class
           string Email, string Phone)                              // for the connection class
        : clsPerson(id, FirstName, LastName)
    {

        c.SetEmail(Email);
        c.SetPhone(Phone);
        _title = title;
        _salary = salary;
        _department = deparment;
        _mainProgrammingLan = mainProgrammingLan;
    }

    // set
    void SetSalary(int salary)
    {
        _salary = salary;
    }

    void SetTitle(string title)
    {
        _title = title;
    }

    void SetDepartment(string department)
    {
        _department = department;
    }

    void SetProLan(string PL)
    {
        _mainProgrammingLan = PL;
    }

    /// get

    string GetTitle()
    {
        return _title;
    }

    string GetDeparment()
    {
        return _department;
    }

    int GetSalary()
    {
        return _salary;
    }

    string GetMainProgrammingLan()
    {
        return _mainProgrammingLan;
    }

    // override
    void PrintAllInfo()
    {
        clsPerson::PrintAllInfo(); // call the print function in super class
        cout << "The Email is: " <<c.GetEmail() << endl;
        cout << "The Phone num is: " << c.GetPhone() << endl;
        cout << "The Department is: " << GetDeparment() << endl;
        cout << "The Title is: " << GetTitle() << endl;
        cout << "The Salary is: " << GetSalary() << endl;
        cout << "The Main programming lang is: " << GetMainProgrammingLan() << endl;
    }
};

int main()
{

    clsPro P1(1, "Osama", "Ali", "Dev", 5000, "IT", "C++", "osama@mail.com", "123");
    clsPro P2(2, "Omar", "Tarek", "Tester", 4000, "QA", "Python", "omar@mail.com", "456");

    P1.PrintAllInfo();
    P2.PrintAllInfo();
}