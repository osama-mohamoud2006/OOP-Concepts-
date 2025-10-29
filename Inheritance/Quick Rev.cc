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
class clsStudent : clsPerson
{
};

int main()
{
    clsStudent s1;
    // upcasting
    // syntax : base class * ptr = &subclass
    clsPerson *ptr = &s1;
}