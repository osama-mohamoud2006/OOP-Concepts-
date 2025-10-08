#include <iostream>
#include <vector>
using namespace std;

class clsStudent
{
private: // starting from now make the vars private don't make them accessible in main
    int _ID = 0;
    string _Name = "";
    short _Age = 0;

public:

    vector<string> GetNameChangeHistory(string Name)
    {
        vector<string> StoreName;
        if(name!=" ")StoreName.push_back(name);
    }

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
        GetNameChangeHistory(_name); // to store old values before changing it 
        _Name = name; // changed the _Name
    }

    // propert get (get the values)
    int GetId()
    {
        return _ID;
    }
    string GetName()
    {
        return _Name;
    }
    short GetAge()
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
    Stu1.SetId(24533);
    Stu1.SetAge(19);

    // get values using get property
    cout << "Name: " << Stu1.GetName() << endl;
    cout << "ID: " << Stu1.GetId() << endl;
    cout << "Age: " << Stu1.GetAge() << endl;
}
