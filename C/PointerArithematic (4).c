#include <stdio.h>

int main()
{

    int Arr[] = {11, 21, 51, 101, 111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf(" Data pointed by q is : %ld\n",q-p);  // Allowed

    q= q-2;

    printf(" Data pointed by q is : %ld\n",*q);  // 1

    return 0;
}