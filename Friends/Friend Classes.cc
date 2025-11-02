#include <iostream>
using namespace std;

class clsCalac
{
private:
    int _x;
    int _y;

protected:
    int c;
    int d;

public:
    int l;
    int m;

public:
    clsCalac()
    {
        _x = 10;
        _y = 200;
        c = 19;
        d = 12;
        l = 1019293;
        m = 1412;
    }
};

class clsPrint
{
public:
    void display(clsCalac c)
    {
        // cout << c.c << endl; // --> c is inaccessible (cuz it is protected member)
        // cout << c.a << endl;// --> a is inaccessible (cuz it is protected data member)
        // cout << c._x << endl; // --> _x is inaccessible (cuz it is private member)
        cout << c.l << endl; // accessible as it is public data member
    }
};

int main()
{
    clsCalac v;
    clsPrint p;
    p.display(v);
}