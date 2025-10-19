#include <iostream>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;

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
    // parameterozed constructor
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

    // if user wasn't initlized the object then i will force him to input data manually
    clsPerson()
    {
        _Id = enter_postive_number("\aEnter Id: ");
        SetFirstName(read_string("please enter your first name: "));
        SetLastName(read_string("please enter your last name: "));
        SetEmail(read_string("please enter your email: "));
        SetPhone(read_string("please enter your phone: "));
        _HowManyOfPeople++;
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

int main()
{
    cout<<"\n"<<clsPerson::GetNumOfPeople()<<endl;
    
    clsPerson p1(25, "osama", "mohamoud", "wwwhdosama@lol.com", "+20201214");
    p1.PrintAllInfo();
    p1.SendEmail("hi", "hello i test this class!");
    p1.SendSms("hi");

    clsPerson p2(26, "Eyan", "Osama", "eyan.ag@my.lol", "+21903423");
    p2.PrintAllInfo();
    p2.SendEmail("hi", "hello i test this class2!");
    p2.SendSms("hi again!");
}