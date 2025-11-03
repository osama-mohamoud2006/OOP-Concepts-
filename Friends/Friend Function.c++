#include <iostream>
using namespace std;

class clsCalac
{
    // you can type friend class anywhere in the class scope

private:
    int Private1;
    int Private2;

protected:
    int Protected1;
    int Protected2;

public:
    int Public1;
    int Public2;

public:
    clsCalac()
    {
        Private1 = 10;
        Private2 = 200;
        Protected1 = 19;
        Protected2 = 12;
        Public1 = 1019293;
        Public2 = 1412;
    }
    friend void Print(); // so print function now can access the full access on data members of class
};

class clsOPerations
{
    int sum(int n1, int n2) { return n1 + n2; }
    int sub(int n1, int n2) { return n1 - n2; }
    bool ISN1SmallerThanN2(int n1, int n2) { return (n2 > n1) ? true : false; }

    friend void Print(); // made the print() accessible all private methods here 
};

void Print()
{
    clsCalac c;
    clsOPerations op;
}

int main()
{
    Print();
}
