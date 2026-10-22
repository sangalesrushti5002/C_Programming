//Accept a user and check wheather it is even or odd 

//////////////////////////
//
// Function Name : ChkEven
// Description : //Accept a user and check wheather it is even or odd 
// input : int
// output : even or odd 
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");

    }
}
int main()
{
    int iValue = 0;
    BOOL bRet =  FALSE;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);


    return 0;
}