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
        cout << GetId() << endl;
        cout << GetFirstName() << endl;
        cout << GetLastName() << endl;
        cout << PrintFullName() << endl;
        cout << GetEmail() << endl;
        cout << GetPhone() << endl;
        cout << "_______________________________\n";
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
{ // class clsEmployee will inherient clsPerson(i will take all things that the super class have)

    // we will know why i wrote public before super class

    // Note : you cann't access private data members, but i still can use them (get,set)

    // new features added + features from the super class/base class
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
};

class clsDoctors : public clsEmployee
{ // class inherited clsEmployee
  // it will inherit the clsPerson(From clsEmployee (sub class of clsPerson)) and clsEmployee
};

int main()
{
    /*
    private data members
    int _Id = 0;
    string _FirstName = "";
    string _LastName = "";
    string _Email = "";
    string _Phone = "";
    static int _HowManyOfPeople;
    */
    clsEmployee emp1;
    emp1.SetFirstName("osama");                 // method from Super CLass (clsPerson)
    emp1.SetLastName("jak");                    // method from Super CLass (clsPerson)
    emp1.SetDepartment("Software Engineering"); // method in clsEmployee
    emp1.SetPhone("2489429824");                // method in Super CLass (clsPerson)

    cout << "\nFull name is: " << emp1.PrintFullName() << endl;           // method from Super CLass (clsPerson)
    cout << "Employee's department is: " << emp1.GetDepartment() << endl; // method in clsEmployee
    cout << "The Phone is: " << emp1.GetPhone() << endl;                  // method in Super CLass (clsPerson)

    // Calling the print will not print anything from derived class, only base class
    emp1.PrintAllInfo();
    // therfore the print method will not serve me here, this problem will be solved in the next time

    clsDoctors d1;
    d1.SetFirstName("Dr:Mohmed");                                       // method from (clsPerson)
    d1.SetLastName("Ahmed");                                            // method from( clsPerson)
    d1.SetDepartment("Software Engineering");                           // method in clsEmployee
    d1.SetPhone("2893424");                                             // method in (clsPerson)
    cout << "\nFull name is: " << d1.PrintFullName() << endl;           // method from (clsPerson)
    cout << "Employee's department is: " << d1.GetDepartment() << endl; // method in clsEmployee
    cout << "The Phone is: " << d1.GetPhone() << endl;                  // method in (clsPerson)
}