//Write a C program that accepts two integerand determine whuc is greater if both numbers afre equal display an appropriate message .

//////////////////////////
//
// Function Name : CheckEvenOdd
// Description : Write a C program that accepts two integerand determine whuc is greater if both numbers afre equal display an appropriate message .
// input : 10   20          15  15
// output :20 -> greater    both numbers are equal
// Author : Srushti Subhash Sangale
// Date : 19/10/2026
//
/////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1,int iNo2)
{
   if(iNo1 > iNo2 )
   {
    printf("Greater number is %d\n",iNo1);
   }
   else if(iNo2 > iNo1 )
   {
    printf("Greater number is %d\n",iNo2);
   }
   else 
   {
    printf("Both numbers are equal");
   }
   
   
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two  Number :");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);


    return EXIT_SUCCESS;
}