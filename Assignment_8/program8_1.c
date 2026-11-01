

//////////////////////////
//
// Function Name : Number
// Description : Write a program which accepts number from user and if number is less than 50 then print small
//               if it is greater than 50 and less than 100 then print medium ,if it is greater than 100 then print large.
// input : 75
// output :medium
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    

    if(iNo<50)
    {
        printf("Small");
    
    }
    else if(iNo>50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");

    }
    else
    {
        printf("number is too large");
    }

}

int main()                                         
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Number(iValue);
    
    return EXIT_SUCCESS;
}