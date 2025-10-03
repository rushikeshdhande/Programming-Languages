#include <stdio.h>

struct Demo
{
    int i;
    char ch;
    float f;
    int j;
};

int main()
{

    printf("size fo :%lu\n", sizeof(struct Demo));

    return 0;
}