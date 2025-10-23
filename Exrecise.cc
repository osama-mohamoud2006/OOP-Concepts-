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
    // parameterozed constructor (currently you cann't use this constructor with derived class we will learn how to use it later )
    clsPerson(int id, string FirstName, string LastName, string Email, string Phone)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

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

    void SetEmail(string Email)
    {
        _Email = Email;
    }
    void SetPhone(string Phone)
    {
        _Phone = Phone;
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
        cout << "ID: " << GetId() << endl;
        cout << "First name: " << GetFirstName() << endl;
        cout << "Last Name: " << GetLastName() << endl;
        cout << "Full Name: " << PrintFullName() << endl;
        cout << "Email: " << GetEmail() << endl;
        cout << "Phone: " << GetPhone() << endl;
        // cout << "_______________________________\n";
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
class clsPro : clsPerson
{
// title , salary , department , main programming language 

    private :
    string _title;
    int _salary ;
    string _department;
    string _mainProgrammingLan;

    public:
    clsPro(int id, string FirstName, string LastName, string Email, string Phone,
    string title ,int salary , string deparment):
    clsPerson(id,FirstName, LastName , Email , Phone)
    {

    }
};