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
    void SayHi()
    {
        cout << "HI" << endl;
    }
};

// sub class
class clsStudent : public clsPerson
{
public: // parametrized constructor intilize the base class and should be public
    clsStudent(string name, short age) : clsPerson(name, age)
    {
    }
    void SaySybau()
    {
        cout << "Sybau" << endl;
    }
};

int main()
{
    clsStudent s1("osama", 19);
    // upcasting
    // syntax : base class * ptr = &subclass
    // inheritance should be public
    clsPerson *ptr = &s1;
    ptr->SayHi(); // method in base class 
    //ptr->SaySybau(); //
    // inaccessible as it is in sub class not in base class and you have done upcasting to base class
}