#include <iostream>
using namespace std;

class clsTest
{
private:
    string _name=" ";

public: // constructor is function  created by compiler by default , it always calling after obj is created and it is public (and should be public if you created it )
    // constructor
    clsTest(string name) // doesn't have data type , its name is the same as class name
    {
        _name=name;
    }

public:
    void SetName(string name)
    {
        _name = name;
    }
    private:
    string GetName()
    {
        return _name ;
    }
public:
    void PrintName(){
        cout<<"the name is: "<<GetName()<<endl;
    }
};

int main()
{
    clsTest t1("sama"); // i should assign value in the constructor (even i initlized the values)
    t1.SetName("osama");
    t1.PrintName();
}