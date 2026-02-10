#include <iostream>
#include <vector>
using namespace std;

class Ahmed
{
private:
    short _Age;
    string _BloodType;
    vector<string> _FamilyMembers;

private:
    vector<string> FamilyMembers()
    {
        _FamilyMembers.push_back("ali");
        _FamilyMembers.push_back("loay");
        _FamilyMembers.push_back("mai");
        return _FamilyMembers;
    };

public:
    Ahmed(short _Age, string _BloodType)
    {
        this->_Age = _Age;
        this->_BloodType = _BloodType;
    };

    short GetAge()
    {
        return this->_Age;
    }

protected:
    string GetBloodType()
    {
        return this->_BloodType;
    };

    friend class Omar; // Omar can access all members of this class (even if it is protected,private)

    friend void PrintInfo(Ahmed); // friend function
};



class Omar
{
private:
    string _name = "omar";

public:
    // without friend declaration in the Ahmed class you can access only the public members
    Omar()
    {
        Ahmed MyFriend = Ahmed(20, "AB");
        vector<string> Fm = MyFriend.FamilyMembers(); // MyFriend.FamilyMembers() is private member
        for (const string &F : Fm)
        {
            cout << F << endl;
        };

        cout << MyFriend.GetAge() << endl;       // public
        cout << MyFriend.GetBloodType() << endl; // protected
    }
    friend void PrintInfo(Ahmed Info);
};


void PrintInfo(Ahmed Info) // friend with Ahmed , so it can access protected,public,private data members normally
{
    cout << Info.GetAge() << endl;       // public
    cout << Info.GetBloodType() << endl; // protected
    cout << "\nMy Family\n";
    vector<string> Fm = Info.FamilyMembers(); // MyFriend.FamilyMembers() is private member
    for (const string &F : Fm)
    {
        cout << F << endl;
    };

    Omar MyFriend2 ;
    // note : _name is private data member 
    cout<<"My Friend Is: "<<MyFriend2._name <<endl; // this function is also friend for another classs 
};


int main()
{
    // Omar OmarYaRagala;
    Ahmed MyFriend = Ahmed(20, "AB");
    PrintInfo(MyFriend);
};