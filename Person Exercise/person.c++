#include <iostream>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;

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

    // if user wasn't initlized the object then i will force him to input data manually
    clsPerson()
    {
        SetFirstName(read_string("please enter your first name: "));
        SetLastName(read_string("please enter your last name: "));
        SetEmail(read_string("please enter your email: "));
        SetPhone(read_string("please enter your phone: "));
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

    private:
    string PrintFullName(){
        return _FirstName+" "_L
    }
};