#include <stdio.h>
int main()
{
    char cValue = 'S';
    int iValue = 10;
    float fValue = 3.14f;
    double dValue = 6.28634478;
    
    printf(" Size of character is : %lu\n", sizeof(cValue));
    printf(" Size of integer is : %lu\n", sizeof(iValue));
    printf(" Size of float is : %lu\n", sizeof(fValue));
    printf(" Size of double is : %lu\n", sizeof(dValue));

    return 0;
}