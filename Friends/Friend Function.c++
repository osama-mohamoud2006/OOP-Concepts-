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

// Abstract class , Contract 
class clsOpToDo
{
    // Pure virtual function
    virtual int sum(int n1, int n2) = 0;
    virtual int sub(int n1, int n2) = 0;
    virtual bool ISN1SmallerThanN2(int n1, int n2) = 0;
};
class clsOPerations:clsOpToDo
{
    int sum(int n1, int n2) { return n1 + n2; }
    int sub(int n1, int n2) { return n1 - n2; }
    bool ISN1SmallerThanN2(int n1, int n2) { return (n2 > n1) ? true : false; }

    friend void Print(); // made the print() accessible all private methods here
};

void Print()
{
    // i made the print friend of 2 different classes
    clsCalac c;
    clsOPerations op;
    // i could use the private and protected data members of clsCalac normally
    cout << "The sum is: " << op.sum(c.Private1, c.Private2) << endl;
    cout << "The sub is: " << op.sub(c.Protected1, c.Protected2) << endl;
    cout << "Is n2>n1? " << op.ISN1SmallerThanN2(c.Public2, c.Public2) << endl;
}

int main()
{
    Print();
    
}
