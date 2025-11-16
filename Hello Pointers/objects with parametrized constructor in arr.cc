#include <iostream>
using namespace std;

class clsP
{
    int x;

public:
    clsP(int value)
    {
        this->x = value;
    }

    void Print(){
        cout<<x;
    }
};

int main(){
    //static array 
    // intializing 3 objects using parameterized constructor
    clsP arr[]={clsP(10),clsP(20),clsP(30)}; // pass value in parameterized constructor 
    for(clsP i:arr){
        i.Print();
        cout<<" ";
    }
}