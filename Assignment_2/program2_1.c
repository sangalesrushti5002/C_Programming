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

    //Updater
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
        

    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}