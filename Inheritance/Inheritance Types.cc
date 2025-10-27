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
class clsPeople : private clsPerson
{

public:
    clsPeople() // you should use constructors to assign values before return values
    {
        SetFirstName("ahmed");
        setLastname("Ali");
    }

    string SinglePersonName()
    {

        return (GetFirstname() + " " + GetLastname());
    }
};

// multi-level inheritance
class clsMPeople : public clsPeople
{

public:
    void Test()
    {
        cout << "Hello World!\n";
    }
};



int main()
{
    clsPeople p1;
    cout << p1.SinglePersonName() << endl;

    clsMPeople m;
    m.SinglePersonName(); // public property in clsPeople,so i could i access it
   // m.SetFirstName("");// inaccessible(from super class and the inheritance visibility mode is private so i couldn't access it)

   m.Test();


}