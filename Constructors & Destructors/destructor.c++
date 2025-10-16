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

    }

    ~clsTest() // destructor (will be calling before object is destroyed.)
    {
        cout << "\nHi iam destructor!\n";
    }
};

int main()
{
    clsTest t1;
}