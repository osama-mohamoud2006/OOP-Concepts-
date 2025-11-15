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
        _lastName = LastName;// compiler will implement 'this' anyway
    }
    // s 1

    // Nonn-Static function
    // 'this' pointer is passed as hidden arg to all non-static functions
    void GetAllData()
    {
        cout << "First name: " << this->FirstName << endl; // you can use this-> poiner
        cout << "Last name: " << _lastName << endl;     // or compiler will use it implicitly
        cout << "count: " << count << endl;
    }

    // s2
    //satic method isn't belonging to any object (on the same class level)
    // it is shared between all objects (on the same class level)
    // static method doesn't have this pointer , so it cann't access non-static data members

    static void GetPersonDetails()
    {
        count ++;
        cout<<count<<endl;
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
clsPerson person2("osama", "mohamoud");
clsPerson person3("osama", "mohamoud");
clsPerson person4("osama", "mohamoud");
clsPerson person5("osama", "mohamoud");
clsPerson person6("osama", "mohamoud");
    clsPerson::GetPersonDetails();
      clsPerson::GetPersonDetails();
        clsPerson::GetPersonDetails();
          clsPerson::GetPersonDetails();
            clsPerson::GetPersonDetails();
}