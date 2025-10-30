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

// operator overloading
// Ex : + --> used for addition and add string together
void SayHi(string name = "osama")
{
    cout<<"hi "+name<<endl;
}
int main()
{
    // Polymorphism : one form different behaviour in different scenarios
    print();
    print("osama");
    cout << print(19);

    SayHi();
}