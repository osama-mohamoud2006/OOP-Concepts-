#include <iostream>
using namespace std;

class clsJunoirs
{
private:                                // all members here will be accessible only in this class
    int TallEqualtionForBoys(short age) // equation i don't any one to modify it
    {
        return 75 + (age * 5);
    }

    int TallEqualtionForGirls(short age) // equation i don't any one to modify it
    {
        return 74 + (age * 4.7);
    }

public:
    char Gender = ' ';
    short Age;
    void TheTall() // you cann't use if (idk) without method
    {
        if (Gender == 'm')
        {
            cout << "the expected tall for this boy is: " << TallEqualtionForBoys(Age) << endl;
        }
        if (Gender == 'f')
        {
            cout << "the expected tall for this girl is: " << TallEqualtionForGirls(Age) << endl;
        }
    }
};

int main()
{
    clsJunoirs Boy;
    Boy.Gender = 'm';
    Boy.Age = 8;
    Boy.TheTall();

    clsJunoirs Girl;
    Girl.Gender = 'f';
    Girl.Age = 8;
    Girl.TheTall();
}