#include <iostream>
#include <fstream>
#include "E:\projects\my library\AllStuff.h"
using namespace AllStuff;
using namespace std;

// inclusion class
class clsPerson
{
private:
    class clsAdderss
    {
    private:
        int _StreetNum;
        string _StreerName;

    public:
        clsAdderss(int strnum, string strname)
        {
            _StreetNum = strnum;
            _StreerName = strname;
        }
        void SetStreetNum(int num)
        {
            _StreetNum = num;
        }
        void SetStreerName(string name)
        {
            _StreerName = name;
        }
        string StreetName(){

        }
    };
};