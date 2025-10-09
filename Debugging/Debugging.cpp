#include <iostream>
using namespace std;

class Bedan { // بضان

private : 
	string _Name = "";
	short _Age = 0;

	// property get& set
public:

	void SetName(string name) { _Name = name; }	// property set
	string GetName() { return _Name; }// property get

	void SetAge(short age) { _Age = age; }
	short GetAge() { return _Age; }

	//get --> call get function when reading value
	// put --> call set function when you modify the value
	__declspec(property(get = GetName, put = SetName)) string Name;
	__declspec(property(get = GetAge, put = SetAge)) short Age;

};

int main() {

	Bedan Student1;
	Student1.Name = "osama";
	cout << "Name: " << Student1.Name << endl;
}