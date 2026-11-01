//////////////////////////
//
// Function Name : Count
// Description : write a program which accepts number from user and count frequency of digit which are less than 6
//       
//               
// input : 2359
// output :3
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////

 
#include<stdio.h>

int Count(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;

   while(iNo != 0)
   {
    iDigit = iNo % 10;

    if(iDigit <6)
    {
        iCnt++;
    }
    iNo = iNo /10;
   }
   return iCnt;
}
int main() 
    {
        int iValue= 0;
        int iRet = 0;
        
    
        printf("Enter number :\n");
        scanf("%d",&iValue);

        iRet =Count(iValue);

        printf("%d",iRet);
        
        return 0;
    }