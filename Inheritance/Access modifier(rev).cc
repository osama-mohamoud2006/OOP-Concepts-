#include <iostream>
using namespace std;

class clsPersonInfo
{
private: // accessible within class only
    string _FirstName;
    string _LastName;
    string _ID;

public: // accessible everywhere
    // set
    void SetFirstName(string FName)
    {
        _FirstName = FName;
    }

    void SetLastName(string LName)
    {
        _LastName = LName;
    }

    void SetID(string Id)
    {
        _ID = Id;
    }

protected: // accessible within the sub classes only
    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    string GetID()
    {
        return _ID;
    }
};

class clsPrintInfo
{
    
};