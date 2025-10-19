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

public:
    // parameterozed constructor
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

    // if user wasn't initlized the object then i will force him to input data manually
    clsPerson()
    {
        _Id = enter_postive_number("\aEnter Id: ");
        SetFirstName(read_string("please enter your first name: "));
        SetLastName(read_string("please enter your last name: "));
        SetEmail(read_string("please enter your email: "));
        SetPhone(read_string("please enter your phone: "));
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
    int GetId()
    {
        return _Id;
    }

private:
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
        cout << "the following message to email: " << GetEmail() << endl;
        cout << "subject: " << subject << endl;
        cout << "body: " << body << endl;
    }

    void SendSms(string subject)
    {
        cout << "the following message to number: " << GetPhone() << endl;
        cout<<"the subject is: "<<subject<<endl;
    }

    ~clsPerson(){ // destructor
        cout<<"\n\aGood bye, i will die (me for sure object not you dump)!"<<endl;
    }
};

int main(){
    clsPerson p1(25,"osama","mohamoud","wwwhdosama@lol.com","+20201214");
    p1.PrintAllInfo();
    p1.SendEmail("hi","hello i test this class!");
    p1.SendSms("hi","i test send messages via sms!");

}