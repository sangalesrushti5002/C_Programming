//Accept one number and check wheather it is divisible by 5 or not

//////////////////////////
//
// Function Name : CheckDivisible
// Description : Accept one number and check wheather it is divisible by 5 or not
// input : user defined
// output : divisible by 5 or not
// Author : Srushti Subhash Sangale
// Date : 18/10/2026
//
/////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckDivisible(int iNo)
{
    if((iNo % 5 == 0))
    {
        return TRUE;
    }
    else
    {
        return FALSE;

    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet =  CheckDivisible(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");

    }
    else
    {
        printf("Not Divisible by 5");

    }

    return 0;
}