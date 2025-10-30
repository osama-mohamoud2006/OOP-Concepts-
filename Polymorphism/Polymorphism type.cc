#include <iostream>
using namespace std;

// Polymorphism --> function overloding , function overriding , operator overloading ,virtual function

// function overloading
// you should name all functions with the same name , but you must care about the data type of parameters, idc about what function return or what is the function doing
void print()
{
    cout << "Hi" << endl;
}
void print(string name)
{
    cout << "Hi " << name << endl;
}
string print(short age)
{
    cout << "the age is: " << age << endl;
}

int main()
{
    print();
    print("osama");
    cout << print(19);
}