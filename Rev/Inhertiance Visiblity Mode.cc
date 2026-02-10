#include <iostream>
using namespace std;

class clsPerson
{
private:
    string Name;
    short Age;

public:
    clsPerson()
    {
    }
    clsPerson(string Name, short Age)
    {
        this->Name = Name;
        this->Age = Age;
    };

    void Print()
    {
    }
};

class clsEmpolyee : public clsPerson
{

public:
    void x()
    {
    }
};

class clsManager : private clsEmpolyee
{
public:
    void F() {}

protected:
    void K() {}
};

class clsT : protected clsManager
{
protected:
    void c()
    {
        // clsManager::Print();  inaccessible
        clsManager::F();
        clsManager::K();
    }
};

class M : clsT
{
    void x()
    {
        clsT::c();
        clsT::K() ; 
    }
};

int main()
{
    clsEmpolyee em1;
    em1.Print(); // as the inhertiance visiblity mode is public i could access the methods in super class

    clsManager M1;
    // M1.x(); // inaccessible As the inheritance visiblity mode is private , so you cann't access the super class ' clsEmpolyee' of sub class 'clsManager'

    // M1.Print();  naccessible As the inheritance visiblity mode is private , so you cann't access the super class ' clsEmpolyee' of sub class 'clsManager'

    clsT c;
    // c.F(); inaccessible --> as inheritance vis is protected only derived classes of this class can access it
};