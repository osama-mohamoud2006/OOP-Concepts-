#include <iostream>
using namespace std;

// Super class
class clsPerson
{
private:
    string _firstname;
    string _lastname;

public:
    void SetFirstName(string first)
    {
        _firstname = first;
    }
    void setLastname(string last)
    {
        _lastname = last;
    }

    string GetFirstname()
    {
        return _firstname;
    }

    string GetLastname()
    {
        return _lastname;
    }
};

// single inheritance
class clsPeople : public clsPerson
{

public:
    clsPeople()
    {
        SetFirstName("ahmed");
        setLastname("Ali");
    }

    string SinglePersonName()
    {
        return GetFirstname() + " " + GetLastname();
    }
};