#include <iostream>
using namespace std;

class clsTest
{
private:
    string _name;

public: // conustractor is created by compiler by default , it always calling after obj is created and it is public (and should be public if you created it )
    // conustractor
    clsTest() // doesn't have data type , its name is the same as class name
    {
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
    clsTest t1;
    t1.PrintName();
}