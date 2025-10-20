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
    static int _HowManyOfPeople;

public:
    // parameterozed constructor (currently you cann't use this constructor with derived class we will learn how to use it later )
    clsPerson(int id, string FirstName, string LastName, string Email, string Phone)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
        _HowManyOfPeople++;
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

    //default constructor 
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

    static int GetNumOfPeople()
    {
        return _HowManyOfPeople;
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

    ~clsPerson()
    { // destructor
        cout << "The number of people is: " << GetNumOfPeople() << endl;
        cout << "\n\aGood bye, i will die (me for sure object not you dump)!" << endl;
    }
};

int clsPerson::_HowManyOfPeople = 0;

//Derived class , Sub class
class clsEmployee :public clsPerson{ // class clsEmployee will inherient clsPerson(i will take all things that the super class have)

    // we will know why i wrote public before super class 

    // Note : you cann't access private data members, but i still can use them (get,set)

private:
    string _Title;
    int _Salary;
    string _Department;
    
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
   emp1.SetFirstName("osama");
   emp1.GetFirstName();

}