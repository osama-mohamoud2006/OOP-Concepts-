#include <iostream>
using namespace std;

class clsPerson
{
private:
    int _Id;
    string _FirstName;
    string _LastName;
    string _Email = "";
    string _Phone = "";

public:
    clsPerson(int id, string FirstName, string LastName, string Email, string Phone)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    //property set
    void SetFirstName(string Fname){
        _FirstName=Fname;
    }

    void SetLastName(string Lname){
        _LastName=
    }

};