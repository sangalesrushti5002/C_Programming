//////////////////////////
//
// Function Name : RangeDisplayEven
// Description : write a program which accepts range from user and prints all even numbers in between that range
//       
//               
// input : 10     20
// output :10    12    14  16    18  20
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////



#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt %2 ==0)
        {
        printf("%d\n",iCnt);
        }
    }
}
int main()
 {
    int iValue1= 0,iValue2=0;
    
    printf("Enter start point :\n");
    scanf("%d",&iValue1);

    printf("Enter end point :\n");
    scanf("%d",&iValue2);
    
    RangeDisplayEven(iValue1,iValue2);
    return 0;
 }