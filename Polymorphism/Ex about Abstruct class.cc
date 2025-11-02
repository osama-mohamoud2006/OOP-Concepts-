#include <iostream>
using namespace std;
// Abstruct class , Contract
class clsProperites
{
    // set
    virtual void SetId(string id) = 0;
    virtual void SetUsername(string user) = 0;
    // get
    virtual string GetId() = 0;
    virtual string GetUsername() = 0;
};

// suppose it is college system
class clsDoctor : public clsProperites
{
private:
    string _DepartmentName;
    double _Salary;
    string _id;
    string _user;

public:
    void SetId(string id) override
    {
        _id = id;
    }

    void SetUsername(string user) override
    {
        _user = user;
    }

    string GetId()
    {
        return _id;
    }
    string GetUsername()
    {
        return _user;
    }

    void SetSalary(double sum)
    {
        _Salary = sum;
    }
    void SetDepartName(string DepartmentName)
    {
        _DepartmentName = DepartmentName;
    }

    void Print()
    {
        cout << "the department is: " << _DepartmentName << endl;
        cout << "the id is: " << _id << endl;
        cout << "the username is: " << _user << endl;
        cout << "the salary is: " << _Salary << endl;
    }
};

class clsTest : public clsDoctor
{ 
    // although it inherited from clsDoctor which inherited Abstruct class
     // I could make object normally 
};

int main()
{
    clsDoctor d1;
    d1.SetUsername("1jio");
    d1.SetId("23498");
    d1.SetSalary(28424);
    d1.SetDepartName("AI");
    d1.Print();

    clsTest t1;
    t1.clsDoctor::Print();
}