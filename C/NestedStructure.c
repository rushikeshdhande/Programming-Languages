#include <stdio.h> 
struct Demo
{
    /* data */
    int i;
    float f;
};


struct Hello
{
    /* data */
    int no;
    float marks;
    struct Demo obj; //Nested
};

int main (){ 


    printf("Size of hello structure is : %lu\n", sizeof(struct Hello));//16


    return 0;
}
