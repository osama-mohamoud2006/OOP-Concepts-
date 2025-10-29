#include <iostream>
using namespace std;
// base class
class clsPerson
{
private:
    string _name;
    short _age;

public:
    clsPerson(string name, short age)
    {
        _name = name;
        _age = age;
    }
};

// sub class
class clsStudent : public clsPerson
{
public:
    clsStudent(string name, short age) : clsPerson(name, age)
    {
    }
};

int main()
{
    clsStudent s1("osama", 19);
    // upcasting
    // syntax : base class * ptr = &subclass
    // inheritance should be public
    clsPerson *ptr = &s1;
}