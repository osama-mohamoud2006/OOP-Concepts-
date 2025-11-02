#include <iostream>
using namespace std;

// Abstract class / Interface / Contract
class clsPerson
{
    // Abstract Class have pure virtual functions
    virtual void Print() = 0;

public:
    clsPerson() // you can use constructors as usual
    {
        // No args constructor
    }
    // these methods aren't pure virtual functions , so there is no need to implement it in dervied class
private:
    short _age;

public:
    void SetAge(short age)
    {
        _age = age;
    }
    void PrintAge()
    {
        cout << "the age is: " << _age << endl;
    }
};

// dervied class
class clsStudent : public clsPerson
{
    // you should implement the pure virtual functions in base class
private:
    string _FirstName;
    string _LastName;

public:
    clsStudent() : clsPerson()
    {
    }
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void Print() override // if the pure vf have args you must write them
    {
        cout << "The first name is: " << _FirstName << endl;
        cout << "The last name is: " << _LastName << endl;
    }
};

class clsEmp : clsPerson
{
    // it's Abstruct class as itsn't implemented the pure virtual functions
};
int main()
{
    clsStudent s1; // you should implement the pure virtual functions in the dervied class to make object from class without any problem

    s1.SetFirstName("opa");
    s1.SetLastName("loka");
    s1.Print();

    s1.SetAge(19); // As the inheritance is public visibility mode , so i could access the methods the dervied class get from base class
    s1.PrintAge();

   
}