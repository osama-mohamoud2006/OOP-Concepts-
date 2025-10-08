#include <iostream>
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

    // i want to make id read-only(i can access it but i cann't modify if)
    int GetId()
    {
        return _id; // so i can access it but i cann't modify it
    }
};

int main()
{
    clsStudent s1;
    cout<<s1.GetId()<<endl;
}