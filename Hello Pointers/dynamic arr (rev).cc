#include <iostream>
using namespace std;

int main()
{

    // static array
    const int l = 100; // compiler should know the length as const
    //int arr[l];        // will be defined in compile time

    // dynamic array
    int len = 12;
    int *Arr = new int[len]; // dynamic array

    for (int i = 0; i < 12; i++)
    {
        *(Arr+i)=i+1;
    }

     for (int i = 0; i < 12; i++)
    {
       cout<< *(Arr+i)<<" ";
    }

    delete []Arr;
}