#include <iostream>
using namespace std;

class clsX
{
public:
    int s = 100;

public:
    void NewS(int &s) // will take the value by Ref,it wonot copy it
    {
        s = 200;
    }

    // call by val , local change , wonot affect the obj in main
    void ClassByVal(clsX v){
        v.s=1000;
    }

    // call by ref , will affect the obj in main
     void ClassByRef(clsX &r){
        r.s=1000;
    }
};

int main()
{
///clsX x1;
    //int n=0;
//
    //call by ref 
    //cout << "Before using funtion: " << n<< endl;//0
    //x1.NewS(n);
   // cout << "After using function: "<<n<<endl; //200

    // call by val 
   clsX x2;
   x2.s=10;
   x2.ClassByVal( x2);
   cout<< "the s val is(by value): "<<x2.s<<endl; // 10 

   // call by  ref
   x2.ClassByRef(x2);
      cout<< "the s val is(by ref): "<<x2.s<<endl; // 1000



   
}