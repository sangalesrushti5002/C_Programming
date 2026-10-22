//Accept one number from user and print that number of * on screen

//////////////////////////
//
// Function Name : Display
// Description : Accept one number from user and print that number of * on screen
// input : int
// output :  * pattern 
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;

    //write Updater
    while(iNo > iCnt )
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}