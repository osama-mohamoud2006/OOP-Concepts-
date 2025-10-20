#include <iostream>
#include <string>
using namespace std;

// - FullName()

// - SendEmail(..)
// - SendSMS(...)
// - Print()

class clsEmployee
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    int _Salary;
    string _Department;

public:
    clsEmployee(int id, string fname, string lname, string title, string email, string phone, int salary, string department)
    {
        _ID = id;
        _FirstName = fname;
        _LastName = lname;
        _Title = title;
        _Email = email;
        _Phone = phone;
        _Salary = salary;
        _Department = department;
    }
    // property get
    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetTitle()
    {
        return _Title;
    }

    string GetEmail()
    {
        return _Email;
    }

    string GetPhone()
    {
        return _Phone;
    }

    int GetSalary()
    {
        return _Salary;
    }

    int GetID()
    {
        return _ID;
    }

    string GetDepartment()
    {
        return _Department;
    }

    // property set

    void SetFirstName(string fname)
    {
        _FirstName = fname;
    }

    void SetLastName(string lname)
    {
        _LastName = lname;
    }

    void SetPhone(string phone)
    {
        _Phone = phone;
    }

    void SetEmail(string email)
    {
        _Email = email;
    }

    void SetTitle(string title)
    {
        _Title = title;
    }

    void SetEmail(string email)
    {
        _Email = email;
    }

    void SetPhone(string phone)
    {
        _Phone = phone;
    }

    void SetSalary(int salary)
    {
        _Salary = salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    void Print(){
        cout<<"First Name: "<<_FirstName<<endl;
        cout<<"Last Name: "<_<Last_Name
    }
};

int main()
{
}