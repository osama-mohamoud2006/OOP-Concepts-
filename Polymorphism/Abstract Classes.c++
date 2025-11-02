#include <iostream>
using namespace std;

// Abstract class / Interface / Contract
class clsPerson
{
    // Abstract Class have pure virtual functions
    virtual void Print() = 0;
};

// dervied class
class clsStudent : public clsPerson
{
    // you should implement the pure virtual functions in base class
private:
    string _FirstName;
    string _LastName;

public:
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void Print() override
    {
        cout << "The first name is: " << _FirstName << endl;
        cout << "The last name is: " << _LastName << endl;
    }
};

int main()
{
    clsStudent s1; // you should implement the pure virtual functions in the dervied class to make object from class without any problem

    s1.SetFirstName("opa");
    s1.SetLastName("loka");
    s1.Print();
}