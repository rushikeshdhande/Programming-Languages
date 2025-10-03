#include <stdio.h>

struct Demo
{
    int i;
    float f;
    struct Demo *ptr;
};

int main()
{
    printf("%lu\n", sizeof(struct Demo));
    return 0;
}