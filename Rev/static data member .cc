#include <iostream>
using namespace std;

int Count()
{
    static int X = 0;
    X++;
    return X;
}

class Count1
{
public:
    static int C; // static data members initialized outside class and before the main
    int c1;

    Count1()
    {
        C++;
    }

    static void Add2() // static method
    {
        C += 2; // static data member can be accessible on static methods
                //  c1=2; --> a nonstatic member reference must be relative to a specific object
    }
};
int Count1::C = 0;

int main()
{
    Count();
    Count();
    Count();
    cout << Count() << endl; // static var inside function , will keep its value as it is initialized once and it remains the entire program life time

    Count1 c;
    Count1 C1;
    Count1 c2;

    cout << "The Static member of class: " << Count1::C << endl; // static data member is shared between all objects of the same class

    Count1::Add2(); // you cann access static methods on the class level without making objects
}