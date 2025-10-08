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
    void SetId(int Id)
    {
        _ID = Id; // changed the _Id
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

int main()
{
    clsStudent Stu1;
   // Stu1._Age;  --> iit is private var i cann't access it
   /// i should use set property to assign value

   // assigned values using method(set property)
   Stu1.SetName("osama");
   Stu1.SetId("24534");
   Stu1.Age("19");

   cout<<Stu1

}
