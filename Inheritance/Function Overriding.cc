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
    string department="" , int salary=0 , string title =""):
    clsPerson(id , FirstName ,LastName, Email , Phone ){

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
    void PrintAllInfo(){ // redfine the print function to use it propely in subclass

        cout<<"The Department is: "<<_Department<<endl;
        cout<<"The Title is: "<<_Title<<endl;
        cout<<"The Salary is: "<<_Salary<<endl;
    }
};

class clsDoctors : public clsEmployee
{ // class inherited clsEmployee
  // it will inherit the clsPerson(From clsEmployee (sub class of clsPerson)) and clsEmployee
};

int main()
{
   
    clsEmployee emp1(10,"osama","Mohamoud ", "wwwhj@ijd" , "1209","SW",13901,"Senior") ;

   emp1.PrintAllInfo();
   
}