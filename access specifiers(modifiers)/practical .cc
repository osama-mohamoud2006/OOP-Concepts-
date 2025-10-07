#include <iostream>
using namespace std;

class clsStudentData
{
private: // all members will be accessible only in this class
    short age = 19;

protected: // all members will be accessible in this class and the class which inherite this class but it cann't be accessible in int main()
    void ShowAgeAfter10Years()
    {
        cout << "the student age is: " << age + 10 << endl;
    }

public: // all members here will be accessible everywhere
    string StudentName;
    void WelcomeTheStudent() { cout << "\n Welcome student " << StudentName << endl; }
    void ShowDefaultAge() { cout << "the student age is: " << age << endl; }
};



int main()
{
    clsStudentData Student1;
    Student1.StudentName ="sama"; // access data member 
    Student1.WelcomeTheStudent(); // access method
    Student1.ShowDefaultAge(); // access method
}