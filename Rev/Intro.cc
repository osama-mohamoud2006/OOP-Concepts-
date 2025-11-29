
#include <iostream>
using namespace std;

class clsPerson
{
    // all members are accessible in class (even if it is private)
    // Any vars declared in class are data members ( private by default )
    string FirstName; // --> data member
    string LastName;  // --> data member
    short Age;        // --> data member
    // method (function)
    string FullName() // --> member method
    {
        return FirstName + " " + LastName;
    }

public:
 
  // Data Members should be private , and we should use set to change it is value  
   void SetFirstName(string Fname){ FirstName= Fname ;}
   void SetLastName(string lname){ LastName =lname; }
    string GetFname(){return FirstName;}
    string GetLname(){return LastName;}

    short GetAge(){ return Age ;} // read-only 
 
    
    string PFirstName; // --> data member
    string PLastName;  // --> data member
    short PAge;        // --> data member
    // short Age; --> it defined perviously
    string PFullName() // --> member method
    {
        return PFirstName + " " + PLastName;
    }

// private: // accessible in the class only!
//     int _x;
//     int _y;
//     void PrintX(){cout<<"HI x!"<<_x<<endl; }

//     protected: // accessible in the same class only and the class that inherits this class 
//     int ProX ;
//     int Proy ; 
//     void PrintProX(){cout<<"HI x!"<<ProX<<endl; }

//     public :  // accessible everywhere 
//     int m =0;


};

int main()
{
    clsPerson p1;
   

    // p1.ProX=10; //member "clsPerson::ProX" (declared at line 52) is inaccessibl

    // p1._x; //member "clsPerson::_x" is inaccessible


    // i can access these members as they are public
    p1.PFirstName = "osama";   // data member stored new place in memory
    p1.PLastName = "mohamoud"; // data member stored new place in memory
    p1.PAge = 19;
    // p1.FullName(); --> i couldn't access this method as it is private by default
    cout << p1.PFullName() << endl; // method member has one space in memory shared between objs  ( has one space for them )
}
