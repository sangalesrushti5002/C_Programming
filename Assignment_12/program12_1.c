//////////////////////////
//
// Function Name : RangeDisplay
// Description : write a program which accepts number from user and display its digits in reverse .
//       
//               
// input : 23     30
// output :212
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////

 
#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo = iNo  / 10;
    }
}
int main() 
    {
        int iValue= 0;
    
        printf("Enter number :\n");
        scanf("%d",&iValue);

        DisplayDigit(iValue);
        
        return 0;
    }