#include <stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{

    struct Demo obj;
    struct Demo *p = &obj;

    p->i = 11;
    p->f= 90.4f;
    p->j = 21;


    printf("%lu\n",p->i);
    printf("%lu\n",p->f);
    printf("%lu\n",p->j);


    return 0;
}