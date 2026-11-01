//////////////////////////
//
// Function Name : RangeSum
// Description : write a program which accepts range from user and prints addition of  numbers in between that range
//       
//               
// input : 23     30
// output :212
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////

 
#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        iSum= iSum+iCnt;
    
    }
    return iSum;
}
int main() 
    {
        int iValue1= 0;
        int iValue2=0;
        int iRet =0;
  
        printf("Enter startpoint :\n");
        scanf("%d",&iValue1);

        printf("Enter end point :\n");
        scanf("%d",&iValue2);
        
        iRet =RangeSum(iValue1,iValue2);
        printf( "Addition is: %d",iRet);
        return 0;
    }