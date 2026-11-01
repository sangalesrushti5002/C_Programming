

//////////////////////////
//
// Function Name : Display
// Description :write a program which accepts number from user and display below pattern
//               
// input : 3
// output :* * * # # #
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
      for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    }
    
}

int main()                                         
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

   
    
    return EXIT_SUCCESS;
}