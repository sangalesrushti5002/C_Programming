//////////////////////////
//
// Function Name : FactDiff
// Description : write a program which accepts number from user and return diffrence betwwen summation of all its  factor and nonfactors
//       
//               
// input : 12
// output :-34
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////

 
#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt = 0;
   int iSumFact = 0;
   int iNonSumFact = 0;
   
   for(iCnt =1; iCnt <=iNo; iCnt++)
   {
    if(iNo%iCnt == 0)
    {
        iSumFact = iSumFact + iCnt;
    }
    else
    {
        iNonSumFact = iNonSumFact + iCnt;
    }
   }
   return iSumFact - iNonSumFact ;
   
}
int main() 
    {
        int iValue= 0;
        int iRet = 0;

        printf("Enter number :\n");
        scanf("%d",&iValue);

        iRet = FactDiff(iValue);

        printf("Diffrence is :%d",iRet);

         return 0;
    }