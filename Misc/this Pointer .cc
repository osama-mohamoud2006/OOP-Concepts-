#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName;
    string _lastName;
    static int count;

public:
    clsPerson(string FirstName, string LastName)
    {
        _FirstName = FirstName;
        _lastName = LastName;
    }
    // s 1

    // Nonn-Static function
    // 'this' pointer is passed as hidden arg to all non-static functions
    void GetAllData()
    {
        cout << "First name: " << this->_FirstName << endl; // you can use this-> poiner
        cout << "Last name: " << _lastName << endl;        // or compiler will use it implicitly
        cout << "count: " << count << endl;
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

    void Test()
    {
        clsPerson p1("osama", "mohamoud");
    }
};

int clsPerson::count = 0; // initlize the static member

int main()
{
    clsPerson person1("osama", "mohamoud");
    person1.GetAllData();
}