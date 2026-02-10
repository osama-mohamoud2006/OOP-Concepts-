#include <iostream>
using namespace std;

class Super
{
public:
    void Method() {};
};

class Sub : public Super
{
public:
    void Method2() {};
};

int main()
{
    Sub S1;
    Super *Ptr = &S1;  // Up Casting 
    Ptr->Method(); // method in super class

    Super U;
   // Sub * Ptr2 =  &U; // down casting


}