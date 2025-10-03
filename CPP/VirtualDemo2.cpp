#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;
    void fun()
    {
        cout << "Inside Base Fun \n";
    }
    void gun()
    {
        cout << "Inside Base Gun \n";
    }
    void sun()
    {
        cout << "Inside Base Sun \n";
    }
};

class Derived : public Base
{
public:
    int x;

    void gun()
    {
        cout << "Inside Derived Gun \n";
    }
    void sun()
    {
        cout << "Inside Derived Sun \n";
    }
    void run()
    {
        cout << "Inside Derived Run \n";
    }
    void mun()
    {
        cout << "Inside Derived Mun \n";
    }
};

int main()
{
    // Casting
    
    Base *bp1 = new Base (); // NoCasting
    Derived *bp1 = new Derived (); // NoCasting
    Base *bp2 = new Derived(); //UpCasting
    Derived *dp2 = new Base(); // DownCasting Error





    return 0;
}