#include <iostream>
using namespace std;

class clsPerson
{
private:
    int _Id;
    string _FirstName;
    string _LastName;
    string _Email = "";
    string _Phone = "";

public:
    clsPerson(int id, string FirstName, string LastName, string Email, string Phone)
    {
        _Id = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // property set
    void SetFirstName(string Fname)
    {
        _FirstName = Fname;
    }

    void SetLastName(string Lname)
    {
        _LastName = Lname;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }
    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    // property get
    int GetId()
    { // read-only
        return _Id;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
    string GetPhone()
    {
        return _Phone;
    }

    string GetEmail()
    {
        return _Email;
    }

    void PrintAllInfo()
    {
        cout << "_______________________________\n";
        cout << _Id << endl;
        cout << _FirstName << endl;
        cout << _LastName << endl;
        cout << FullName() << endl;
        cout << _Email << endl;
        cout << _Phone << endl;
        cout << "_______________________________\n";
    }

    void SendEmail(string object, string body)
    {
        cout<<"\nThe following Email from: "<<_Email<<endl;
        cout<<"The object is: "<<object<<endl;
        cout<<"The body is: "<<body<<endl;
    }

    void SendSms(string message){
        cout<<"\nThis message is from: "<<_Phone<<endl;
        cout<<"The content is: "<<message<<endl;
    }
};

int main(){
    clsPerson p1(10,"osama","Mohamoud","wwma@test.com","+1202301231");
    p1.PrintAllInfo();
    p1.SendEmail("Hello mf!","hello again i will get you!");
    p1.SendSms("Hello from SMS!");
}