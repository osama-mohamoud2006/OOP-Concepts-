#include <iostream>
using namespace std;

class clsTest
{
private:
    string _name;
    short _age;

public:
    clsTest(string name, int age) // parameterized constructor
    {
        cout << "\nCARD DATA\n";
        _age = age;
        _name = name;
    }
    // overloaded
    clsTest(clsTest &OldObj) // copy constructor , you should use &
    {
        // _age , _name consdired as old objs
        _age = OldObj._age;   // make the new obj(2) have the same _age of old obj(1)
        _name = OldObj._name; // make the new obj(2) have the same _name of old obj(1)
    }

public:
    void SetName(string name)
    {
        _name = name;
    }

    void SetAge(short age)
    {
        _age = age;
    }

private:
    string GetName()
    {
        return _name;
    }

    short GetAge()
    {
        return _age;
    }

public:
    void Print()
    {
        cout << "\n\nthe name is: " << GetName() << endl;
        cout << "the age is: " << GetAge() << endl;
    }
};

int main()
{
    clsTest t1("osa", 19);
    t1.SetName("osama");
    t1.Print();

    clsTest t2 = t1;
    t2.Print(); // will print the same as t1.print()
}