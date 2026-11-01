//Write a C program that accepts number from user and print number till that number

//////////////////////////
//
// Function Name : Pattern
// Description : Write a C program that accepts number from user and print number till that number
// input : 5
// output :1 2 3 4 5
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");


}

int main()                                         
{
    int iValue = 0;

    printf("Enter the Frequency:\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return EXIT_SUCCESS;
}