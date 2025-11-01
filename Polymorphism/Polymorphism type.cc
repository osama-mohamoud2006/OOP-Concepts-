#include <iostream>
using namespace std;

// Polymorphism --> function overloding , function overriding , operator overloading ,virtual function

// function overloading
// you should name all functions with the same name , but you must care about the data type of parameters, idc about what function return or what is the function doing
void print()
{
    cout << "Hi" << endl;
}
void print(string name)
{
    cout << "Hi " << name << endl;
}
short print(short age)
{
    return age;
}

// operator overloading
// Ex : + --> used for addition and add string together
string SayHi(string name = "osama")
{
    return "hi " + name;
}

class clsPerson
{
private:
    string _FirstName;
    string _LastName;

public:
    clsPerson(string Fname, string Lname)
    {
        _FirstName = Fname;
        _LastName = Lname;
    }

    virtual void PrintHiIamClass()
    {
        cout << "hi iam super class!" << endl;
    }
    string PrintFullName()
    {
        return _FirstName + " " + _LastName;
    }
};
// public --> inheritance visibility mode
class clsStudent : public clsPerson
{
public:
    clsStudent(string fname, string lname) : clsPerson(fname, lname)
    {
    }

    // overriding
    string PrintFullName()
    {
        // call the function in base class
        return "Welcome Student: " + clsPerson::PrintFullName();
    }

    // overriding + using virtual
    void PrintHiIamClass() override
    {
        cout << "hi iam sub class!" << endl;
    }
};
int main()
{
    // Polymorphism : one form different behaviour in different scenarios

    // overloading
    print();
    print("osama");
    cout << print(19) << endl;

    // operator overriding
    cout << SayHi() << endl;

    // overriding
    clsStudent s1("Arya", "loka");
    cout << s1.PrintFullName() << endl; // early binding

    // late binding
    // upcasing ///
    clsPerson *ptr = &s1;
    // used virtual function
    ptr->PrintHiIamClass();
}