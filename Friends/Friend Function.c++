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
    friend void Print(); // i made the Function clsPrint have the access to ALL DATA MEMBERS(Even if it is private or protected) -- دافع رشوه
};

void Print(){

}