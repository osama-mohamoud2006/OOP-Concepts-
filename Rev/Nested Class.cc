#include <iostream>
using namespace std;

// Abstract/Interface/Contract class
class clsAddressInterface
{
    public:
    // pure virtual functions
    virtual void PrintStreetInfo() = 0;
};

class clsPersonInterface
{
    public:
    virtual void PrintFullInfo() = 0;
};

class clsPerson : private clsPersonInterface
{
private:
    string _Name;
    short _Age;

protected:
    int pro;

public:
    // nested class follows the access specifier rules as any data member

    // you cann't access the private data members of inner class in the outer class

    // nested class --> is a member of outer class so it can access all member of outer class
    class clsAddress : private clsAddressInterface
    {
    private:
        string _StreetName;
        string _StreetNum;
        string _City;

    public:
        static void StaticMethod()
        {
        }

        clsAddress(string StreetName, string StreetNum, string City)
        {
           // clsPerson P("", 0, "", "", "");
           // P.pro = 1; // i can access the protected data member of the outer class in the inner class

           // P._Name = ""; // i can access the private data member of the outer class in the inner class

            cout << "Iam Constructor Of Nested Class\n\n";
            this->_StreetName = StreetName;
            this->_StreetNum = StreetNum;
            this->_City = City;
        };

        // Set
        void SetStreetName(string StreetName)
        {
            this->_StreetName = StreetName;
        };

        void SetStreetNum(string StreetNum)
        {
            this->_StreetNum = StreetNum;
        };

        void SetCity(string City)
        {
            this->_City = City;
        };

        // Get
        string GetStreetName()
        {
            return this->_StreetName;
        };

        string GetStreetNum()
        {
            return this->_StreetNum;
        };

        string GetCity()
        {
            return this->_City;
        };

        void PrintStreetInfo() override
        {
            cout << "Street Name: " << this->_StreetName << endl;
            cout << "Street Num: " << this->_StreetNum << endl;
            cout << "City: " << this->_City << endl;
        }
    };

    clsAddress Address ; // object of clsAddress --> to access the inner class in the main

    clsPerson(string name, short age, string StreetName, string StreetNum, string City):
     Address(StreetName, StreetNum, City)
    {
        // Address._City = "";  //member "clsPerson::clsAddress::_City" (declared at line 29) is inaccessibleC/C++(265 --> outer class cann't access private data members of inner class
        this->_Name = name;
        this->_Age = age;
    };

    void PrintFullInfo() override
    {
        cout << "Name: " << this->_Name << endl;
        cout << "Age: " << this->_Age << endl;
        Address.PrintStreetInfo();
    };



};

int main()
{
    clsPerson P1 = clsPerson("oap", 12, "King Esmaiel", "24st", "Cairo");

    clsPerson::clsAddress::StaticMethod(); // you can call static method from clsAddress normally

    cout << P1.Address.GetCity() << endl;
    cout<<"\nThe Address\n";
    P1.Address.PrintStreetInfo();

    cout<<"\nFull Info\n";
    P1.PrintFullInfo();

}