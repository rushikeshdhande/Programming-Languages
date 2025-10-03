#include <iostream>

using namespace std;

class Base
{
public:
    int i, j;
    void fun()
    {
        cout << "Inside Base Fun\n";
    }
};

class Derived : public Base
{

public:
    int x;

    void gun ()
    {
        cout<<"Inside Derived Gun \n";
    }
};
int main()
{

    Base bobj;
    Derived dobj;

    cout << "Size of base class object :" << sizeof(bobj) << "\n";
    cout << "Size of base Derived class object :" << sizeof(dobj) << "\n";
    
    return 0;
}