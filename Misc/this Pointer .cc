#include <iostream>
using namespace std;

class clsPerson
{
private:
    string FirstName;
    string _lastName;
    static int count;

public:
    clsPerson(string FirstName, string LastName)
    {
        this->FirstName = FirstName; // if you wrote the same name
        _lastName = LastName;        // compiler will implement 'this' anyway
    }
    // s 1

    // Nonn-Static function
    // 'this' pointer is passed as hidden arg to all non-static functions
    void GetAllData()
    {
        cout << "First name: " << this->FirstName << endl; // you can use this-> poiner
        cout << "Last name: " << _lastName << endl;        // or compiler will use it implicitly
        cout << "count: " << count << endl;
    }

    // s2
    // satic method isn't belonging to any object (on the same class level)
    // it is shared between all objects (on the same class level)
    // static method doesn't have this pointer , so it cann't access non-static data members

    static void GetPersonDetails()
    {
        // cuz it is static function
        // so i couldn't access non-static data members
        // so in the static method you should make new obj or use static members only
        clsPerson p2("Mohammed", "Ahmed");
        cout << p2.FirstName << endl; // non static
        cout << ++count << endl;      // static member ,'this' may only be used inside a nonstatic member function
    }

    static void GetPersonDetails(clsPerson PassThisOFObject)
    {
        PassThisOFObject.GetAllData(); // non static method 
    }
    void CallGetPersonDetails()
    {
        // GetPersonDetails() --> is static method , so it doesn't have 'this' pointer
        // so if you want to make static method access the non-static data members
        // you should send '*this' as a parameter

        GetPersonDetails(*this); // without it the static method will create new obj of 'PassThisOFObject' with new data , but with 'this' i will access the non static data members in the object 
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
    person1.CallGetPersonDetails();
}