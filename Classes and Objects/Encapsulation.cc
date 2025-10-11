// all vars and methods into class

// capusale have --> vars , methods

// encapsulation is achieving data hiding but itself isn't hiding
#include <iostream>
using namespace std;

class clCpasule1
{
private: // private data/method members can be accessed only in this class
    int _x = 0;
    int y = 0;
    int input(string message)
    {
        int e = 0;
        cout << "\n"
             << message << endl;
        cin >> e;
        return e;
    }

public: // public data/method members can be accessed  in this class & and outside class
    // get property
    void GetX()
    {
        x = input("Enter X: ");
    }

    void GetY()
    {
        y = input("Enter y: ");
    }
};