#include <iostream>
using namespace std;

class clsTest
{
private:
    string _name ;
    short _age ; // i initlized the var 

public: // constructor is function  created by compiler by default , it always calling after obj is created and it is public (and should be public if you created it )
    // constructor
    clsTest(string name, int age ) // doesn't have data type , its name is the same as class name
    {
        cout<<"\nCARD DATA\n";
        _age = age; 
        _name = name;
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
        cout << "the name is: " << GetName() << endl;
        cout<<"the age is: "<<GetAge()<<endl;
    }
};

int main()
{
    clsTest t1("osa",19); // i should assign value in the constructor (even i initlized the values)
    t1.SetName("osama");
    t1.Print();
}