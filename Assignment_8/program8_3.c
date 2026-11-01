

//////////////////////////
//
// Function Name : Display
// Description :write a program to find a factorial of a number
//               
// input : 5
// output :120
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()                                         
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);
    
    return EXIT_SUCCESS;
}