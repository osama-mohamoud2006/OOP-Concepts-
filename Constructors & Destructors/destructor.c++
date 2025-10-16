#include <iostream>
using namespace std;

class clsTest
{
private:
    string _name;

public:       // don't forget constructor and destructor should be public
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

int main()
{
    clsTest t1("hello iam parametrized constructor");
}