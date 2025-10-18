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
private: // static member can be private and can be public
    // static int _x=0; // you cann't initialize the static data member in class

    static int _x; // static member
public:
    clsA() // constructor (must be public)
    {
        //_x = 0;// //you cann't initialize the static data member in class constructor
        _x++;
    }

public:
    void add()
    {
        _x++;
    }
    void print()
    {
        cout << _x << endl;
    }
};
//*Note: you cann't use static member without initilization
int clsA::_x = 0; //----> intilization must be outside class and before main

int main()
{
    clsA x1, x2, x3, x4, x5; // _x= 5 , as constructor runs after each time i create object and ad +1

    x1.add();
    x1.print(); //6 

    x1.add();
    x1.print();

    x1.add();
    x1.print();

    // will print 5 for all as it is static member
    x2.print();
    x3.print();
    x4.print();
    x5.print();
}