//accept an integer and determine wheather it is divisible by 5 without leaving any remainder.

//////////////////////////
//
// Function Name : CheckDivisibility
// Description :accept an integer and determine wheather it is divisible by 5 without leaving any remainder.
// input : 45                   23
// output :Divisible by 5       Not divisible by 5
// Author : Srushti Subhash Sangale
// Date : 21/10/2026
//
/////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf(" not Divisible by 5");

    }
   
   
   
}
int main()
{
    int iValue = 0;
    

    printf("Enter a Number :");
    scanf("%d",&iValue);

     CheckDivisibility(iValue);


    return EXIT_SUCCESS;
}