#include <iostream>
using namespace std;

// Rev on Static (in functions)

// void STaTiC()
// {
//     static int x = 0; // static var
//     x++;
//     cout << x << endl;
// }

class clsA
{
private:
    // static int _x=0; // you cann't initialize the static data member in class

    static int _x; // static member
public:
    clsA() // constructor (must be public)
    {
        _x = 0;
    }
};

int main()
{
    clsA x1;
}