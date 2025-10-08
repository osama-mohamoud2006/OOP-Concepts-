#include <iostream>
#include <string>
using namespace std;

class clsStudent
{
private:
    string _name = "";
    const int _id = 2901; // will make it read-only

public:
    // property set
    void SetName(string name)
    {
        _name = name;
    }

    // property get
    string GetName()
    {
        return _name; 
    }
    __declspec(property(get = GetName, put = SetName)) string FirstName; // works only with MSCV (ms compiler)

    // i want to make id read-only(i can access it but i cann't modify it)
    int GetId()
    {
        return _id; // so i can access it but i cann't modify it
    }

    string ReturnStuData()
    {
        return _name + " " + to_string(_id);
    }
};

int main()
{
    clsStudent s2;
    s2.FirstName= "Eman";
    cout << s2.FirstName << endl;

    clsStudent s1;
    s1.SetName("mena");
    cout << s1.GetName() << endl;
    cout << s1.GetId() << endl;
    cout << "the full data of this student is: " << s1.ReturnStuData() << endl;
}