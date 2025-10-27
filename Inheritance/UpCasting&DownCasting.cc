#include <iostream>
using namespace std;

class clsPerson
{
public:
    string HiFromBaseClass()
    {
        return "Hi from base class ";
    }
};

class clsEmployee : public clsPerson
{
public:
    string HiFromDerviedClass()
    {
        return "Hi from sub class";
    }
};

int main()
{
    clsEmployee emp1;

    // UpCasting
    // means casting from dervied class --> base class
    // We Will Use Pointers//
    clsPerson *UP = &emp1;
    cout << UP->HiFromBaseClass() << endl; // Method in base class
    // cout<<UP->HiFromDerviedClass()<<endl;// // can't access it as it is method in dervied class not base class

    // DownCasting
    // means casting from base class --> dervied class
    clsPerson p1;
   // clsEmployee * Down = &p1;// // down casting (You cann't)

}