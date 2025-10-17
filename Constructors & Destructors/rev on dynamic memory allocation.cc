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
    cout << *ptr2 << endl; // will print garbage value

    int *arr = new int[6]; // dyanmic arr

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
        cout<<(*arr+i)<<endl;
    }
}