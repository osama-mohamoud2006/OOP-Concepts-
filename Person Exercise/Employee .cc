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

    void SetSalary(int salary)
    {
        _Salary = salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    void Print()
    {
        cout << "\n------- Employee Info -------" << endl;
        cout << "First Name: " << _FirstName << endl;
        cout << "Last Name: " << _LastName << endl;
        cout << "Full Name: " << GetFullName() << endl;
        cout << "Phone: " << _Phone << endl;
        cout << "Title: " << _Title << endl;
        cout << "Email: " << _Email << endl;
        cout << "Salary: " << _Salary << endl;
        cout << "Department: " << _Department << endl;
        cout << "ID: " << _ID << endl;
        cout << "-----------------------------" << endl;
    }

    void SendEmail(string subject, string body)
    {
        cout << "\nThis Email was sent from: " << _Email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    void SendSMS(string message)
    {
        cout << "\nThis message was sent from: " << _Phone << endl;
        cout << "Message: " << message << endl;
    }
};

int main()
{
    clsEmployee e1(10, "osama", "mja", "Software Enginner", "232jkd@b.com", "+10931313", 103091, "Software");

    e1.Print();
    e1.SendEmail("\nwelcome","Hello: "+e1.GetFullName());
    e1.SendSMS("\nYour code is: 2452452");

}