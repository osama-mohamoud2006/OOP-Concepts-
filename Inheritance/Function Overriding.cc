#include <iostream>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;
// Super class,Base class
class clsPerson
{
private:
    int _Id = 0;
    string _FirstName = "";
    string _LastName = "";
    string _Email = "";
    string _Phone = "";

public:
    // parameterozed constructor (currently you cann't use this constructor with derived class we will learn how to use it later )
    clsPerson(int id, string FirstName, string LastName, string Email, string Phone)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

 clsPerson(int id, string FirstName, string LastName)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
  
    }


    // property set
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }
    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    // default constructor
    clsPerson()
    {
    }

    // property get
    string GetFirstName()
    {
        return _FirstName;
    }
    string GetLastName()
    {
        return _LastName;
    }
    string GetPhone()
    {
        return _Phone;
    }
    string GetEmail()
    {
        return _Email;
    }
    int GetId() // read only
    {
        return _Id;
    }

    string PrintFullName()
    {
        return _FirstName + " " + _LastName;
    }

public:
    void PrintAllInfo()
    {
        cout << "_______________________________\n";
        cout << "ID: " << GetId() << endl;
        cout << "First name: " << GetFirstName() << endl;
        cout << "Last Name: " << GetLastName() << endl;
        cout << "Full Name: " << PrintFullName() << endl;
        cout << "Email: " << GetEmail() << endl;
        cout << "Phone: " << GetPhone() << endl;
        // cout << "_______________________________\n";
    }

    void SendEmail(string subject, string body)
    {
        cout << "\nthe following message to email: " << GetEmail() << endl;
        cout << "subject: " << subject << endl;
        cout << "body: " << body << endl;
    }

    void SendSms(string TextSms)
    {
        cout << "\nthe following message to number: " << GetPhone() << endl;
        cout << "the subject is: " << TextSms << endl;
    }
};

// Derived class , Sub class
class clsEmployee : public clsPerson
{
public:
    clsEmployee(int id, string FirstName, string LastName, string Email, string Phone,
                string department = "", int salary = 0, string title = "") : clsPerson(id, FirstName, LastName, Email, Phone)
    {
        _Department = department;
        _Salary = salary;
        _Title = title;
    }

private:
    string _Title;
    int _Salary;
    string _Department;

public:
    // property get
    string GetTitle()
    {
        return _Title;
    }
    int GetSalary()
    {
        return _Salary;
    }
    string GetDepartment()
    {
        return _Department;
    }

    // property set
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

    // override the print function
    void PrintAllInfo() // redfine the print function to use it propely in subclass
    {
        // to access the OG print function in super class
        // Syntax : Super-class::TheNameOfMethod();
        clsPerson::PrintAllInfo();
        cout << "The Department is: " << _Department << endl;
        cout << "The Title is: " << _Title << endl;
        cout << "The Salary is: " << _Salary << endl;
    }
};

class clsDoctors : public clsPerson
{
    // class inherited clsPerson
public:
    clsDoctors(int id, string FirstName, string LastName) : clsPerson(id, FirstName, LastName )
    {
    }

    /// @brief overriding//
    void PrintAllInfo()
    { // redfine the function
        cout << "\nId: " << GetId() << endl;
        cout << "Doctor Full Name: " << PrintFullName() << endl;
        cout << "Phone: " << GetPhone() << endl;
    }
};

int main()
{

    clsEmployee emp1(10, "osama", "Mohamoud ", "wwwhj@ijd", "1209", "SW", 13901, "Senior");

    emp1.PrintAllInfo(); // call the print method (i redfineded it in sub class )
    // to access the OG print function in super class
    // obj(subclass).TheSuperClass :: Method Name();
    cout << "\n\n\n\n\n";
    emp1.clsPerson::PrintAllInfo(); // access the OG print function(defined OG in the base function)

    clsPerson p1(10, "ama", "ala", "2932AA@3.com", "23023232"); // the print OG function(working perfectly)
    p1.PrintAllInfo();

    clsDoctors d1(100,"osama","ahmed");
    d1.PrintAllInfo();
}