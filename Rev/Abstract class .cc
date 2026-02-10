#include <iostream>
using namespace std;

// Abstract Class , Interface , Contract
class clsAddressInterface
{
    // pure virtual functions , you cann't make object of this class
    virtual string GetPersonName() = 0;
    virtual short GetPersonAge() = 0;
    virtual string GetPersonEmail() = 0;
};

class clsPerson : private clsAddressInterface
{
private:
    string Name;
    short Age;
    string Email;

public:
    clsPerson(string Name, short Age, string Email)
    {
        this->Name = Name;
        this->Age = Age;
        this->Email = Email;
    }

    string GetPersonName() override { return Name; }
    short GetPersonAge() override { return Age; }
    string GetPersonEmail() override { return Email; }
};

int main(string arr[])
{
    clsPerson P("jana", 20, "jjja@jk.com");
    cout << P.GetPersonName() << endl;
}