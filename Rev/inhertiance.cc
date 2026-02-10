#include <iostream>
using namespace std;
// super class / base class
class clsPerson
{
    string name;
    short age;

public:
    clsPerson()
    {
        cout << "Hi iam the default constructor of super class\n";
    }

    clsPerson(string name, short age)
    {
        this->name = name;
        this->age = age;
        cout << "Hi iam the parametrized constructor of super class\n";
    }
    void SetName(string name)
    {
        this->name = name;
    }

    void SetAge(short age)
    {
        this->age = age;
    };

    string GetName()
    {
        return name;
    }

    short GetAge()
    {
        return this->age;
    }

    virtual void print()
    {
        //cout << "\nthe og function(before overriding)\n";
        cout << this->name << endl;
        cout << this->age << endl;
    }
};

// derived class , sub class --> inherit all properties from super class/base
class clsEmp : public clsPerson
{

    string department;
    string id;

public:
    void SetDepartment(string Department)
    {
        this->department = Department;
    }

    void SetId(string Id)
    {
        this->id = Id;
    }

    clsEmp()
    {
        // the constructor of sub class
        // it will call the constructor of the base class (at first )
        cout << "Hi iam the constructor of sub-class\n"; // then
    }
    clsEmp(string name, short age, string department, string id) : clsPerson(name, age)
    {
        cout << "Hi iam the parametrized constructor of sub-class\n"; // then
        this->department = department;
        this->id = id;
    };

    void print() override // the signature is same as base class , but the definition is different
    {
        clsPerson::print(); // call the overriden function
        cout << "\nthe overrideid function(after overriding)\n";
        cout << this->department << endl;
        cout << this->id << endl;
    }
};

int main()
{
    clsEmp Emp1("lala", 10, "ls", "204241");
   // Emp1.print(); // early/static binding           

    clsPerson * Ptr = & Emp1; // upcasting 
   cout<<  Ptr->GetName()<<"\n";

   cout<<"\n"<<"Upcasting\n";
   clsPerson * Ptr1 = &Emp1 ; // dynamic binding
   Ptr1->print();
   
}