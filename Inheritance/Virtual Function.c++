#include <iostream>
using namespace std;

// super class
class clsPerson
{

public:
    // virtual is keyword
    //  you should use it in base class only
    //  solve the override problem in upcasting(call the print in base class even i overrided it in dervied class)
    virtual void print()
    {
        cout << "hello from base class" << endl;
    }
};

class clsStudent : public clsPerson
{
public:
    // override
    void print()
    {
        cout << "Hello from sub class\n";
    }
};

int main()
{
    clsPerson p1;
    p1.print(); //--> will call the print in base class

    clsStudent s1;
    s1.print(); // ---> will call print  in sub class

    // Upcasting//
    // inheritance visibility mode should be public to use upcasting

    clsPerson *ptr = &s1;
    ptr->print(); // will call the overriden method in dervied class instead of calling the original print in super class 
}