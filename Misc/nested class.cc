#include <iostream>
#include <fstream>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;

// inclusion class
class clsPerson
{
private:
    string _FirsName;
    string _LastName;
    short _Age;
    class clsAdderss
    {
    private:
        int _StreetNum;
        string _StreetName;

    public:
        clsAdderss()
        {
        }
        clsAdderss(int strnum, string strname)
        {
            _StreetNum = strnum;
            _StreetName = strname;
        }
        void SetStreetNum(int num)
        {
            _StreetNum = num;
        }
        void SetStreerName(string name)
        {
            _StreetName = name;
        }
        string StreetName()
        {
            return _StreetName;
        }
        int StreetNum()
        {
            return _StreetNum;
        }

        void PrintStreetData()
        {
            cout << "the street is: " << _StreetNum + "-" + _StreetName << endl;
        }
    };

public:
    clsAdderss Address1;
    clsPerson(string fname, string lname, short age, int StreetNum, string StreetName)
    {
        clsAdderss address(StreetNum, StreetName);
        _FirsName = fname;
        _LastName = lname;
        _Age = age;
    }

    void SetFname(string fname)
    {
        _FirsName = fname;
    }

    void SetLname(string lname)
    {
        _LastName = lname;
    }

    void SetAge(short age)
    {
        _Age = age;
    }

    string GetFullName()
    {
        return _FirsName + " " + _LastName;
    }
    short GetAge()
    {
        return _Age;
    }

    void PrintPersonData()
    {
        cout << "the full name is: " << GetFullName() << endl;
        cout << "the age is: " << GetAge() << endl;
    }
};

int main()
{
    clsPerson p1("ahmed", "mohamoud", 34, 19, "New-Life");
    p1.PrintPersonData();
    cout<<"____________________\n";
    p1.Address1.PrintStreetData();

}