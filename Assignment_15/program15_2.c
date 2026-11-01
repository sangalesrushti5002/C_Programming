//////////////////////////
//
// Function Name : ChkGreater
// Description : write a program which accepts number from user and check weather that number is greater thatn 100 or not
//       
//               
// input : 101
// output :greater
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////

 
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
       int iValue  = 0;
       BOOL bRet = FALSE;

       printf("Enter number:\n");
       scanf("%d",&iValue);

       bRet= ChkGreater(iValue);

       if(bRet == TRUE)
       {
        printf("greater\n");
       }
       else
       {
         printf("smaller");
       }
                
        return 0;
    }