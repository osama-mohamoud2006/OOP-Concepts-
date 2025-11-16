#include <iostream>
using namespace std;

class clsP
{
    int x;
    string name;

public:
    clsP() // default constructor
    {
    }
    clsP(int value) // parametrized
    {
        this->x = value;
    }
    clsP(int age, string name) // parametrized (overloading)
    {
        this->x = age;
        this->name = name;
    }
    void Print()
    {
        cout << x;
    }
    void Print(bool op2)
    {
        cout << "name is: " << name<<endl;
        cout << "age is:" << x << endl;
    }
};

string EnterName()
{
    string name = "";
    cout << "\nEnter name: ";
    cin >> name;
    return name;
}

short EnterAge()
{
    short age = 0;
    cout << "\nEnter age: ";
    cin >> age;
    return age;
}

int main()
{
    // // static array (data type : clsP(as class is data type) )
    // //  intializing 3 objects using parameterized constructor
    // clsP arr[] = {clsP(10), clsP(20), clsP(30)}; // pass value in parameterized constructor
    // clsP arr2[] = {
    //     clsP(19, "osama"), clsP(20, "ahmed"), clsP(30, "omar")};

    // for (clsP P : arr2)
    // {
    //     P.Print(true);
    //     cout << endl;
    // }


    // dynamic array

    int len = 3;
    clsP *arr3 = new clsP[len]; // you should make no-args constructor to create this dynamic array

    for (int i = 0; i < len; i++)
    {
        // you can edit array element :
        //*(arr3+i) = clsP(EnterAge(),  EnterName());//  --> 1 
        //OR
        arr3[i]=clsP(EnterAge(),  EnterName());     // ---> 2
    }

    cout << "______________________\n";
    for (int i = 0; i < len; i++)
    {
        arr3[i].Print(true);
    }
}