//Write a C program that accepts number from user and prints that number of $ and * on screen 

//////////////////////////
//
// Function Name : Pattern
// Description : Write a C program that accepts number from user and prints that number of $ and * on screen 
// input : 3
// output :$    *   $   *   $   *
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t$");
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}