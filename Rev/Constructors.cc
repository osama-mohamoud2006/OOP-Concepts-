#include <iostream>
using namespace std;

class clsStudent
{

    int x;
    int y;

public:
    // constructor
    clsStudent();

    int add(int x, int y) const { return x + y; }
    int sub(int x, int y) const { return x - y; }
};
// the constructor is called when you create object of the class
// special method
// doesn't return any data type
clsStudent::clsStudent() // call the constructor outside class
{
    cout << "HI IAM CONSTRUCTOR(DEFAULT-NON paramtrired CONSTRUCTOR) AND IT IS CALLED WHEN YOU CREATE OBJ OF THIS CLASS" << endl;
    x = 0;
    y = 0;
}

class clsPersonData
{
private: // access modifier (the data members will be accessible in the class scope only)
    string _Name;
    short _Age;

public:             // access modifier (the data members&methods will be accessible every where)
    clsPersonData() // no-args , default constructor it is called when you create object of this class , i will use it here to initialize the data members here
    {
        _Name = "";
        _Age = 0;
    };

    // parametrized constructor
    clsPersonData(string name , short age)
    {
        _Name = name ;
        _Age = age ; 
    }

    // copy constructor
    clsPersonData(clsPersonData &Obj) // used & to avoid stack overflow
    {
        Obj._Name = this->_Name;
        Obj._Age = this->_Age;
    }

    // set
    void SetAge(short age)
    {
        _Age = age;
    }
    void SetName(string name) { _Name = name; }

    // get
    string GetName() { return _Name; }
    short GetAge() { return _Age; }

    // Destructor
    // cant overloading , doesn't have parameters , it is called automatically when the obj will destroy  , if you will create class in heap memory then it isn't important as you should deallocate the memory manually btw
    ~clsPersonData()
    {
        cout << "\nHi Guys Iam Destructor BTW !\n";
    }
};

int main()
{
    clsPersonData P = clsPersonData("lola",20);
    cout << P.GetName() << endl;
    cout << P.GetAge() << endl;

    // pointer (of class 'clsPersonData' Data Type) --> used to create obj in heap memory dynamic memory allocation
    clsPersonData *Ptr = new clsPersonData();
    Ptr->SetName("lara");
    Ptr->SetAge(22);

    cout << Ptr->GetName() << endl;
    cout << Ptr->GetAge() << endl;

    // destructor will not be called automatically as this object in heap memory
    // it is dynamic memory allocation which any thing in heap memory should be deleted manually
    delete Ptr;
    Ptr = nullptr;
}