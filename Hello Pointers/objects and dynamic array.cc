#include <iostream>
using namespace std;

class clsA
{

private:
 int x=0 ;

public:
   
    int Add()
    {

        return x++;
    }
    void print(){
        cout<<this->x<<endl;
    }

     void print(int x){
        cout<<x<<endl;
    }
};


int main()
{

    int len = 5;
    clsA *arr = new clsA[len]; // dynamic array

    for (int i = 0; i < len; i++)
    {
        arr[i].print(i+1);
    }

   delete [] arr;
}