#include<iostream>
using namespace std;

class Demo
{
    public:
        // Overloading by changing number of parameters
        // fun@2ii
        void fun(int i, int j)          // fun(11,21)
        {}
        // fun@3iii
        void fun(int i, int j, int k)   // fun(11,21,51)
        {}

        // Overloading by changing sequance of parameters
        // gun@2id
        void gun(int i, double d)       // gun(10, 10.5)
        {}
        // gun@2di
        void gun(double d, int i)       // gun(10.5, 10)
        {}
        
        // Overloading by changing datatype of parameters
        // sun@2cc
        void sun(char ch1, char ch2)    // sun('a','b')
        {}
        //sun@2ff
        void sun(float f1, float f2)    // sun(10.5f, 20.5f)
        {}
 
        /*
        // We cant Overload by changing return type
        // run@2ii
        int run(int i, int j)
        {}
        // run@2ii
        float run(int i, int j)
        {}
        */
};

int main()
{
    return 0;
}