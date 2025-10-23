#include <iostream>
using namespace std;

class clsPersonInfo
{
private: // accessible within class only
    string _FirstName;
    string _LastName;
    string _ID;

public: // accessible everywhere
    clsPersonInfo(string Fname, string Lname, string ID)
    { // parametrized constructor
        _FirstName = Fname;
        _LastName = Lname;
        _ID = ID;
    }
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

class clsPrintInfo : public clsPersonInfo
{
    // i set  property Get as protected access modifier
public:
    clsPrintInfo(string fname, string lname, string id)
        : clsPersonInfo(fname, lname, id)
    {
    }

    void Print()
    {
        /*
private: // I couldn't access them as they are private data members
    string _FirstName;
    string _LastName;
    string _ID;

        */
        // clsPersonInfo:: You can only access public & protected member methods and data members

        // get full name, get id
        // is protected (access specifiers) i could acsess them here as i use them
        // in  inherited class

        cout << "The full name is: " << GetFullName() << endl;
        cout << "The Id is: " << GetID() << endl;
    }
};