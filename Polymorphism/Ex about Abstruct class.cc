#include <iostream>
using namespace std;

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
    private :
    string _DepartName;
    double _Salary;
    string _id;

    public:
    void SetId() override{
        
    }

};