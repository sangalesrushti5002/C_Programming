

//////////////////////////
//
// Function Name : ReverseTable
// Description :write a program which accepts number from user and display its table in reverse order
//               
// input : 5
// output :50 45 40 35 30 25 20 15 10 5
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void ReverseTable(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt>=1; iCnt--)
    {
        printf("%d\n",iNo * iCnt);
    }
    
}

int main()                                         
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    ReverseTable(iValue);

   
    
    return EXIT_SUCCESS;
}