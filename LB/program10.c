/*
     Create the project first understand the 5 step carefuliy
    Step 1 - Understand the problem statement
    Step 2 - write the algorithm
    step 3 - Decide the programming language
    Step 4 - write the program
    Step 5 - Test the program
*/

/*
    Alogithm
    START
        Accept First number as No1
        Accept secnd number as No2
        If the input is negative then convert it into positive
        Perform Addition of No1 and No2
        Display the Addition on Console
    STOP
*/

//////////////////////////////////////////////////////////////
//
//  Required Header files
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name   :   AdditionTwoNumbers
//  Description     :   It is used to Perform Addition  
//  Input           :   Float, Float             
//  Output          :   Float
//  Author          :   Rushikesh Baban Dhande
//  Date            :   09/10/2025 
//
//////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }
    
    fSum = fNo1 + fNo2;                    //Business logic
    
    return fSum;
}

//////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
//////////////////////////////////////////////////////////////

int main()
{  
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number: \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);
    
    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition of Two Numbers is : %f \n", fRet);

    return 0;
}

//////////////////////////////////////////////////////////////
//  
//  Test cases successfully handled by th application
//
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5      Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2       Output : 13.7
//  Input1 : -10.5      Input2 : -3.2       Output : 13.7
//  Input1 : 10.5       Input2 : 0.0        Output : 10.5
//
//////////////////////////////////////////////////////////////
