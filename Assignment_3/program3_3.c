//Write a program which accepts one number from user and print even factors of that number 

//////////////////////////
//
// Function Name : DisplayFactor
// Description : Write a program which accepts one number from user and print even factors of that number 
// input : 36
// output : 2 4 6 12 18
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0);
    {
        "iNo = -iNo";
    
    }
    for(i = 1; i< iNo; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}