

//////////////////////////
//
// Function Name : EvenFactorial
// Description : write a program to find even factorial of given number
//               
// input : 5
// output :8
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo % 2 != 0)
    {
        iNo--;
    }

    for(iCnt= iNo; iCnt>=2; iCnt= iCnt - 2)
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

    iRet = EvenFactorial(iValue);

    printf("Factorial is : %d",iRet);


    return EXIT_SUCCESS;
}