#include <iostream>
using namespace std;

class clsStudent
{
    private : // accessible in the class only (Access Modifier(Specifier))
    // private by default
    short Age ; // --> data member (var that holds the data)
    string Name ; // ---> data member
    int id ;

    public:
    // property set ---> makes you edit the private data members 
     void SetAge(short age){Age = age ;}
     void SetName(string name){Name = name;}

    public: // accessible to all outsiders and the class itself (Access Modifier(Specifier))
    string GetName()const{return Name;} /// ---> Member Method 
    int GetId(){return id ;} // read only property 

    protected : // accessible in the class and accessible to the classes which inherits this class  (Access Modifier(Specifier))
    short GetAge()const {return Age ;}

};

int main()
{
    clsStudent S1 ; // instance of class
    S1.GetName(); // The Method is accessible in main() --> public 
    //S1.Age =10; //clsStudent::Age" is inaccessible

   // S1.GetAge(); inaccessible as it is protected method which is accessible to the class which inherits this classs only 

}