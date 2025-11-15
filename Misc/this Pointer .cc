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
   clsPerson(string FirstName , string LastName )
    {
        _FirstName= FirstName;
        _lastName=LastName;
    }

    // Nonn-Static function
    void GetAllData()
    {
        cout << "First name: "<<_FirstName << endl;
        cout << "Last name: "<<_lastName << endl;
        cout <<"count: "<<count << endl;
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
    
    void Test(){
      clsPerson p1("osama","mohamoud");
    }

};

int clsPerson::count = 0; // initlize the static member

int main()
{
     clsPerson person1("osama","mohamoud");
     person1.GetAllData();

}