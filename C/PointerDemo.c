#include <stdio.h>

int main()
{
  int iValue = 11;
  char cValue = 'M';

  int *iPtr = &iValue;
  char *cPtr = &cValue; // Corrected pointer type to char*

  printf("Size of iPtr: %zu bytes\n", sizeof(iPtr));
  printf("Size of cPtr: %zu bytes\n", sizeof(cPtr));
   

  return 0;
}