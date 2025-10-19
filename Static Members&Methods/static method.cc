#include <iostream>
using namespace std;

class clsM
{
private:
    int _x;         // not-static data member
    static int _Sx; // static data member
public:
static int AddOneToX(){
  //  return ++_x;// // you cann't use static data member with static method 
}
    static int AddOne() // you cann't access this method if it is private
    {
        return ++_Sx; // it is static data member
    }
};

int clsM::_Sx=0; // you should initlize static var before main and outside class

int main()
{
    cout << clsM::AddOne() << endl; // i could call the static method without make any objects

    clsM ex1;
    cout<<ex1.AddOne()<<endl; // i could call the static method with objects normally
}