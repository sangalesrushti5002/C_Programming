

//////////////////////////
//
// Function Name : Display
// Description :Accept single digit number from user and print it into word
//               
// input : 9       -4     12
// output :Nine    four   invalid number
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo<0)
        iNo = - iNo;
    
    if(iNo == 0)
       printf("Zero");   
       else if(iNo == 1)
       printf("one");   
       else if(iNo == 2)
       printf("two");   
       else if(iNo == 3)
       printf("three");   
       else if(iNo == 4)
       printf("four");    
       else if(iNo == 5)
       printf("five");   
       else if(iNo == 6)
       printf("six");   
       else if(iNo == 7)
       printf("seven");   
       else if(iNo == 8)
       printf("eight");   
       else if(iNo == 9)
       printf("nine");   
       else
        printf("Invalid number");
    
}

int main()                                         
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}