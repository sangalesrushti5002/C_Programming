//Write a program which accepts one number from user and print that number of even numbers on screen 

//////////////////////////
//
// Function Name : PrintEven
// Description : write a program which accepts one number from user and print that number of even numbers on screen 
// input : 5
// output : 2 4 6 8 10 
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d",iCnt * 2);
        iCnt++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}