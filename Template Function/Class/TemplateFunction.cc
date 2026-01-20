#include <iostream>
using namespace std;

// Overloading 
// i wrote the same function with the 'same implementation'
int Max(int n1 , int n2){return (n1>n2)? n1 : n2 ;}
short Max(short n1 , short n2){return (n1>n2)? n1 : n2 ;}
double Max(double n1 , double n2){return (n1>n2)? n1 : n2 ;}
float Max(float n1 , float n2){return (n1>n2)? n1 : n2 ;} // --> headache 

// One Function Only , Choose The Data Type as you wish ///

template <typename D> // Template --> template <typename TheNameOfTemplate> 
// Template Scope Only For 1 Function
D Max(D N1, D N2)
{
    return (N1 > N2) ? N1 : N2;
} // template Function

template <typename D> // The Scope Of Template 1 Ends After Making the Max Function, So you should Declare New Template For The New Function .
D Min(D N1, D N2) { return (N1 > N2) ? N2 : N1; }

int main()
{
    cout<<Max(1,2)<<endl; // call one of overloading function 
    cout<< Max<int>(10,20)<<endl;
    cout<< Min<double>(20.2,22.3)<<endl;
    
}