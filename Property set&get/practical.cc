#include <iostream>
using namespace std;

class clsStudent
{
private: // starting from now make the vars private don't make them accessible in main
    int _ID = 0;
    string _Name = "";
    short _Age = 0;

public:
    // property set ( to set value)
    void SetId(int ID)
    {
        _Id = id; // changed the _Id
    }
    void SetAge(short Age)
    {
        _Age = Age; // changed the _Age }
    };
    void SetName(string name)
    {
        _Name = name; // changed the _Name
    }

    // propert get (get the values)
    int Id()
    {
        return _Id;
    }
    string Name()
    {
        return _Name;
    }
    short Age()
    {
        return _Age;
    }
};

in main()
{
}
