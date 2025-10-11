// all vars and methods into class

// capusale have --> vars , methods

// encapsulation is achieving data hiding but itself isn't hiding
#include <iostream>
using namespace std;

class clsSimpleSum
{
private: // private data/method members can be accessed only in this class
    int _x = 0;
    int _y = 0;
    int _input(string message)
    {
        int e = 0;
        cout << "\n"
             << message << endl;
        cin >> e;
        return e;
    }

public: // public data/method members can be accessed  in this class & and outside class
    // set property
    void SetX(string message)
    {
        _x = _input(message);
    }

    void SetY(string message)
    {
        _y = _input(message);
    }

    // Get property

    int GetX() { return _x; }
    int GetY() { return _y; }
};

int main()
{
    clsSimpleSum SumOf2Nums;

    SumOf2Nums.SetX("Enter X: ");
     SumOf2Nums.SetY("Enter Y: ");


}