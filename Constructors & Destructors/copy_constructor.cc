#include <iostream>
using namespace std;

class clsTest
{
private:
    string _name;
    short _age;

public:
    clsTest(string name, int age)
    {
        cout << "\nCARD DATA\n";
        _age = age;
        _name = name;
    }

public:
    void SetName(string name)
    {
        _name = name;
    }

    void SetAge(short age)
    {
        _age = age;
    }

private:
    string GetName()
    {
        return _name;
    }

    short GetAge()
    {
        return _age;
    }

public:
    void Print()
    {
        cout << "the name is: " << GetName() << endl;
        cout << "the age is: " << GetAge() << endl;
    }
};

int main()
{
    clsTest t1("osa", 19);
    t1.SetName("osama");
    t1.Print();
}