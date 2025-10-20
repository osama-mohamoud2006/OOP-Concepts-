#include <iostream>
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

  string GetFirstName(){
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

    int GetSalary(){
        return _Salary;
    }

    int GetID(){
        return _ID;
    }

    string GetDepartment(){
        return _Department;
    }

};

int main()
{
}