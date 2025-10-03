#include <iostream>

using namespace std;

class Base
{
public: // 12
    int i;

private:
    int j;

protected:
    int k;

public:
    Base()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    void fun()
    {
        cout << i << "\n"; // Allowed
        cout << j << "\n"; // Allowed
        cout << k << "\n"; // Allowed in home
    }
};

class Derived : public Base
{
public:
    void Display()
    {
        cout << i << "\n"; // Allowed base public
        cout << j << "\n"; // Error base private
        cout << k << "\n"; // Allowed protected
    }
};
int main()
{

    Base bobj;
    Derived dobj;

    cout << bobj.i << "\n"; // Allowed
    cout << bobj.j << "\n"; // Error private
    cout << bobj.k << "\n"; // Error

    cout << dobj.i << "\n"; // Allowed public
    cout << dobj.j << "\n"; // Error
    cout << dobj.k << "\n"; // Error

    dobj.fun(); // Call function //Allowed
    dobj.Display(); // Call function //Allowed

    return 0;
}