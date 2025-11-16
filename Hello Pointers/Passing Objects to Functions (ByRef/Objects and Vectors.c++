#include <iostream>
#include <vector>
using namespace std;

class clsT
{
private:
    int x;

public:
clsT(){

}
    clsT(int i , int z , int m)
    {
        x = i;
    }
    void SetX(int num)
    {
        this->x = num;
    }

    int GetX() { return this->x; }

    void Print()
    {
        cout << GetX() << endl;
    }
 
};


int main()
{
    // vector of classes
    vector<clsT> Vclass;

    // will create 5 objects and push them to the vector
    for (int i = 0; i < 5; i++)
    {
        // pass values to constructor
        Vclass.push_back(clsT(i, i+1,i+3)); // push class to vector
    }

    // access the 5 vectors and edit them
    for (int i = 0; i < 5; i++)
    {
        Vclass[0].SetX(10);
        Vclass[1].SetX(20);
        Vclass[2].SetX(30);
        Vclass[3].SetX(40);
        Vclass[4].SetX(50);
    }

    for (int i = 0; i < 5; i++)
    {
        Vclass.at(i).Print();
    }

  
     
}