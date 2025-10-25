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

    clsEmployee(){
        
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

    void print()
    {
        cout << "The full name is: " << GetFullName() << endl; // this is protercted data member
    }
};

class clsManageEmployes : private clsEmployee
{
    ////////////(as clsEmployee is public inheritance visbility)//////////////
    // i will inherit all things from clsEmployee normally
    // and i can also access what the clsEmployee inherited from clsPersonInfo
    /// what i said is belonging to this class only why?
    // private visibility --> doesn't allow dervied class from this class access what i inherited perviously and main() also the same

private:
    string _MName;

public:
    clsManageEmployes()
    {
    }
    clsManageEmployes(string Fname, string Lname, string ID,
                      string department, string salary, string TheNameOfManager) : clsEmployee(Fname, Lname, ID, department, salary)
    {
        _MName = TheNameOfManager;
    }

    string GetManagerName()
    { // make the _MName read only
        return _MName;
    }
};

class clsTestPrivateVisiblity : clsEmployee
{
};

int main()
{
    /* From Super CLass (clsPersonInfo)
    string _FirstName;
    string _LastName;
    string _ID;
    */

    // clsEmployee inherited clsPersonInfo AS PUBLIC VISIBILITY
    clsEmployee emp1("oda", "jack", "1932", "SW", "18345$");
    emp1.SetFirstName("Amany"); // --> From Super CLass (clsPersonInfo)
    emp1.SetLastName("Khair");  // --> From Super CLass (clsPersonInfo)
    emp1.SetID("198");          // --> From Super CLass (clsPersonInfo)

    emp1.SetDepartment("SOFTWARE ENGINNERING"); // --> public method in clsEmployee
    emp1.SetSalary("19321923$");                // --> public method in clsEmployee

    // clsManageEmployes inherited clsEmployee AS PRIVATE VISIBILITY
    clsManageEmployes m1("Joly", "Kada", "#10", "SW", "1291$", "jolt");
    // m1.GetDepartment() --> inaccessible (clsEmployee)
    // m1.SetFirstName(""); --> inaccessible (clsPersonInfo)
    m1.GetManagerName(); // public method in clsManageEmployes
}
