#include <iostream>
using namespace std;

// Rev on Static (in functions)

void STaTiC()
{
    static int x = 0;
    x++;
    cout << x << endl;
}

int main()
{
    STaTiC();
    STaTiC();
    STaTiC();
    STaTiC();
}