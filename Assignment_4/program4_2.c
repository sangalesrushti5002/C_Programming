//Write a C program that accepts an integer from user and determined wheather the entered number is Even or Odd

//////////////////////////
//
// Function Name : CheckEvenOdd
// Description : Write a program which accepts one number from user and check number is Even or Odd
// input : 4       5         
// output :Even    Odd
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("It is a Even number\n");
    }
    else
    {
        printf("It is a Odd number");
    }
   
}
int main()
{
    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return EXIT_SUCCESS;
}