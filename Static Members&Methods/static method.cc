#include <iostream>
using namespace std;

class clsM
{
private:
    int _x;         // not-static data member
    static int _Sx; // static data member
public:
    static void AddOne() // you cann't access this method if it is private 
    {
        _Sx++; // it is static data member
    }
};

int main()
{
    clsM::AddOne();
}