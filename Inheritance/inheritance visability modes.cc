#include <iostream>
using namespace std;

// Super
class clsPersonInfo
{
private: // accessible within class only
    string _FirstName;
    string _LastName;
    string _ID;

public: // accessible everywhere
    clsPersonInfo(string Fname, string Lname, string ID)
    { // parametrized constructor
        _FirstName = Fname;
        _LastName = Lname;
        _ID = ID;
    }
    // set
    void SetFirstName(string FName)
    {
        _FirstName = FName;
    }

    void SetLastName(string LName)
    {
        _LastName = LName;
    }

    void SetID(string Id)
    {
        _ID = Id;
    }

protected: // accessible within the sub classes only
    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    string GetID()
    {
        return _ID;
    }
};

class clsEmployee : public clsPersonInfo
{
    // i inherited the base class publicly
    //  this means : 1- The dervied class from this class will access what i inherited from my
    //  super class (clsPersonInfo)
    //  2- I can access what this class inherited in int main()

    // i am derived class from clsPersonInfo --> i can access protected and public data members

private:
    string _Department;
    string _Salary;

public:
    // constructor
    clsEmployee(string Fname, string Lname, string ID,
                string department, string salary) // sub class
        : clsPersonInfo(Fname, Lname, ID)         // base class
    {
        _Department = department;
        _Salary = salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    void SetSalary(string salary) { _Salary = salary; }

    string GetSalary() { return _Salary; }
    string GetDepartment()
    {
        return _Department;
    }

    void print(){
        cout<<"The full name is: "<<GetFullName()<<endl; // this is protercted data member
    }
};

int main()
{
    /* From Super CLass (clsPersonInfo)
    string _FirstName;
    string _LastName;
    string _ID;
    */

    clsEmployee emp1;
    emp1.
}
