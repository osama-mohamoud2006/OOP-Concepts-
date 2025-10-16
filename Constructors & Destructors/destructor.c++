#include <iostream>
using namespace std;

class clsTest
{
private:
    string _name;

    // don't forget constructor and destructor should be public
public:
    clsTest() // constructor (will be calling  after i create obj)  // default constructor
    {
        cout << "\nHi iam constructor!\n";
    }

    clsTest(string message) // parameterized constructor
    {
        cout << message << endl;
    }

    clsTest(clsTest &OldObj) // copy constructor
    {
        _name = OldObj._name;
    }

    // constructor can be overloaded

    ~clsTest() // destructor (will be calling before object is destroyed.) ,
    // you cann't use parameters with destructor
    // destructor cann't be overloaded
    {
        cout << "Hi iam destructor!\n";
    }
};

void T1(){
    clsTest TestFromFunction("Hello from T1 function ,iam parametrized constructor!");
    // after exiting from the function(after the function finshed the execution)
    // the obj will be destroyed and destructor will be called
}

int main()
{
    //clsTest t0;                                       // default
    //clsTest t1("hello iam parametrized constructor"); // parameterized
    //clsTest t2 = t1;                                  // copy


    void T1();
}