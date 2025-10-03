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

    printf("Size of demo is : %lu\n", sizeof(struct Demo));

    printf("Size of object is : %lu\n",sizeof(obj));


    return 0;
}