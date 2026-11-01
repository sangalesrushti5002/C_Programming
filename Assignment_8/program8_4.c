

//////////////////////////
//
// Function Name : Table
// Description :write a program which accepts number from user and display its table
//               
// input : 5
// output :5 10 15 20 25 30 35 40 45 50
// Author : Srushti Subhash Sangale
// Date : 31/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("%d\n",iCnt * iNo);
    }
    
}

int main()                                         
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Table(iValue);

   
    
    return EXIT_SUCCESS;
}