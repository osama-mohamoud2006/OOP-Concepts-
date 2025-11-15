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

    
};

int main()
{
    clsX x1;
    int n=0;

    //call by ref 
    cout << "Before using funtion: " << n<< endl;//0
    x1.NewS(n);
    cout << "After using function: "<<n<<endl; //200


   
}