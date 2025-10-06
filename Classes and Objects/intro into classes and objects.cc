#include <iostream>
using namespace std;

class clsPerson
{
    // all members are accessible in class (even if it is private)
    // members ( private by default )
    string FirstName; // --> data member
    string LastName;
    short Age;
    // method (function)
    string FullName() // --> member method 
    {
        return FirstName + " " + LastName;
    }

public:
    string PFirstName;
    string PLastName;
    short PAge;
    //short Age; --> it defined perviously 
    string PFullName()
    {
        return PFirstName + " " + PLastName;
    }
};

int main()
{
    clsPerson p1;
    // i can access these members as they are public
    p1.PFirstName = "osama";
    p1.PLastName = "mohamoud";
    p1.PAge = 19;
    // p1.FullName(); --> i couldn't access this method as it is private by default
    cout << p1.PFullName() << endl;
}