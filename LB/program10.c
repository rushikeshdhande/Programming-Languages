/*
     step1 : understand the problem statment
     step2 : write the algorithm
     step3 : decide the programming language
     step4 : write the program 
     step5 : test the program
*/
/*
    Algorithm

    START
          Accept first number as No1
          Accept second number as No2
          If the input is negative convert it into positive
          perform Additon of No1 & No2
          Display the Addition on screen
    STOP
*/

////////////////////////////////////////////////////////
///
/// Required header files
///
////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////
//  
//  function name: AdditionTwoNumbers
//  discription:   It is used to perform
//  input:         Float , Float 
//  output:        Float 
//  auther:        Dhananjay Ravindra Khaire 
//  date:          09/10/2025 
//
////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fsum = 0.0f;

    // updator
    if(fNo1 < 0.0f)
    {
        fNo1 = fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = fNo2;
    }

    fsum = fNo1 + fNo2;    // business logic

    return fsum;
}

////////////////////////////////////////////////////////
//
// Entry point function for the application
//
////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition is : %f\n",fRet);


    return 0;
}
////////////////////////////////////////////////////////
//
//  Testcases succefully handeled by the application
//  
//   Input : 10.5    Input : 3.2     Output : 13.7
//   Input : -10.5   Input : 3.2     Output : 13.7
//   Input : 10.5    Input : -3.2    Output : 13.7
//   Input : -10.5   Input : -3.2    Output : 13.7
//   Input : 10.5    Input : 0.0     Output : 10.5
//
////////////////////////////////////////////////////////