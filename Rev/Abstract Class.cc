#include <iostream>
#include <string>
using namespace std;

// Abstract/Interface/Contract Class
class MobileContract
{
    // Pure Virtual Functions --> you must override them in the sub class otherwise you won't make obj of derived class and the derived class will be also abstract class
    virtual double MobilePrice() = 0;
    virtual string Model() = 0;
};

class Iphone : private MobileContract
{
    string _Model;
    double Price;

public:
    Iphone(string _Model, double Price)
    {
        this->_Model = _Model;
        this->Price = Price;
    };

    double MobilePrice() override
    {
        return this->Price;
    };

    string Model() override
    {
        return this->_Model;
    };

    void PrintInfo() const
    {
        cout << "The Model Is: " << this->_Model << endl;
        cout << "The Price Is: " << this->Price << "\n";
    };
};

int main()
{
    Iphone IPhone16 = Iphone("SanFr2022", 190);
    IPhone16.PrintInfo();
};