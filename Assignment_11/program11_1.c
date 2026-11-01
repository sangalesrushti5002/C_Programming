//////////////////////////
//
// Function Name : RangeDisplay
// Description : write a program which accepts range from user and prints numbers in between that range
//       
//               
// input : 10     20
// output :10   11  12  13  14  15  16  17  18  19  20
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////


#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
   int iCnt=0;

   for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        printf("%d\n",iCnt);
    }

}

int main()
 {
    int iValue1= 0,iValue2=0;
    
    printf("Enter start point :\n");
    scanf("%d",&iValue1);

    printf("Enter end point :\n");
    scanf("%d",&iValue2);
    
    RangeDisplay(iValue1,iValue2);
    return 0;
 }