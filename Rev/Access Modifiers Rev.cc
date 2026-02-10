#include <iostream>
using namespace std;

class clsCar
{
private: // aceessible int the class only
    string Model;
    int Year;

public:                            // accessible any where
    clsCar(string Model, int Year) // constructor
    {
        this->Model = Model;
        this->Year = Year;
    };

    // set
    void SetYear(const int Year)
    {
        this->Year = Year;
    }

    void SetModel(const string Model)
    {
        this->Model = Model;
    };

    // Get
    int GetYear() const
    {
        return this->Year;
    };

    string GetModel() const // doesn't modify obj properties
    {
        return this->Model;
    };

protected: // accessible with the class that inherits this class only

    virtual void ShowCarInfo()
    {
        cout << "The Model Is: " << this->Model << endl;
        cout << "The Year Is: " << this->Year << "\n";
    };
};

class Toyta : public clsCar
{

private:
    string Color;

public:
    Toyta(string Model, int Year, string Color) : clsCar(Model, Year)
    {
        // the sub class calls the constructor of super class --> to intilize the data members of super class

        // the constructor of super class is parametrized constructor (in this case) , you should pass the required parameters to the parametrized constructor in super class

        // you cann't make obj of sub class without calling the constructor of super class

        this->Color = Color;
    };

    // Set
    void SetColor(const string Color)
    {
        this->Color = Color;
    };

    // Get
    string GetColor() const
    {
        return this->Color;
    };

    // @override
    void ShowCarInfo() override
    {
        clsCar::ShowCarInfo(); // call the overriden method
        cout << "The Color Is: " << this->Color << endl;
    };
};

int main()
{
    // 2 Ways to intilize the object
    Toyta T1("", 1, "");
    Toyta T2 = Toyta("IO348JFJU", 2020, "Red");

    T2.ShowCarInfo();
}