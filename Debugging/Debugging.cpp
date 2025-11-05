#include <iostream>
#include "clsPrint.h";
using namespace std;

class Student { 

private : 
	string _Name = "";
	short _Age = 0;

	// property get& set
//private: // note: you cann't set these functions as private function 
public:
	void SetName(string name) { _Name = name; }	// property set
	string GetName() { return _Name; }// property get

	void SetAge(short age) { _Age = age; }
	short GetAge() { return _Age; }

public:
	//get --> call get function when reading value
	// put --> call set function when you modify the value
	__declspec(property(get = GetName, put = SetName)) string Name;
	__declspec(property(get = GetAge, put = SetAge)) short Age;

};

int main() {

	Student Student1;
	Student1.Name = "nagy";
	cout << Student1.Name << endl;
	
	Student1.Age = 19;
	cout << "Age: " << Student1.Age << endl;


	clsPrint p1;
	p1.Print();
}