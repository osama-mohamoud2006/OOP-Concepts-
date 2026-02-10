#include <iostream>
using namespace std;

class PersonInterface
{
    virtual void Print() = 0;
};

class C
{
};
class Person : private PersonInterface, C
{
    struct stData
    {
        string Name;
        short Age;
    };

    stData Data;

public:
    Person(string Name, short Age)
    {
        this->Data.Name = Name;
        this->Data.Age = Age;
    };

    // Set
    void SetName(const string Name)
    {
        this->Data.Name = Name;
    };

    void SetAge(const short Age)
    {
        this->Data.Age = Age;
    };

    void Print() override
    {
        cout << Data.Name << endl;
        cout << Data.Age << endl;
    };
};

int main()
{
    Person P = Person("Lola", 10);
    P.Print();
}