

//////////////////////////
//
// Function Name : FactorialDiff
// Description : write a program which returns diffrwnce between even and odd factorial
//               
// input : 5
// output :15
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
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo % 2 == 0)
    {
        iNo--;
    }

    for(iCnt= iNo; iCnt>=1; iCnt= iCnt - 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
    
}
int Diffrence(int iNo)
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}        

int main()                                         
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet =Diffrence(iValue);

    printf("Factorial is : %d",iRet);


    return EXIT_SUCCESS;
}