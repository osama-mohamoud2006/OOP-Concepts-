#include <iostream>
using namespace std;

class clsStudent {

private : 
	string _Name = "";
	short _Age = 0;

	// property get& set
public:

	void SetName(string name) { _Name = name; }	// property set
	string GetName() { return _Name; }// property get




};