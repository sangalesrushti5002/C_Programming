

//////////////////////////
//
// Function Name : MultipleDisplay
// Description : Write a program which accepts N from user and print first 5 multiples of N
// input : 4
// output :4 8 12 16 20
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=5; iCnt++)
    { 

        printf("%d\t",iNo * iCnt);
    }


}

int main()                                         
{
    int iValue = 0;

    printf("Enter the Frequency:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return EXIT_SUCCESS;
}