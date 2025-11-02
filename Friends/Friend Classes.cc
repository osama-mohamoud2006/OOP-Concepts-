#include <iostream>
using namespace std;

class clsCalac
{
    // you can type friend class anywhere in the class scope

private:
    int _x;
    int _y;
    int _a;

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
        _a = 213;
    }
    friend class clsPrint; // i made the class clsPrint have the access to ALL DATA MEMBERS(Even if it is private or protected) -- دافع رشوه
};

class clsPrint
{
public:
    void display(clsCalac c)
    {
        cout << c.c<< endl;  // --> c is  accessible (cuz it is friend class of clsCalac  )
        cout << c._a << endl; // --> a is accessible (cuz it is friend class of clsCalac  )
        cout << c._x << endl; // --> _x is accessible (cuz it is friend class of clsCalac )
        cout << c.l << endl;  // accessible as it is public data member
    }
};

int main()
{
    clsCalac v;
    clsPrint p;
    p.display(v);
   
   // v._a; // --> as usual you cann't access private data member in main 
   // v.d ; // --> as usual you cann't access protected data member in main 

}