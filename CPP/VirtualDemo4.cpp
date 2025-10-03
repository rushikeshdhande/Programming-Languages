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
    virtual void sun()
    {
        cout << "Inside Base Sun \n";
    }
    virtual void bun()
    {
        cout << "Inside Base Bun \n";
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
    cout << sizeof(Base) << "\n";    // 16
    cout << sizeof(Derived) << "\n"; // 20

    
    Base *bp = new Derived();        // UpCasting

    /*bp->fun(); // Base fun
    bp->gun(); // Base gun
    bp->sun(); // Base sun
    // bp->run();   // Error
    // bp->mun();    //Error
    bp->bun(); // Base bun*/

    return 0;
}