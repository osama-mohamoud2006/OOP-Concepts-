#include <iostream>
using namespace std;

class clsPerson
{
public:
    virtual void print()
    {
        cout << "hi from base class\n";
    }
};

class clsStudent : public clsPerson
{
public:
    void print() override
    {
        cout << "hi from derived class\n";
    }
};

int main()
{
    // Early/Static binding --> happens at compile time
    clsPerson p1;
    p1.print();

    clsStudent s1;
    s1.print();

    // Late/Dynamic binding --> happens at runtime
    clsPerson *ptr = &s1; // upcasting(in heritance visibility should be public)
    ptr->print();
}
