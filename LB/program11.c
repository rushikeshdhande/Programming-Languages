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

float AdditionTwoNumbers(
                            float fNo1,                 // First Input
                            float fNo2                  // Second Input
                        )
{
    float fSum = 0.0f;                                  // To Store the result

    if(fNo1 < 0.0f)                                     // Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                     // Updator
    {
        fNo2 = -fNo2;
    }
    
    fSum = fNo1 + fNo2;                                 //Business logic
    
    return fSum;
}   // End of AdditiontwoNumbers

//////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
//////////////////////////////////////////////////////////////

int main()
{  
    float fValue1 = 0.0f, fValue2 = 0.0f;               // To Accept User input
    float fRet = 0.0f;                                  // To Store the Result

    printf("Enter first number: \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);
    
    fRet = AdditionTwoNumbers(fValue1, fValue2);        // Method Call/ API Call/ Function Call

    printf("Addition of Two Numbers is : %f \n", fRet);

    return 0;
}   // End of Main

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
