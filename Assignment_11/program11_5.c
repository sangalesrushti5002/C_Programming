//////////////////////////
//
// Function Name : RangeDisplay
// Description : write a program which accepts range from user and prints  all  numbers in between that rangein reverse
//       
//               
// input : 23     30
// output :212
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////

 
#include<stdio.h>

int RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    
    for(iCnt=iEnd; iCnt>=iStart; iCnt--)
    {
       printf("%d\t",iCnt);
        
    }
    return iCnt;
}
int main() 
    {
        int iValue1= 0;
        int iValue2=0;
       
  
        printf("Enter startpoint :\n");
        scanf("%d",&iValue1);

        printf("Enter end point :\n");
        scanf("%d",&iValue2);
        
        RangeDisplay(iValue1,iValue2);
        
        return 0;
    }