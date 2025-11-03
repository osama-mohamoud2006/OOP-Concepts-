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
    };

public:
    clsPerson(string fname, string lname, short age ,int StreetNum,string StreetName )
    {
        clsAdderss address(StreetNum,StreetName);
        _FirsName=fname;
        _LastName=lname;
        _Age= age;
    }

    void 
};