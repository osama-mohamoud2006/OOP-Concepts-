#include <iostream>
#include <fstream>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;
// Abstract class ,Contract
class clsPropForPerson
{
    // pure virtual function
    virtual void SetFirstName(string Fname) = 0;
    virtual void SetLastName(string Lname) = 0;
    virtual void SetAge(short age) = 0;
};

class clsPersonData : clsPropForPerson
{
private:
    struct _stPersonData
    {
        string firstname = "";
        string lastname = "";
        short age = 0;
    };
    _stPersonData d;

private:
    // set
    // All these methods are pure virtual function in abstract class and should be implemented otherwise you wonot can make obj of this class

    void SetFirstName(string fname) override
    {
        d.firstname = fname;
    }
    void SetLastName(string lname) override
    {
        d.lastname = lname;
    }

    void SetAge(short age) override
    {
        d.age = age;
    }

public:
    // Get
    string GetFullName()
    {
        return d.firstname + " " + d.lastname;
    }
    string GetFirstName()
    {
        return d.firstname;
    }
    string GetLastName()
    {
        return d.lastname;
    }
    short GetAge()
    {
        return d.age;
    }
    friend class FeaturesToDoOnPerson;
};

class FeaturesToDoOnPerson
{
private:
    clsPersonData pd;
    void WriteDataToFile()
    {
        fstream WrtiteToFile;
        WrtiteToFile.open("person_data.text", ios::out);
        if (WrtiteToFile.is_open())
        {
            WrtiteToFile << "the first name is: " << pd.GetFirstName() << endl;

            WrtiteToFile << "the last name is: " << pd.GetLastName() << endl;

            WrtiteToFile << "the full name is: " << pd.GetFullName() << endl;

            WrtiteToFile << "the age is: " << pd.GetAge() << endl;
        }
    }
    void FillPeresonData()
    {

        pd.SetFirstName(read_string("Enter first name: "));
        pd.SetLastName(read_string("Enter last name: "));
        pd.SetAge(enter_postive_number("Enter age: "));
    }

public:
    // no args constructor
    FeaturesToDoOnPerson()
    {
        FillPeresonData(); // fill the data
        WriteDataToFile(); // write to file if you make obj
    }

    void Print()
    {
        cout << "the first name is: " << pd.GetFirstName() << endl;
        cout << "the last name is: " << pd.GetLastName() << endl;
        cout << "the full name is: " << pd.GetFullName() << endl;
        cout << "the age is: " << pd.GetAge() << endl;
    }
};

int main()
{
    FeaturesToDoOnPerson f1;
    f1.Print();
}