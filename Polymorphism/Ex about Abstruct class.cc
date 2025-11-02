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
class clsDoctor : clsProperites
{
private:
    string _DepartName;
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

    void SetSalart(double sum)
    {
        _Salary = sum;
    }
    void 
};