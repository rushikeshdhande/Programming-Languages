#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display()
        {
            cout<<"Insiode Deisplay\n";
        }
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj);     // 1 byte

    return 0;
}