#include<iostream>
using namespace std;

class Demo
{
    public:
        int iNo1;
        int iNo2;

        Demo(int a = 0, int b = 0)
        {
            this->iNo1 = a;
            this->iNo2 = b;
        }
};

int main()
{
    Demo dobj1();       // iNo1 = 0, iNo2 = 0
    Demo dobj2(11);     // iNo1 = 11, iNo2 = 0
    Demo dobj3(11,21);  // iNo1 = 11, iNo2 = 21
    

    return 0;
}
