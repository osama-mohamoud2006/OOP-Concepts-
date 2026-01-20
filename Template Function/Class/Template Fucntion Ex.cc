#include <iostream>
#include <vector>
using namespace std;
vector <int> x; 
template <typename T>
void PrintArr(T Arr[], T Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << Arr[i] << endl;
    }
}

template <typename S>
void Swap(S &E1, S &E2)
{
    S Temp = E1;
    E1 = E2;
    E2 = Temp;
}

int main()
{
    short a = 1;
    short b = 2;
    Swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
}