#include<iostream>
using namespace std;

float Area(float Rad, float PI)
{
    float fAns = 0.0f;
    fAns = PI * Rad * Rad;
    return fAns;
}

int main()
{
    float fRet = 0.0f;

    fRet = Area(10.5f,3.14f);

    cout<<"Area of circle is : "<<fRet<<"\n";

    fRet = Area(10.5f,9.10f);

    cout<<"Area of circle is : "<<fRet<<"\n";

    return 0;
}