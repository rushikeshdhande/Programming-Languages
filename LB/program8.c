/*
Write the code first understand the five step 
   Step 1: Understand the problem statement
   Step 2: Right the algorithm
   Step 3: Decide the programming
   Step 4: Write the program 
   Step 5: Test the program 

*/

/*
Algorithm
        START
            Accept first number as no1
            Accept second number as no2
            Perform Addition of no1 & no2
            Display the addition on Screen (Console)
        STOP


*/



#include<stdio.h>

float AdditionToNumbers(float fNo1 , float fNo2)
{
    int fSum = 0.0f;
    fSum = fNo1 + fNo2; //  Business Logic
    return fSum ;
}

int main ()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);
    
    fRet =  AdditionToNumbers (fValue1,fValue2);  // Function call
 
    printf("Addition is : %f\n", fRet );
    
    return 0;
}