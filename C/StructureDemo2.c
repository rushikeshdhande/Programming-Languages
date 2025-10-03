#include <stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main ()
{

    struct Demo obj;
    obj.i=11;
    obj.f=90.4f;
obj.j=21;

printf("%lu\n",obj.i);
printf("%lu\n",obj.f);
printf("%lu\n",obj.j);
    

    return 0;
}