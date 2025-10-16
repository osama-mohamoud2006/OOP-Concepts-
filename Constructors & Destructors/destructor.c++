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

void T1()
{
    clsTest TestFromFunction("Hello from T1 function ,iam parametrized constructor!");
    // After exiting from the function (after the function finishes execution),
    // the object will be destroyed and the destructor will be called.
}

// dyanmic memory allocation
void T2()
{
    // syntax: data type * the name of the pointer(obj here)= new data type
    clsTest *clsPtr = new clsTest("hello from  T2"); // destructor won't be called as i didn't use the delete to release the obj from memory (manual memory mangement)
}

int main()
{
    //clsTest t0;                                       // default
    //clsTest t1("hello iam parametrized constructor"); // parameterized
  //  clsTest t2 = t1;                                  // copy

  //  T1();
    T2();
}