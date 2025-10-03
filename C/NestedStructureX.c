#include <stdio.h> 
 

struct Hello
{
    /* data */
    int no;
    float marks;
     
    struct Demo
{
    /* data */
    int i;
    float f;
};

};

int main (){ 


    printf("Size of hello structure is : %lu\n", sizeof(struct Hello));//16


    return 0;
}
