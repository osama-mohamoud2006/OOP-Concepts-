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
    void Set()
    {
        clsPerson::SetFirstName("ahmed");
        clsPerson::setLastname("Ali");
    }

    string SinglePersonName()
    {
        return (GetFirstname() + " "+GetLastname());
    }
};

int main(){
    clsPeople p1;
    cout<< p1.SinglePersonName()<<endl;
}