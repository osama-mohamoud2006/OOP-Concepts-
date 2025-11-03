#include <iostream>
using namespace std;
// Abstract class ,Contract 
class clsPropForPerson
{
    // pure virtual function
    virtual void SetFirstName(string Fname) = 0;
    virtual void SetLastName(string Lname) = 0;
    virtual void SetAge(short age)=0;

};
class clsPersonData:clsPropForPerson
{
    private:
    struct stPersonData{
        string firsn
    };
};