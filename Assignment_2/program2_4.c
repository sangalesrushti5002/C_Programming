//Accept two numbers from user and display first number in second number of times. 

//////////////////////////
//
// Function Name : Display
// Description : //Accept two numbers from user and display first number in second number of times.
// input : 2    4
// output : 2 2 2 2
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////
#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    //write Updater

    for(iCnt = 1;  iCnt <= iFrequency; iCnt++)
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter a number :");
    scanf("%d",&iValue);

    printf("Enter a frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}