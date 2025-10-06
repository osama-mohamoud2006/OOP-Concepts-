#include <iostream>
using namespace std;

class clsStudent
{

public: // make all data , method members are accessible
    // data members
    string FirstName;
    string LastName;

    // method member
    string FullName(){
        return "my name is "+FirstName+" "+LastName;
    }
};

int main(){

    clsStudent S1,S2;
    // note : the method is shared between 2 objects 
    S1.FirstName="Eman";
    S1.LastName="Mansour";
    S1.
}