#include <iostream>
#include <vector>

using namespace std;

class ClsPrint
{
public:
    // Overloading
    void Print(string t)
    {
        cout << t << endl;
    }

    void Print(short t)
    {
        cout << t << endl;
    }

    void Print(int t)
    {
        cout << t << endl;
    }
    void Print(double t)
    {
        cout << t << endl;
    }
};

template <typename T >
class clsPrint
{

    public :
    void Print (T Text){cout<<Text<<endl;} // Wrote One Method Only 
};
int main()
{
    ClsPrint p ;
    p.Print(1);

    vector<int> p; // vector is a template class 
    clsPrint <short>p2;
    p2.Print(10);
}