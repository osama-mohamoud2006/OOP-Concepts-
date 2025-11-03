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
  
};

void Print(){
clsCalac c;
  
}