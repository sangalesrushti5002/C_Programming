//Accept one number from user and print that number of * on screen

//////////////////////////
//
// Function Name : Accept
// Description : Accept one number from user and print that number of * on screen
// input : 5
// output : 
// Author : Srushti Subhash Sangale
// Date : 18/10/2026
//
/////////////////////////

#include<stdio.h>


void Accept(int iNo)
{
    int iCnt =0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    printf("*");
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}