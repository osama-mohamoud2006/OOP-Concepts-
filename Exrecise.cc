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
    static string _Email;
    static string _Phone;

public:
    static void RestEveryThing()
    {
        _Email = "";
        _Phone = "";
    }
    static void SetEmail(string Email)
    {
        _Email = Email;
    }
    static void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    // get
    static string GetEmail()
    {
        return _Email;
    }

    static string GetPhone()
    {
        return _Phone;
    }

    static void SendEmail(string subject, string body)
    {
        cout << "\nthe following message to email: " << GetEmail() << endl;
        cout << "subject: " << subject << endl;
        cout << "body: " << body << endl;
    }

    static void SendSms(string TextSms)
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

public:
    // prametrized construtor to intialize the super class and the sub class
    clsPro(int id, string FirstName, string LastName, string title,
           int salary, string deparment, string mainProgrammingLan, // for this class
           string Email, string Phone)                              // for the connection class
        : clsPerson(id, FirstName, LastName)
    {
        clsConnection::RestEveryThing();
        clsConnection::SetEmail(Email);
        clsConnection::SetPhone(Phone);
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
        cout << "The Email is: " << clsConnection::GetEmail() << endl;
        cout << "The Phone num is: " << clsConnection::GetPhone() << endl;
        cout << "The Department is: " << GetDeparment() << endl;
        cout << "The Title is: " << GetTitle() << endl;
        cout << "The Salary is: " << GetSalary() << endl;
        cout << "The Main programming lang is: " << GetMainProgrammingLan() << endl;
    }
};

// intialize the staric members in clsConnection
string clsConnection::_Email = "";
string clsConnection::_Phone = "";

int main()
{

    clsPro P1(246, "Akari", "lua", "Senior-Mobile Development", 10000, "SW", "C++,Java , Swift", "akari@lo.com", "+29030234");

    P1.PrintAllInfo();
    cout << "\n\n\n";

    clsPro P2(123, "Aki", "la", "Mid-Mobile Development", 10000, "SW", "C++,Java , Swift", "aki@po.com", "+202384244");

    P2.PrintAllInfo();
}