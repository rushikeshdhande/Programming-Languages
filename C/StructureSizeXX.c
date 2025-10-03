#include <stdio.h>
// sequance is  matter   without pragma pack #pragma 
struct Demo
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
};

int main()
{

    printf("size fo :%lu\n", sizeof(struct Demo)); 
    return 0;
}