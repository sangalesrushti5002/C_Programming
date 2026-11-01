//Write a C program that accepts number from user and prints its number line

//////////////////////////
//
// Function Name : Display
// Description : Write a C program that accepts number from user and print its number line
// input : -3
// output :-3 -2 -1 0 1 2 3
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=-iNo; iCnt<=iNo; iCnt++)
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

    Display(iValue);
    
    return EXIT_SUCCESS;
}