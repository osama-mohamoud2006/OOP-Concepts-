#include <iostream>
using namespace std;
// Abstract class ,Contract
class clsPropForPerson
{
    // pure virtual function
    virtual void SetFirstName(string Fname) = 0;
    virtual void SetLastName(string Lname) = 0;
    virtual void SetAge(short age) = 0;
};
class clsPersonData : clsPropForPerson
{
private:
    struct _stPersonData
    {
        string firstname = "";
        string lastname = "";
        short age = 0;
    };
    _stPersonData d;

public:
    // set
    // All these methods are pure virtual function in abstract class and should be implemented otherwise you wonot can make obj of this class

    void SetFirstName(string fname)
    {
        d.firstname = fname;
    }
    void SetLastName(string lname)
    {
        d.lastname = lname;
    }

    void SetAge(short age)
    {
        d.age = age;
    }

    // Get
    string GetFullName()
    {
        return d.firstname + " " + d.lastname;
    }
    string GetFirstName()
    {
        return d.firstname;
    }
    string GetLastName()
    {
        return d.lastname;
    }
    short GetAge(){
        return d.age;
    }
};