#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName;
    string _lastName;
    static int count;
    // s 1
public:
   clsPerson()
    {
    }

    void GetAllData()
    {
        cout << _FirstName << endl;
        cout << _lastName << endl;
        cout << count << endl;
    }

 

    // s2
    static void GetPersonDetails()
    {
    }

    // s3
    friend class clsTestFriend;
};

class clsTestFriend
{
    clsPerson p1;
    void Test(){
       
    }

};

int clsPerson::count = 0; // initlize the static member

int main()
{
}