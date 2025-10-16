#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    cout << ptr << endl;  // will print the address of x
    cout << &ptr << endl; // will print the address of pointer itself

    // dynamic memory allocation
    int *ptr2 = new int; // allocated int in heap memory

    *ptr2 = 190; // * --> derefrencing , assigned value to this int

    cout << *ptr2 << endl;

    delete ptr2;
     cout << *ptr2 << endl;
}