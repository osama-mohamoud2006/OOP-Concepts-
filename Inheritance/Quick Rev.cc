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
    // virtual --> to solve overriding problem
    virtual void SayHiIamClass()
    {
        cout << "Hi iam base class :0)";
    }
};

// sub class
class clsStudent : public clsPerson
{
public: // parametrized constructor intilize the base class and should be public
    clsStudent(string name, short age) : clsPerson(name, age)
    {
    }
    void SayBou()
    {
        cout << "Sybau" << endl;
    }

    // overrided the SayHiIamClass() in super class
    void SayHiIamClass() override // override key word is ensure that overriding done
    {
        cout << "Hi iam Sub class ;0)";
    }
};

int main()
{
    clsStudent s1("osama", 19);
    s1.SayHiIamClass(); // early/static binding
    // upcasting
    // syntax : base class * ptr = &subclass
    // inheritance should be public
    clsPerson *ptr = &s1;
    ptr->SayHi(); // method in base class
    // ptr->SaySyBou(); //
    //  inaccessible as it is in sub class not in base class and you have done upcasting to base class

    // if you applied overriding in your program you will face problem when using upcasting

    // the problem itself
    clsPerson *ptr2 = &s1;
    // ptr2->SayHiIamClass();// // it will call the method in base class although i overrided it (X)

    // i used virtual in base class
    // dynamic/late binding //
    clsPerson *ptr3 = &s1;
    ptr3->SayHiIamClass(); // will call the overriden function
}