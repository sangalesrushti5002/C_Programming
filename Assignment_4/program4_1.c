//Write a C program that accepts an integer from user and determined wheather the entered number is postive ,negative or zero 

//////////////////////////
//
// Function Name : CheckNumber
// Description : Write a program which accepts one number from user and check number is positive,negative or zero
// input : 15               -5                0
// output :positive number   negative number  Zero
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Number\n");
    }
    else if(iNo < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    CheckNumber(iValue);


    return EXIT_SUCCESS;
}