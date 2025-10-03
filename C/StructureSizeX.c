#include <stdio.h>
// sequance is  matter  # pragma pack
struct Demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};

int main()
{

    printf("size fo :%lu\n", sizeof(struct Demo));

    return 0;
}