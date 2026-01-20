#include <iostream>
using namespace std;

template <class T>
class clsDynamicArr
{
private:
    T _Index;
    T Length;
    T *Darr; // pointer

public:
    clsDynamicArr(T Length) // constructor
    {
        // index will start with 0
        this->Length = Length;
        this->_Index = 0;
        Darr = new T[Length]; // Dyanmic array
    };

    void Push(T Element)
    {
        Darr[_Index] = Element; // 0
        _Index++;               // -->1
    }

    void Print()
    {
        for (int i = 0; i < this->_Index; i++)
            cout << Darr[i] << endl;
    }
};

int main()
{
    clsDynamicArr<short> Arr1(10);
    Arr1.Push(10);
    Arr1.Push(20);
    Arr1.Push(30);
    Arr1.Push(40);

    Arr1.Print();
}