#include <iostream>
using namespace std;

class clsPerson
{
    // members ( private by default )
    string FirstName;
    string LastName;
    short Age;
    // method (function)
    string FullName(){
        return FirstName+ " "+LastName;
    }

public:
    string PFirstName;
    string PLastName;
    short PAge;
};

int main()
{
    clsPerson p1;
    // i can access these members as they are public
    p1.PFirstName = "osama";
    p1.PLastName = "mohamoud";
    p1.PAge = 19;
    //p1.FullName(); --> i couldn't access this method as it is private by default 
}