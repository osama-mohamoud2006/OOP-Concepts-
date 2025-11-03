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
    class clsAddress
    {
    private:
        int _StreetNum;
        string _StreetName;

    public:
        // parameterized constructor
        clsAddress(int strnum, string strname)
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
            cout << "the street is: " << to_string(_StreetNum) + "-" + _StreetName << endl;
        }
    };

public:
    clsAddress address = clsAddress(0, ""); // Initial the values of constructor (from inner class)
    // class name obj = class name(your constructor parameters)

    clsPerson(string fname, string lname, short age, int StreetNum, string StreetName)
    {
        address=clsAddress(StreetNum, StreetName); // assign values to parameters of clsAdderss class
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
   
}